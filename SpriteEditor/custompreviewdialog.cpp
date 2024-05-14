#include "custompreviewdialog.h"
#include <QDialogButtonBox>
#include <QPainter>

customPreviewDialog::customPreviewDialog(QWidget *parent)
    : QDialogButtonBox{parent}
    {

    }


void customPreviewDialog::paintEvent(QPaintEvent *event)
    {
        QDialogButtonBox::paintEvent(event);

        QPainter painter(this);
        painter.drawImage(0, 0, currentImage);
    }

 void customPreviewDialog::setImage(QImage image)
    {
     currentImage = image;
    }






