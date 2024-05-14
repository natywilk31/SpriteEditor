/// This is the implementation of the saveWarning message box,
/// which notifies the user if they have unsaved changes.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#include "savewarning.h"

//constructor
SaveWarning::SaveWarning(QWidget *parent) : QMessageBox(parent)
{
    //setting the font
    QFont font = this->font();
    font.setFamily("System"); // Set the desired font family
    this->setFont(font);

    //title
    setWindowTitle("Warning: File not saved");

    //text
    setText("Are you sure you want to open a new file? The current file is not saved.");

    //buttons
    setStandardButtons(QMessageBox::Save | QMessageBox::Discard);

}
