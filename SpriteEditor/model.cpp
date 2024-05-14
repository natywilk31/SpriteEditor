/// This is the implementation of the model,
/// which controls the logic of our sprite editor.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#include "model.h"
#include <QImage>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QTimer>
#include <QObject>
#include <QColorDialog>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFileDialog>
#include <QDir>
#include <QFile>

Model::Model(QObject *parent) : QObject(parent)
{

    // set everything to beginning state
    currentFrame = 0;
    vecSize = 0;
    penColor = Qt::blue;
    penWidth = 1;
    erasing = false;
    discarded = false;
    mirrorHorizontalAxisOn = false;
    mirrorVerticalAxisOn = false;
    mirrorDiagonalAxisOn = false;
    fps = 0;
    currentPreviewFrame = 0;
    saved = true;
}

Model::~Model()
{

}



QJsonObject colorToJson(const QColor& color)
{
    // helper to convert colors into json
    QJsonObject jsonColor;
    jsonColor["red"] = color.red();
    jsonColor["green"] = color.green();
    jsonColor["blue"] = color.blue();
    jsonColor["alpha"] = color.alpha();
    return jsonColor;
}

void Model::save()
{
    // Create a JSON object to store frames and pixels
    QJsonObject framesJson;

    // Create a JSON array for frames
    QJsonArray framesArray;

    // iterate through each frame, and save it
    for(int i = 0; i <= vecSize - 1; i++){

        QImage frameInVec = imageVec.at(i);

        QJsonObject frame;
        frame["frame_number"] = i;

        QJsonObject scaleSizeObject;
        frame["scale_size"] = scaleSize;

        QJsonArray pixels;

        int frameX = frameInVec.width();
        int frameY = frameInVec.height();

        // for each frame, get each x,y point
        for(int y = 0; y < frameY; y++){
            for(int x = 0; x < frameX; x++){
                QJsonObject pixelColor = colorToJson(frameInVec.pixelColor(QPoint(x, y)));
                pixels.append(QJsonObject{{"point", QJsonArray{x, y}}, {"color", pixelColor}});
            }
        }

        // save it to the frame array
        frame["pixels"] = pixels;
        framesArray.append(frame);
    }

    // Add frames array to the main JSON object
    framesJson["frames"] = framesArray;

    // convert to json
    QJsonDocument jsonDoc(framesJson);

    // Convert the JSON document to a QByteArray
    QByteArray byteArray = jsonDoc.toJson(QJsonDocument::Compact);

   QString filePath = QFileDialog::getSaveFileName(nullptr, "Save SSP File", QDir::homePath(), "SSP Files (*.ssp)");

    // Open the file
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly))
    {
        // Write the serialized JSON data to the file
        file.write(byteArray);

        // Close the file
        file.close();
    }
    saved = true;
}

void Model::open()
{
    // if the user might lose work, open our saveWarning
    if (!saved && !discarded)
    {
        emit openSaveWarning();
    }

    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open SSP File", QDir::homePath(), "SSP Files (*.ssp)");

    if (!filePath.isEmpty())
    {
        // Open the file in read-only mode
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly)) {
            // Read the JSON data from the file
            QByteArray byteArray = file.readAll();
            file.close();

            // Parse the JSON data
            QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArray);
            if (!jsonDoc.isNull()) {
                QJsonObject framesJson = jsonDoc.object();

                // Retrieve the frames array from the JSON object
                QJsonArray framesArray = framesJson.value("frames").toArray();

                // Clear the existing imageVec
                imageVec.clear();

                // Iterate through the frames array and populate imageVec
                for (const QJsonValue& frameValue : framesArray) {
                    QJsonObject frame = frameValue.toObject();

                    // Extract frame number
                    scaleSize = frame.value("scale_size").toInt();

                    // Extract pixels array
                    QJsonArray pixelsArray = frame.value("pixels").toArray();

                    // Create a QImage and populate it with pixels
                    QImage frameImage(scaleSize, scaleSize, QImage::Format_ARGB32);
                    frameImage.fill(Qt::transparent);

                    // go through each pixel
                    for (const QJsonValue& pixelValue : pixelsArray) {
                        QJsonObject pixel = pixelValue.toObject();

                        // Extract pixel position
                        QJsonArray pointArray = pixel.value("point").toArray();
                        int x = pointArray.at(0).toInt();
                        int y = pointArray.at(1).toInt();

                        // Extract pixel color
                        QColor color = jsonToColor(pixel.value("color").toObject());

                        // Set pixel color in the QImage
                        frameImage.setPixelColor(x, y, color);
                        // frameImage.setPixelColor(x, y, color);
                    }

                    // Add the QImage to imageVec
                    imageVec.push_back(frameImage);
                }

                // send signals and update state
                saved = true;
                emit sendNumberOfFrames(imageVec.size());
                emit updateImageOnPanel(imageVec.at(0));
                emit sendScaleSize(scaleSize);
                currentFrame = 0;
                vecSize = imageVec.size();
                emit sendCurrentFrame(currentFrame);
                emit sendNumberOfFrames(imageVec.size());
                discarded = false;
                return;
            }
        }
    }

}

