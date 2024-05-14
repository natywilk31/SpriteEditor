/// This is the header file of the main window,
/// It holds the elements of our UI.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "model.h"
#include "dialog.h"
#include "sizeInput.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// Respresents a MainWindow class
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*
     * Constructor
     * */
    MainWindow(Model& model, QWidget *parent = nullptr);
    /*
     * Destructor
     * */
    ~MainWindow();

public slots:
    // changes the color of the pen
    // when the colorPicker button is clicked
    void onColorPickerClicked();

    // gets updated frame count and currentFrame count
    // when frames are added to the model
    void updateMaxFrame(int count);
    void updateButtons(int count);

    // shows the dialog popup when previewButton is clicked
    void previewPopup();

    // shows saveWarning dialog if the user is trying to do an action that would cause them to lose work
    void saveWarningPopup();

    // slot to get the user's desired size for their sprite
    void startSizeInput();


signals:
    // signal to the model to start the program
    void start(int sizeVal);

    // signal to send out the pen color
    void sendPenColor(const QColor &color);

    // signal that lets other classes know that the user wants to save their work
    void saveWarningSave();
    // signal that lets other classes know that the user wants to discard their work
    void saveWarningDiscard();

private:
    Ui::MainWindow *ui;

    // dialog box for the previewButton
    Dialog dialog;

    // sizeinput to get user's desired size
    sizeInput sizeGetter;

    // sets color of pen for drawPanel
    QColor * currentPenColor;

    // sends signal to model to start the program
    void startSignal(int sizeVal);
};
#endif // MAINWINDOW_H
