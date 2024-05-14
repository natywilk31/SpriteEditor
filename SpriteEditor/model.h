/// This is the header file of the model,
/// which handles all logic for our sprite editor.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QImage>
#include <QMap>
#include <QTimer>
#include <savewarning.h>

class Model : public QObject{

    Q_OBJECT

public:
    explicit Model(QObject *parent = nullptr);
    ~Model();

public slots:
    // change the click point
    void updateClickPoint(QPoint pt);

    // receive the pen color
    void getPenColor(const QColor &color);

    // draw a line between two points
    void drawLineTo(const QPoint &endPoint);

    // check if we're drawing or erasing
    void drawOn();
    void eraserOn();

    // frame tools slots
    void addFrame();
    void copyCurrentFrame();
    void deleteFrame();
    void nextFrame();
    void prevFrame();
    void addFirstFrame(int sizeVal);
    void jumpToFrame(int frame);

    // mirror slots
    void mirrorVerticalAxis(bool onOrOff);
    void mirrorHorizontalAxis(bool onOrOff);
    void mirrorDiagonalAxis(bool onOrOff);

    // undo redo slots
    void undoStroke();
    void redoStroke();
    void insertIntoStrokeState();

    // file menu slots
    void save();
    void open();
    void newFile();

    // keep track of image on preview
    void imageOnPreviewSender();

    // discard the current work
    void isDiscarded();

signals:
    // update current view
    void updateImageOnPanel(QImage image);
    // send how many frames we have
    void sendNumberOfFrames(int frames);
    // send the current frame we're working with
    void sendCurrentFrame(int frame);
    // show the preview dialog box
    void showPreviewDialog(bool showOrNot);
    // draw the current preview image
    void paintPreviewFrame(QImage image);
    // change the image on the preview dialog
    void updateImageOnPreview(QImage image);
    void sendBack();
    // open the save warning so the user won't lose their info
    void openSaveWarning();
    // send out the scale size we're using
    void sendScaleSize(int);
    // go to the size
    void toSizeGetter();

private:
    // member variables to track state
    int vecSize;
    int currentFrame;
    QPoint clickPoint;
    std::vector<QImage> imageVec; // vector?
    int scaleSize;
    int fps;
    QTimer *previewTimer;
    QColor penColor;
    int penWidth;
    bool erasing;
    bool discarded;
    bool mirrorHorizontalAxisOn;
    bool mirrorVerticalAxisOn;
    bool mirrorDiagonalAxisOn;
    long currentPreviewFrame;
    bool saved;

    // helper for json
    QColor jsonToColor(const QJsonObject &colorObject);

    // for undo
    std::vector<std::vector<QImage>> strokeStates;

    // for redo
    std::vector<std::vector<QImage>> redoStrokeStates;

};

#endif // MODEL_H
