/********************************************************************************
** Form generated from reading UI file 'sizeinput.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIZEINPUT_H
#define UI_SIZEINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_sizeInput
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *inputSizeBox;
    QLabel *label;

    void setupUi(QDialog *sizeInput)
    {
        if (sizeInput->objectName().isEmpty())
            sizeInput->setObjectName("sizeInput");
        sizeInput->resize(400, 300);
        buttonBox = new QDialogButtonBox(sizeInput);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setBold(true);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        inputSizeBox = new QSpinBox(sizeInput);
        inputSizeBox->setObjectName("inputSizeBox");
        inputSizeBox->setGeometry(QRect(170, 130, 42, 22));
        inputSizeBox->setFont(font);
        inputSizeBox->setMinimum(32);
        inputSizeBox->setMaximum(416);
        inputSizeBox->setSingleStep(32);
        label = new QLabel(sizeInput);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 90, 181, 31));
        label->setFont(font);

        retranslateUi(sizeInput);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, sizeInput, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, sizeInput, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(sizeInput);
    } // setupUi

    void retranslateUi(QDialog *sizeInput)
    {
        sizeInput->setWindowTitle(QCoreApplication::translate("sizeInput", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sizeInput", "Please enter sprite size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sizeInput: public Ui_sizeInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIZEINPUT_H
