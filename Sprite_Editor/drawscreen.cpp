#include "drawscreen.h"

#include <QMouseEvent>
#include <iostream>

DrawScreen::DrawScreen(int _pixels, QWidget *parent)
    : QWidget{parent},
      pixels(_pixels)
{
    setAttribute(Qt::WA_StaticContents);

    int size = std::ceil(300 / pixels) * pixels;

    QImage i(QSize(size, size), QImage::Format_ARGB32);
    image = i;
    image.fill(qRgba(200, 200, 200, 0));
    pixelSize = size / pixels;

    QImage bg(QSize(size, size), QImage::Format_ARGB32);
    bgImg = bg;
    drawTransparentBackground();
}

void DrawScreen::drawTransparentBackground() {
    for (int row = 0; row < pixels; row += 1) {
        for (int col = 0; col < pixels; col += 1) {
            QPainter painter(&bgImg);
            QRect rect(row * pixelSize, col * pixelSize, pixelSize, pixelSize);
            if ((row % 2 == 0 && col % 2 == 1) || (row % 2 == 1 && col % 2 == 0)) {
                painter.fillRect(rect, QBrush(QColor("Gray")));
            } else {
                painter.fillRect(rect, QBrush(QColor("DarkGray")));
            }
        }
    }
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
    QRect rect = event->rect();
    painter.drawImage(rect, bgImg, rect);
    painter.drawImage(rect, image, rect);
}

void DrawScreen::drawRect(int x, int y)
{
    QPainter painter(&image);
    QRect rect(std::floor(x / pixelSize) * pixelSize, std::floor(y / pixelSize) * pixelSize, pixelSize, pixelSize);

    painter.fillRect(rect, QBrush(color));

    if(erase){
        if ((rect.y() % 2 == 0 && rect.x() % 2 == 1) || (rect.y() % 2 == 1 && rect.x() % 2 == 0)) {
            painter.fillRect(rect, QBrush(QColor("Gray")));
        } else {
            painter.fillRect(rect, QBrush(QColor("DarkGray")));
        }
    }

    update();
}

void DrawScreen::clear() {
    image.fill(qRgba(200, 200, 200, 0));
    update();
}

void DrawScreen::changeColor(QColor col){
    color = col;
}

