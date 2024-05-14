/// This is the implementation of the preview dialog,
/// which allows the user to control the speed at which they would like to see their preview,
/// as well as see the preview.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#include "dialog.h"
#include "QtCore/qtimer.h"
#include "ui_dialog.h"

/*
 * Constructor
 * */
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // initializes timer
    timer = new QTimer(this);

    // set fps starting speed to 8
    fps = 2;

    // set fps sliders max, min, and start value
    ui->fpsSlider->setMinimum(1);
    ui->fpsSlider->setMaximum(10);
    ui->fpsSlider->setValue(2);

    // connectoions to start and stop the frame timer
    connect(ui->fpsSlider, &QSlider::sliderMoved, this, &Dialog::setFps);
    connect(ui->buttonBox, &QDialogButtonBox::clicked, this, &Dialog::stopTimer);
}

/*
 * Destructor
 * */
Dialog::~Dialog()
{
    delete ui;
    delete timer;
}

void Dialog::updateSpriteSize(int size)
{
    spriteSize = size;
}

// slot that sets the fps of the sprite
void Dialog::setFps(int seconds){
    fps = seconds;
}

// slot that catches signal from previewButton
// starts preview
void Dialog::start(){
    // set to false (preview running)
    stopPreview = false;
    getImage();
}

// slot emits signal to get next image
// on the preview panel
void Dialog::getImage()
{
    // if close buttons were not clicked
    // send a signal to get next image in sprite
    if(!stopPreview)
    {
        timer->singleShot(800 / fps, this, [this]() {emit getNextFrame();});
    }
}

// sets to true when close buttons are clicked
// bool used in startTimer
void Dialog::stopTimer()
{
    // set to true (preview stopped)
    stopPreview = true;
}

// slot that sets the pixmap of the QLabel on the preview panel
// that was sent from the model
void Dialog::updateImage(QImage image)
{
    ui->drawPanel->setPixmap(QPixmap::fromImage(image).scaled(QSize(spriteSize, spriteSize), Qt::KeepAspectRatio, Qt::FastTransformation));
}
