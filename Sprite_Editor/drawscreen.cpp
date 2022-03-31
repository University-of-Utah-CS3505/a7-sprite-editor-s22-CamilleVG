#include "drawscreen.h"

#include <QMouseEvent>
#include <iostream>

DrawScreen::DrawScreen(int pixels, QWidget *parent)
    : QWidget{parent}
{
    setAttribute(Qt::WA_StaticContents);

    int size = std::ceil(300 / pixels) * pixels;

    QImage i(QSize(size, size), QImage::Format_RGB32);
    image = i;
    image.fill(qRgba(200, 200, 200, 0));
    pixelSize = size / pixels;
}

//void DrawScreen::SetSize(int pixels){
//    int size = std::ceil(300 / pixels) * pixels;

//    QImage i(QSize(size, size), QImage::Format_RGB32);
//    image = i;
//    image.fill(qRgba(200, 200, 200, 0));
//}

void DrawScreen::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        drawRect(event->position().x(), event->position().y());
        scribbling = true;
    }
}

void DrawScreen::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && scribbling) {
        drawRect(event->position().x(), event->position().y());
    }
}

void DrawScreen::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && scribbling) {
        drawRect(event->position().x(), event->position().y());
        scribbling = false;
    }
//    emit UpdateCorrespondingFrameSignal();
//    qDebug("working");
}

void DrawScreen::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);
}

void DrawScreen::drawRect(int x, int y)
{
    QPainter painter(&image);
    QRect rect(std::floor(x / pixelSize) * pixelSize, std::floor(y / pixelSize) * pixelSize, pixelSize, pixelSize);

    painter.fillRect(rect, QBrush(color));

    update();
}

void DrawScreen::clear() {
    image.fill(qRgba(200, 200, 200, 0));
    update();
}

void DrawScreen::changeColor(QColor col){
    color = col;
}

