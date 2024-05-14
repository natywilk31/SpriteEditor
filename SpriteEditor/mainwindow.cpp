/// This is the implementation of the main window,
/// which holds the elements of our UI.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#include "mainwindow.h"
#include "sizeInput.h"
#include "ui_mainwindow.h"
#include <QColorDialog>

/*
 * Constructor
 * */
MainWindow::MainWindow(Model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Adds a fileMenu and MenuActions
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
    QAction *action = new QAction(tr("&Open"), this);
    fileMenu->addAction(action);
    action = new QAction(tr("&New"), this);
    fileMenu->addAction(action);
    action = new QAction(tr("&Save"), this);
    fileMenu->addAction(action);

    // set drawRadioButton to clicked
    ui->drawButton->click();

    // set start max and min to frameSelectionBox
    ui->frameSelectionBox->setMinimum(1);
    ui->frameSelectionBox->setMaximum(1);

    // disable next, prev, delete frame buttons
    ui->prevFrameButton->setEnabled(false);
    ui->nextFrameButton->setEnabled(false);
    ui->deleteFrameButton->setEnabled(false);

    // connection to start the program
    connect(this, &MainWindow::start, &model, &Model::addFirstFrame);
    connect(this, &MainWindow::start, ui->drawPanel, &DrawPanel::setScale);
    connect(&model, &Model::sendScaleSize, ui->drawPanel, &DrawPanel::setScale);

    // connects colorPickerButton to mainwindow color picker
    connect(ui->colorPickerButton, &QAbstractButton::clicked, this, &MainWindow::onColorPickerClicked);

    // connects erase and draw buttons to slots in the model
    connect(ui->drawButton, &QAbstractButton::clicked, &model, &Model::drawOn);
    connect(ui->eraseButton, &QAbstractButton::clicked, &model, &Model::eraserOn);

    // connects add, delete, copy, next, prev, select frame buttons to slots in the model
    connect(ui->addFrameButton, &QAbstractButton::clicked, &model, &Model::addFrame);
    connect(ui->deleteFrameButton, &QAbstractButton::clicked, &model, &Model::deleteFrame);
    connect(ui->copyCurrentFrameButton, &QAbstractButton::clicked, &model, &Model::copyCurrentFrame);
    connect(ui->nextFrameButton, &QAbstractButton::clicked, &model, &Model::nextFrame);
    connect(ui->prevFrameButton, &QAbstractButton::clicked, &model, &Model::prevFrame);
    connect(ui->frameSelectionBox, &QSpinBox::valueChanged, &model, &Model::jumpToFrame);

    // connects mirror buttons to slots in the model
    connect(ui->verticalAxisMirror, &QPushButton::toggled, &model, &Model::mirrorVerticalAxis);
    connect(ui->horizontalAxisMirror, &QPushButton::toggled, &model, &Model::mirrorHorizontalAxis);
    connect(ui->diagonalAxisMirror, &QPushButton::toggled, &model, &Model::mirrorDiagonalAxis);

    // connects the previewButton to slots that start the popup
    connect (ui->previewSpriteButton, &QPushButton::clicked, this, &MainWindow::previewPopup);
    connect (ui->previewSpriteButton, &QPushButton::clicked, &dialog, &Dialog::start);

    // connects signal from dialog to get the next frame of the sprite in the model
    connect(&dialog, &Dialog::getNextFrame, &model, &Model::imageOnPreviewSender);

    // connects signals in the model to update image and send back a signal to keep the preview going
    connect(&model, &Model::updateImageOnPreview, &dialog, &Dialog::updateImage);
    connect(&model, &Model::sendBack, &dialog, &Dialog::getImage);

    // connects the undo button interactions to send to model for updating
    connect(ui->UndoButton, &QAbstractButton::clicked, &model, &Model::undoStroke);
    connect(ui->drawPanel, &DrawPanel::updateStrokeState, &model, &Model::insertIntoStrokeState);

    // connects the undo button interactions to send to model for updating
    connect(ui->RedoButton, &QAbstractButton::clicked, &model, &Model::redoStroke);

    // connects drawing interactions to the model for updating
    connect(ui->drawPanel, &DrawPanel::drawLineTo, &model, &Model::drawLineTo);
    connect(ui->drawPanel, &DrawPanel::updateClickPoint, &model, &Model::updateClickPoint);
    connect(this, &MainWindow::sendPenColor, &model, &Model::getPenColor);

    // connects the model to the views for updating
    connect(&model, &Model::updateImageOnPanel, ui->drawPanel, &DrawPanel::displayDrawing);
    connect(&model, &Model::sendNumberOfFrames, ui->frameSelectionBox, &QSpinBox::setValue);
    connect(&model, &Model::sendNumberOfFrames, this, &MainWindow::updateMaxFrame);
    connect(&model, &Model::sendCurrentFrame, this, &MainWindow::updateButtons);

    //connects the model to view to display the warning message when something is not saved
    connect(&model, &Model::openSaveWarning, this, &MainWindow::saveWarningPopup);
    connect(this, &MainWindow::saveWarningSave, &model, &Model::save);
    connect(this, &MainWindow::saveWarningDiscard, &model, &Model::isDiscarded);

    // connects the fileMenu to the model
    connect(fileMenu->actions().at(2), &QAction::triggered, &model, &Model::save);
    connect(fileMenu->actions().at(1), &::QAction::triggered, &model, &Model::newFile);
    connect(fileMenu->actions().at(0), &::QAction::triggered, &model, &Model::open);

    // connects to the size dialog to get the user's size of sprite
    connect(&sizeGetter, &sizeInput::sendValue, &dialog, &Dialog::updateSpriteSize);

    // calls method to start the program
    connect(&sizeGetter, &sizeInput::sendValue, this, &MainWindow::startSignal);
    connect(&model, &Model::toSizeGetter, this, &MainWindow::startSizeInput);

    // get things rolling on getting the size
    startSizeInput();
}

