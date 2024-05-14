#ifndef CUSTOMPREVIEWDIALOG_H
#define CUSTOMPREVIEWDIALOG_H

#include "qdialogbuttonbox.h"
#include <QWidget>

class customPreviewDialog : public QDialogButtonBox
{
    Q_OBJECT
public:
    explicit customPreviewDialog(QWidget *parent = nullptr);
    void setImage(QImage image);

protected:
    void paintEvent(QPaintEvent *event) override;


private:
    QImage currentImage;

signals:
};

#endif // CUSTOMPREVIEWDIALOG_H
