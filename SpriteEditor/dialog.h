/// This is the header file of the preview  dialog,
/// which allows the user to control the speed at which they would like to see their preview,
/// as well as see the preview.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

// Respresents a Dialog Pop-Up class
class Dialog : public QDialog
{
    Q_OBJECT

public:
    /*
     * constructor
     * */
    explicit Dialog(QWidget *parent = nullptr);
    /*
     * destructor
     * */
    ~Dialog();

public slots:
    // slot that updates the pixmap to
    // display an image on the panel
    void updateImage(QImage image);

    // slot that sets the fps of the sprite
    void setFps(int seconds);

    // slots to start and stop the timer and get the image from the model
    // based on if the window is open or not
    void start();
    void stopTimer();
    void getImage();

    // slot to update the size of a sprite
    void updateSpriteSize(int);

signals:
    // signal sent to model to tell it
    // to send the next frame in the sprite
    void getNextFrame();

private:
    Ui::Dialog *ui;

    // timer used for the panel
    QTimer * timer;

    // int that stores the speed the
    // panel emits getNextFrame()
    int fps;

    int spriteSize;

    // determines if preview should stop
    bool stopPreview;
};

#endif // DIALOG_H
