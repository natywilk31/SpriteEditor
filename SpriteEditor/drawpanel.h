/// This is the header file of the draw panel,
/// which is where the user edits the pixels of their sprite.
/// Rowan Murdock, Jack Umina, Neeraja Vasa, Natalie Wilkins
/// CS 3505 Spring 2024 - Professor Heisler

#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QLabel>

class DrawPanel : public QLabel
{
    Q_OBJECT
public:
    /*
     * Constructor
     * */
    explicit DrawPanel(QWidget *parent = nullptr);
    /*
     * Destructor
     * */
    ~DrawPanel();

public slots:
    // slot that gets current Image from the model to display
    void displayDrawing(QImage image);
    // slot that gets the scale value
    void setScale(int sizeVal);

signals:
    // signals that send draw information
    void updateClickPoint(QPoint lastPoint);
    void drawLineTo(QPoint releasePoint);

    // signals that send undo information
    void undoStroke();
    void updateStrokeState();

    // signal that sends redo information
    void redoStroke();

    // signal that sends scale information
    void sendScaleSize(int);

protected:
    // mouse events that relay data for drawing to the model
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    // vectors for undo
    std::vector<std::vector<QPoint>>  strokes;
    std::vector<QPoint> currentStroke;

    // point for mouseEvents
    QPoint lastPoint;

    // holds scaled size of panel
    double scaleSize;

    // bool for mouseEvents
    bool drawing = false;
};

#endif // DRAWPANEL_H