// helper to convert from json color to qtcolor
QColor Model::jsonToColor(const QJsonObject &colorObject) {
    int red = colorObject["red"].toInt();
    int green = colorObject["green"].toInt();
    int blue = colorObject["blue"].toInt();
    int alpha = colorObject["alpha"].toInt(); // Optional, depending on your JSON structure

    return QColor(red, green, blue, alpha);
}


void Model::newFile()
{
    // if the user could be losing work, warn them
    if (!saved && !discarded)
    {
        emit openSaveWarning();
    }

    // reset the state and get it ready to open a new
    imageVec.clear();
    currentFrame = 0;
    vecSize = 0;
    penColor = Qt::blue;
    penWidth = 1;
    erasing = false;
    discarded = false;
    mirrorHorizontalAxisOn = false;
    mirrorVerticalAxisOn = false;
    mirrorDiagonalAxisOn = false;
    fps = 0;
    previewTimer = new QTimer(this);
    currentPreviewFrame = 0;
    saved = true;

    // get the size
    emit toSizeGetter();
}

void Model::isDiscarded()
{
    discarded = true;
}

// setup for the first frame of a sprite
void Model::addFirstFrame(int sizeVal){


    scaleSize = sizeVal;
    QImage blankImage(scaleSize, scaleSize, QImage::Format_ARGB32);
    blankImage.fill(Qt::transparent);
    std::vector<QImage> firstFrameStates;
    firstFrameStates.push_back(blankImage);
    strokeStates.push_back(firstFrameStates);
    std::vector<QImage> firstFrameStatesRedo;
    redoStrokeStates.push_back(firstFrameStatesRedo);

    // For undo
    blankImage.fill(Qt::transparent);
    std::vector<QImage> firstStateofFrame;
    firstStateofFrame.push_back(blankImage);
    strokeStates.push_back(firstStateofFrame);

    // for redo
    std::vector<QImage> frameStatesRedo;
    redoStrokeStates.push_back(frameStatesRedo);

    // set up the drawing layer
    QImage drawingLayer(scaleSize, scaleSize, QImage::Format_ARGB32);
    drawingLayer.fill(Qt::transparent);

    // add onto the frame vector
    auto it = imageVec.begin() + currentFrame;
    imageVec.insert(it, drawingLayer);

    vecSize++;

    // send out signals of the frame we created and the number of frames
    emit updateImageOnPanel(drawingLayer);
    emit sendNumberOfFrames(vecSize);
    emit sendCurrentFrame(currentFrame);
}

// move to the next frame
void Model::nextFrame()
{
    // iterate and send out info
    currentFrame++;
    QImage image = imageVec.at(currentFrame);
    emit sendCurrentFrame(currentFrame);
    emit updateImageOnPanel(image);
}
// move to previous frame in the view
void Model::prevFrame()
{
    // decrement and send info
    currentFrame--;
    QImage image = imageVec.at(currentFrame);
    emit sendCurrentFrame(currentFrame);
    emit updateImageOnPanel(image);
}

// jump to a frame
void Model::jumpToFrame(int frame){
    // get frame number and send out info
    currentFrame = frame - 1;
    QImage image = imageVec.at(currentFrame);
    emit sendCurrentFrame(currentFrame);
    emit updateImageOnPanel(image);
}

// add a frame to the current sprite
void Model::addFrame(){
    // For undo
    QImage blankImage(scaleSize, scaleSize, QImage::Format_ARGB32);
    blankImage.fill(Qt::transparent);
    std::vector<QImage> firstStateofFrame;
    firstStateofFrame.push_back(blankImage);
    strokeStates.push_back(firstStateofFrame);

    // for redo
    std::vector<QImage> frameStatesRedo;
    redoStrokeStates.push_back(frameStatesRedo);

    saved = false;
    QImage image(scaleSize, scaleSize, QImage::Format_ARGB32);
    image.fill(Qt::transparent);

    // increment current frame and size
    currentFrame++;
    vecSize++;

    auto it = imageVec.begin() + currentFrame;
    imageVec.insert(it, image);

    // send out info
    emit updateImageOnPanel(image);
    emit sendNumberOfFrames(imageVec.size());
    emit sendCurrentFrame(currentFrame);
}

// if the user wants to duplicate the frame
void Model::copyCurrentFrame(){
    // create a new frame
    QImage blankImage(scaleSize, scaleSize, QImage::Format_ARGB32);
    blankImage.fill(Qt::transparent);
    std::vector<QImage> firstStateofFrame;
    firstStateofFrame.push_back(blankImage);
    strokeStates.push_back(firstStateofFrame);

    // for redo
    std::vector<QImage> frameStatesRedo;
    redoStrokeStates.push_back(frameStatesRedo);

    saved = false;
    QImage image(imageVec.at(currentFrame));

    currentFrame++;
    vecSize++;

    auto it = imageVec.begin() + currentFrame;
    imageVec.insert(it, image);

    // send out the new info
    emit updateImageOnPanel(image);
    emit sendNumberOfFrames(imageVec.size());
    emit sendCurrentFrame(currentFrame);
}

