#ifndef DRAWSCREEN_H
#define DRAWSCREEN_H

#include <QWidget>
#include <QPainter>
#include "model.h"

class DrawScreen : public QWidget
{
    Q_OBJECT
public:
    DrawScreen(int pixels, Model *m, QWidget *parent = nullptr);

private:
    int pixelSize;
    bool scribbling = false;
    Model *model;
    QImage image;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void drawRect(int x, int y);
};

#endif // DRAWSCREEN_H
