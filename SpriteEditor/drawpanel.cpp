/// This is the implementation of the draw panel,
/// which is where the user edits the pixels of their sprite.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler


#include <QMouseEvent>
#include "drawpanel.h"

/*
* Constructor
* */
DrawPanel::DrawPanel(QWidget *parent)
    : QLabel(parent)
{
}

/*
* Destructor
* */
DrawPanel::~DrawPanel(){

}

// Tracks mousePresses to send to the model
void DrawPanel::mousePressEvent(QMouseEvent *event)
{
    // if left key on mousepad is clicked
    if (event->button() == Qt::LeftButton) {

        // sets a point of the click
        int x = event->position().x() / scaleSize;
        int y = event->position().y() / scaleSize;
        QPoint scaledPoint(x, y);

        // clears vector (new click and drag)
        // adds point to currentStroke
        currentStroke.clear();
        currentStroke.push_back(scaledPoint);

        // send point to the model
        // set drawing to true for other mouseEvent checks
        emit updateClickPoint(scaledPoint);
        drawing = true;
    }
}

// Tracks mouseMoves to send to the model
void DrawPanel::mouseMoveEvent(QMouseEvent *event)
{
    // if left key on mousepad is moved and drawing
    if ((event->buttons() & Qt::LeftButton) && drawing){

        // sets a point of the mouse move
        int x = event->position().x() / scaleSize;
        int y = event->position().y() / scaleSize;
        QPoint scaledPoint(x, y);

        // adds point to currentStroke
        currentStroke.push_back(scaledPoint);

        // sends point to the model for drawing
        emit drawLineTo(scaledPoint);
    }
}

// Tracks mouseRelease to send to the model
void DrawPanel::mouseReleaseEvent(QMouseEvent *event)
{
    // if left key on mousepad is released and drawing
    if (event->button() == Qt::LeftButton && drawing) {

        // sets a point of the mouse move
        int x = event->position().x() / scaleSize;
        int y = event->position().y() / scaleSize;
        QPoint scaledPoint(x, y);

        // adds point to currentStroke
        // adds finished currentStroke to the strokes vector (holds all strokes)
        currentStroke.push_back(scaledPoint);
        strokes.push_back(currentStroke);

        // sends updates to the model
        // sets drawing to false for mouseEvents
        emit drawLineTo(scaledPoint);
        emit updateStrokeState();
        drawing = false;
    }
}

// slot that displays the image sent from the model on the panel
void DrawPanel::displayDrawing(QImage image){
    // sets scaled pixmap on the panel to display image
    setPixmap(QPixmap::fromImage(image).scaled(QSize(width(), height()), Qt::KeepAspectRatio, Qt::FastTransformation));
}

void DrawPanel::setScale(int sizeVal)
{
    // the drawPanel is 416 x 416, so we need to figure out how we should scale it based off of the sprite size
    scaleSize = 416 / double(sizeVal);

    emit sendScaleSize(scaleSize);
}
