/// This is the header file for our size input widget.
/// Its purpose is to capture the input for the size that the user would like for their sprite.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// 30 March 2024
/// CS 3505 Assignment 8

#ifndef SIZEINPUT_H
#define SIZEINPUT_H

#include "qdialog.h"
#include <QWidget>

namespace Ui {
class sizeInput;
}

class sizeInput : public QDialog // make it a dialog so it has default OK/Cancel buttons and functionality
{
    Q_OBJECT

public:
    explicit sizeInput(QDialog *parent = nullptr);
    ~sizeInput();

signals:
    // notify others that the value has been set
    void valueSet(int val);
    // send the int to other classes
    void sendValue(int val);



private:
    Ui::sizeInput *ui;
    // capture when the value has been changed on the dialog box
    void valueChanged(int val);
    // member variable to keep track of the latest value in the dialog box
    int currentVal;
    // an intermediate method to capture the currentVal and then send it with a signal
    void prepareSendValue();
};

#endif // SIZEINPUT_H
