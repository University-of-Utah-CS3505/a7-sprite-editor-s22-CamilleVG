#ifndef DRAWSCREEN_H
#define DRAWSCREEN_H

#include <QWidget>
#include <QPainter>

class DrawScreen : public QWidget
{
    Q_OBJECT
public:
    DrawScreen(int pixels, QWidget *parent = nullptr);
    void clear();
    QImage image;
    QImage bgImg;
    void SetSize(int pixels);
    bool erase = false;

public slots:
    void changeColor(QColor);

signals:
    void UpdateDrawingFrame(QImage img);

private:
    QColor color;
    int pixelSize;
    int pixels;
    bool scribbling = false;
    void drawTransparentBackground();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void drawRect(int x, int y);
};

#endif // DRAWSCREEN_H
