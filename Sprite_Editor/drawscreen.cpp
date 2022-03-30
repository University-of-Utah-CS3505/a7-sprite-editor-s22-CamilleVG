#include "drawscreen.h"

#include <QMouseEvent>
#include <iostream>

DrawScreen::DrawScreen(int pixels, Model *m, QWidget *parent)
    : QWidget{parent}
{
    setAttribute(Qt::WA_StaticContents);

    model = m;

    QImage i(QSize(300, 300), QImage::Format_RGB32);
    image = i;
    pixelSize = 300 / pixels;
}

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
    std::cout << x << "   " << y << std::endl;

    painter.fillRect(rect, QBrush(QColor("Red")));

    update();
}
