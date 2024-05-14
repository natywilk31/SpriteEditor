/// This is the header file of the saveWarning dialog,
/// which tells the user if they have unsaved work that they would lose if they continue.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#ifndef SAVEWARNING_H
#define SAVEWARNING_H

#include <QMessageBox>

//represents a SaveWarning, which is a message box that appears when a user
//does not save a file before trying to open a new one
class SaveWarning : public QMessageBox
{
public:
    SaveWarning(QWidget *parent = nullptr);
};

#endif // SAVEWARNING_H
