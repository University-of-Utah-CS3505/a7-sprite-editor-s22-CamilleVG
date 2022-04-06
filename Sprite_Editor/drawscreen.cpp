/**
 * A7: Sprite Editor Implementation
 * Cannon Rudd, Hadyn Thurman, Camille van Ginkel, Logan Holmes, Sam Christensen
 * */
#include "drawscreen.h"
#include <QMouseEvent>

/**
 * @brief Constructs the screen to be drawn on.
 * @param _pixels
 * @param parent
 */
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

/**
 * @brief Resets the size of the draw screen.
 * @param newSize
 */
void DrawScreen::ResetSize(int newSize) {
    pixels = newSize;
    int size = std::ceil(300 / pixels) * pixels;

    QImage i(QSize(size, size), QImage::Format_ARGB32);
    image = i;
    image.fill(qRgba(200, 200, 200, 0));
    pixelSize = size / pixels;

    QImage bg(QSize(size, size), QImage::Format_ARGB32);
    bgImg = bg;
    drawTransparentBackground();
}

/**
 * @brief Draws the checkered background for the image.
 */
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

/**
 * @brief If the mouse is pressed, then draw.
 * @param event
 */
void DrawScreen::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        drawRect(event->position().x(), event->position().y());
        scribbling = true;
    }
}

/**
 * @brief If the mouse is moved and scribbling is true, continue to draw.
 * @param event
 */
void DrawScreen::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && scribbling) {
        drawRect(event->position().x(), event->position().y());
    }
}

/**
 * @brief If the mouse is released, stop drawing and update the frames.
 * @param event
 */
void DrawScreen::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && scribbling) {
        drawRect(event->position().x(), event->position().y());
        scribbling = false;
    }
    emit UpdateDrawingFrame(image);
}

/**
 * @brief Event to paint on the images.
 * @param event
 */
void DrawScreen::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect rect = event->rect();
    painter.drawImage(rect, bgImg, rect);
    painter.drawImage(rect, image, rect);
}

/**
 * @brief Method to draw depending on which tool is selected.
 * @param x
 * @param y
 */
void DrawScreen::drawRect(int x, int y)
{
    QPainter painter(&image);

    if (brushType == "eraser") {
        QRect rect(std::floor(x / pixelSize) * pixelSize, std::floor(y / pixelSize) * pixelSize, pixelSize, pixelSize);
        painter.setCompositionMode(QPainter::CompositionMode_Source);
        painter.fillRect(rect, QBrush(Qt::transparent));
    } else if (brushType == "pencil"){
        QRect rect(std::floor(x / pixelSize) * pixelSize, std::floor(y / pixelSize) * pixelSize, pixelSize, pixelSize);
        painter.fillRect(rect, QBrush(color));
    } else {
        QRect rect((std::floor(x / pixelSize) - 1) * pixelSize, (std::floor(y / pixelSize) - 1) * pixelSize, pixelSize * 3, pixelSize * 3);
        painter.fillRect(rect, QBrush(color));
    }

    update();
}

/**
 * @brief Clears the draw screen.
 */
void DrawScreen::clear() {
    image.fill(qRgba(200, 200, 200, 0));
    update();
}

/**
 * @brief Changes the selected color.
 * @param col
 */
void DrawScreen::changeColor(QColor col){
    color = col;
}

