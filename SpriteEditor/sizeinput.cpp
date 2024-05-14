/// This is the implementation of the sizeInput dialog,
/// which allows the user to give their desired size for their sprite.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler


#include "sizeInput.h"
#include "ui_sizeinput.h"

sizeInput::sizeInput(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::sizeInput)
{
    ui->setupUi(this);

    ui->inputSizeBox->setValue(32); // default value is 32, standard sprite size
    currentVal = ui->inputSizeBox->value(); // currentVal will be whatever is in the box

    // these connects are to make sure we update the currentVal whenever the user changes it, and then send it out when they press OK
    connect(ui->inputSizeBox, &QSpinBox::valueChanged, this, &sizeInput::valueChanged);
    connect(this, &QDialog::accepted, this, &sizeInput::prepareSendValue);
}

sizeInput::~sizeInput()
{
    delete ui;
}

void sizeInput::valueChanged(int val)
{
    currentVal = val;
}

void sizeInput::prepareSendValue()
{
    emit sendValue(currentVal);
}
