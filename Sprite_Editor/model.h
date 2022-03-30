#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <QImage>
#include <QObject>
#include <QDebug>

class Model: public QObject{
    Q_OBJECT

private:
    QColor color;
    QColor currColor;
    std::string brush;
    int fps;

    std::vector<QImage> frames;
    int currDrawFrameIndex = 0;
    int currAnimFrameIndex = 0;

public:
    Model(QObject *parent = nullptr);


public slots:
    void SetBrush(QString brush);
    void SetColor(QColor color);
    void SetFPS(int fps);
    void AddFrame(QImage img);

signals:
    void RenderMainImage(QImage frame);
    void RenderAnimImage(QImage frame);

};

#endif // MODEL_H
