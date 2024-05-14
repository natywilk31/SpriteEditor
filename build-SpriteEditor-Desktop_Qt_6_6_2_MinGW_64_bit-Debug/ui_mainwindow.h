/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drawpanel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *nameLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *drawOptions;
    QPushButton *colorPickerButton;
    QCheckBox *verticalAxisMirror;
    QCheckBox *horizontalAxisMirror;
    QCheckBox *diagonalAxisMirror;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *frameChooserGrid;
    QPushButton *prevFrameButton;
    QLabel *framesLabel;
    QSpinBox *frameSelectionBox;
    QPushButton *nextFrameButton;
    DrawPanel *drawPanel;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *frameLayout;
    QPushButton *addFrameButton;
    QPushButton *copyCurrentFrameButton;
    QPushButton *deleteFrameButton;
    QWidget *layoutWidget;
    QVBoxLayout *drawErase;
    QRadioButton *drawButton;
    QRadioButton *eraseButton;
    QWidget *layoutWidget1;
    QVBoxLayout *previewButtons;
    QPushButton *previewSpriteButton;
    QGraphicsView *background;
    QPushButton *UndoButton;
    QPushButton *RedoButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(380, 10, 271, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern")});
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        nameLabel->setFont(font1);
        nameLabel->setAutoFillBackground(true);
        nameLabel->setAlignment(Qt::AlignCenter);
        nameLabel->setWordWrap(false);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 110, 288, 131));
        drawOptions = new QVBoxLayout(verticalLayoutWidget);
        drawOptions->setObjectName("drawOptions");
        drawOptions->setContentsMargins(0, 0, 0, 0);
        colorPickerButton = new QPushButton(verticalLayoutWidget);
        colorPickerButton->setObjectName("colorPickerButton");
        colorPickerButton->setFont(font);

        drawOptions->addWidget(colorPickerButton);

        verticalAxisMirror = new QCheckBox(verticalLayoutWidget);
        verticalAxisMirror->setObjectName("verticalAxisMirror");
        verticalAxisMirror->setFont(font);

        drawOptions->addWidget(verticalAxisMirror);

        horizontalAxisMirror = new QCheckBox(verticalLayoutWidget);
        horizontalAxisMirror->setObjectName("horizontalAxisMirror");
        horizontalAxisMirror->setFont(font);

        drawOptions->addWidget(horizontalAxisMirror);

        diagonalAxisMirror = new QCheckBox(verticalLayoutWidget);
        diagonalAxisMirror->setObjectName("diagonalAxisMirror");
        diagonalAxisMirror->setFont(font);

        drawOptions->addWidget(diagonalAxisMirror);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 360, 279, 61));
        frameChooserGrid = new QHBoxLayout(horizontalLayoutWidget);
        frameChooserGrid->setObjectName("frameChooserGrid");
        frameChooserGrid->setContentsMargins(0, 0, 0, 0);
        prevFrameButton = new QPushButton(horizontalLayoutWidget);
        prevFrameButton->setObjectName("prevFrameButton");
        prevFrameButton->setFont(font);

        frameChooserGrid->addWidget(prevFrameButton);

        framesLabel = new QLabel(horizontalLayoutWidget);
        framesLabel->setObjectName("framesLabel");
        framesLabel->setFont(font);
        framesLabel->setAlignment(Qt::AlignCenter);

        frameChooserGrid->addWidget(framesLabel);

        frameSelectionBox = new QSpinBox(horizontalLayoutWidget);
        frameSelectionBox->setObjectName("frameSelectionBox");
        frameSelectionBox->setFont(font);

        frameChooserGrid->addWidget(frameSelectionBox);

        nextFrameButton = new QPushButton(horizontalLayoutWidget);
        nextFrameButton->setObjectName("nextFrameButton");
        nextFrameButton->setFont(font);

        frameChooserGrid->addWidget(nextFrameButton);

        drawPanel = new DrawPanel(centralwidget);
        drawPanel->setObjectName("drawPanel");
        drawPanel->setEnabled(true);
        drawPanel->setGeometry(QRect(310, 80, 416, 416));
        drawPanel->setMinimumSize(QSize(416, 416));
        drawPanel->setCursor(QCursor(Qt::CrossCursor));
        drawPanel->setAutoFillBackground(true);
        drawPanel->setAlignment(Qt::AlignCenter);
        drawPanel->setWordWrap(false);
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(10, 250, 261, 101));
        frameLayout = new QVBoxLayout(verticalLayoutWidget_3);
        frameLayout->setObjectName("frameLayout");
        frameLayout->setContentsMargins(0, 0, 0, 0);
        addFrameButton = new QPushButton(verticalLayoutWidget_3);
        addFrameButton->setObjectName("addFrameButton");
        addFrameButton->setFont(font);

        frameLayout->addWidget(addFrameButton);

        copyCurrentFrameButton = new QPushButton(verticalLayoutWidget_3);
        copyCurrentFrameButton->setObjectName("copyCurrentFrameButton");
        copyCurrentFrameButton->setFont(font);

        frameLayout->addWidget(copyCurrentFrameButton);

        deleteFrameButton = new QPushButton(verticalLayoutWidget_3);
        deleteFrameButton->setObjectName("deleteFrameButton");
        deleteFrameButton->setFont(font);

        frameLayout->addWidget(deleteFrameButton);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 50, 241, 59));
        drawErase = new QVBoxLayout(layoutWidget);
        drawErase->setObjectName("drawErase");
        drawErase->setContentsMargins(0, 0, 0, 0);
        drawButton = new QRadioButton(layoutWidget);
        drawButton->setObjectName("drawButton");
        drawButton->setFont(font);

        drawErase->addWidget(drawButton);

        eraseButton = new QRadioButton(layoutWidget);
        eraseButton->setObjectName("eraseButton");
        eraseButton->setFont(font);

        drawErase->addWidget(eraseButton);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 440, 271, 64));
        previewButtons = new QVBoxLayout(layoutWidget1);
        previewButtons->setObjectName("previewButtons");
        previewButtons->setContentsMargins(0, 0, 0, 0);
        previewSpriteButton = new QPushButton(layoutWidget1);
        previewSpriteButton->setObjectName("previewSpriteButton");
        previewSpriteButton->setFont(font);

        previewButtons->addWidget(previewSpriteButton);

        background = new QGraphicsView(centralwidget);
        background->setObjectName("background");
        background->setEnabled(false);
        background->setGeometry(QRect(305, 75, 423, 423));
        background->setMinimumSize(QSize(256, 0));
        UndoButton = new QPushButton(centralwidget);
        UndoButton->setObjectName("UndoButton");
        UndoButton->setGeometry(QRect(19, 10, 101, 22));
        UndoButton->setFont(font);
        RedoButton = new QPushButton(centralwidget);
        RedoButton->setObjectName("RedoButton");
        RedoButton->setGeometry(QRect(120, 10, 101, 22));
        RedoButton->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        nameLabel->raise();
        verticalLayoutWidget->raise();
        horizontalLayoutWidget->raise();
        verticalLayoutWidget_3->raise();
        drawPanel->raise();
        UndoButton->raise();
        RedoButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "NNJR Sprite Editor", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Sprite Editor", nullptr));
        colorPickerButton->setText(QCoreApplication::translate("MainWindow", "Color Picker", nullptr));
        verticalAxisMirror->setText(QCoreApplication::translate("MainWindow", "Mirror Pixels Over Vertical Axis", nullptr));
        horizontalAxisMirror->setText(QCoreApplication::translate("MainWindow", "Mirror Pixels Over Horizontal Axis", nullptr));
        diagonalAxisMirror->setText(QCoreApplication::translate("MainWindow", "Mirror Pixels Over Diagonal Axis", nullptr));
        prevFrameButton->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        framesLabel->setText(QCoreApplication::translate("MainWindow", "Frames", nullptr));
        nextFrameButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        drawPanel->setText(QCoreApplication::translate("MainWindow", "drawPanel", nullptr));
        addFrameButton->setText(QCoreApplication::translate("MainWindow", "Add Frame", nullptr));
        copyCurrentFrameButton->setText(QCoreApplication::translate("MainWindow", "Duplicate Frame", nullptr));
        deleteFrameButton->setText(QCoreApplication::translate("MainWindow", "Delete Frame", nullptr));
        drawButton->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        eraseButton->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        previewSpriteButton->setText(QCoreApplication::translate("MainWindow", "Preview Sprite", nullptr));
        UndoButton->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        RedoButton->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