// delete the current frame
void Model::deleteFrame(){
    // set state info
    saved = false;
    auto it = imageVec.begin() + currentFrame;
    imageVec.erase(it);

    // decrement size, and then figure out where we are now
    vecSize--;
    if(currentFrame == 0){
        currentFrame++;
    }
    else{
        currentFrame--;
    }

    QImage image = imageVec.at(currentFrame);

    // send out info
    emit updateImageOnPanel(image);
    emit sendNumberOfFrames(vecSize);
    emit sendCurrentFrame(currentFrame);
}

void Model::getPenColor(const QColor &color)
{
    penColor = color;
}

void Model::updateClickPoint(QPoint pt)
{
    clickPoint = pt;
}

void Model::drawLineTo(const QPoint &endPoint)
{
    // set state
    saved = false;
    QImage image = imageVec.at(currentFrame);
     QPainter painter(&image);
    painter.setPen(QPen(penColor, penWidth, Qt::SolidLine, Qt::RoundCap,
                        Qt::RoundJoin));

    // see if we're erasing or drawing
    if(erasing)
    {
        painter.setCompositionMode(QPainter::CompositionMode_Clear);
    }

    painter.drawLine(clickPoint, endPoint);

    // see if we need to mirror in any direction
    if (mirrorVerticalAxisOn)
    {
        QPoint mirrorClickPoint(image.width() - clickPoint.x(), clickPoint.y());
        QPoint mirrorEndPoint(image.width() - endPoint.x(), endPoint.y());
        painter.drawLine(mirrorClickPoint, mirrorEndPoint);
    }

    if (mirrorHorizontalAxisOn)
    {
        QPoint mirrorClickPoint(clickPoint.x(), image.height() - clickPoint.y());
        QPoint mirrorEndPoint(endPoint.x(), image.height() - endPoint.y());
        painter.drawLine(mirrorClickPoint, mirrorEndPoint);
    }

    if (mirrorDiagonalAxisOn)
    {
        QPoint mirrorClickPoint(image.width() - clickPoint.x(), image.height() - clickPoint.y());
        QPoint mirrorEndPoint(image.width() - endPoint.x(), image.height() - endPoint.y());
        painter.drawLine(mirrorClickPoint, mirrorEndPoint);
    }

    // update state
    auto it = imageVec.begin() + currentFrame;
    imageVec.erase(it);
    imageVec.insert(it, image);

    clickPoint = endPoint;
    saved = false;
    emit updateImageOnPanel(image);
}

void Model::eraserOn()
{
    erasing = true;
}

void Model::drawOn()
{
    erasing = false;
}

void Model::mirrorHorizontalAxis(bool onOrOff)
{
    mirrorHorizontalAxisOn = onOrOff;
}

void Model::mirrorVerticalAxis(bool onOrOff)
{
    mirrorVerticalAxisOn = onOrOff;
}

void Model::mirrorDiagonalAxis(bool onOrOff)
{
    mirrorDiagonalAxisOn = onOrOff;
}

void Model::imageOnPreviewSender()
{
    // see what frame we're on
    if(currentPreviewFrame >= vecSize){ //imageVec.size()
        currentPreviewFrame = 0;
    }

    // send out the new info
    QImage image = imageVec.at(currentPreviewFrame);
    emit updateImageOnPreview(image);
    // previewTimer->singleShot(fps * 1000, this, [this]() {emit sendBack();});
    emit sendBack();
    currentPreviewFrame++;
}

void Model::undoStroke()
{
    saved = false;

    // Using states to undo
    if(strokeStates.at(currentFrame).size() == 1)
        return;

    redoStrokeStates.at(currentFrame).push_back(strokeStates.at(currentFrame).back());
    strokeStates.at(currentFrame).pop_back();

    QImage prevImage = strokeStates.at(currentFrame).back();

    // update state
    auto it = imageVec.begin() + currentFrame;
    imageVec.erase(it);
    imageVec.insert(it, prevImage);

    emit updateImageOnPanel(prevImage);
}

void Model::insertIntoStrokeState()
{

    QImage stateImage = imageVec.at(currentFrame);
    strokeStates.at(currentFrame).push_back(stateImage);
}

void Model::redoStroke()
{
    // redraw the previous stroke, and update state as necessary
    saved = false;

    if(redoStrokeStates.at(currentFrame).empty())
        return;

    QImage nextImage = redoStrokeStates.at(currentFrame).back();
    strokeStates.at(currentFrame).push_back(nextImage);
    redoStrokeStates.at(currentFrame).pop_back();

    auto it = imageVec.begin() + currentFrame;
    imageVec.erase(it);
    imageVec.insert(it, nextImage);

    emit updateImageOnPanel(nextImage);
}