/*
 * Destructor
 * */
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startSizeInput()
{
    // creates a modal size dialog window
    sizeGetter.exec();
}

// private method that mits a signal to the model
// to start the program
void MainWindow::startSignal(int sizeVal)
{
    emit start(sizeVal);
}

// slot that updates the selectionBoxMax value from the model
void MainWindow::updateMaxFrame(int frameCount)
{
    ui->frameSelectionBox->setMaximum(frameCount);
}

// slot that updates frameButtons based on the current frame
void MainWindow::updateButtons(int currentFrame)
{
    // adjusts to ones based from model 0 based currentFrameCount
    currentFrame += 1;

    // sets the value of the frameNumberBox
    ui->frameSelectionBox->setValue(currentFrame);

    // if currentFrame is first disable prev frame and delete buttons
    // else enable them
    if(currentFrame == 1)
    {
        ui->prevFrameButton->setEnabled(false);
        ui->deleteFrameButton->setEnabled(false);
    }
    else
    {
        ui->prevFrameButton->setEnabled(true);
        ui->deleteFrameButton->setEnabled(true);
    }

    // if currentFrame = maximum (last frame), disable next frame button
    // else enable it
    if(currentFrame == ui->frameSelectionBox->maximum())
    {
        ui->nextFrameButton->setEnabled(false);
    }
    else
    {
        ui->nextFrameButton->setEnabled(true);
    }
}

// slot that displays the dialogue box when the previewButton is clicked
void MainWindow::previewPopup()
{
    dialog.show();
}

void MainWindow::saveWarningPopup()
{
    SaveWarning saveWarning(this);
    // gets the user input from the modal saveWarning dialog box
    int choice = saveWarning.exec();
    // using that input, either save or discard their work
    if(choice == QMessageBox::Save)
    {
        emit saveWarningSave();
    }
    else
    {
        emit saveWarningDiscard();
    }
}

// slot to send penColor to the model
void MainWindow::onColorPickerClicked()
{
    // gets color from the colorPicker
    // emits color to the model
    currentPenColor = new QColor(QColorDialog::getColor(Qt::white, this, tr("Choose Color")));
    if (currentPenColor->isValid()) {
        emit sendPenColor(*currentPenColor);
    }
}
