#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <QImage>

class Model
{
public:
    Model();

public slots:
    void SetBrush(std::string _brush);
    void SetColor(QColor _color);
    void SetFPS(int _fps);

signals:
    void RenderMainImage(QImage frame);
    void RenderAnimImage(QImage frame);

private:
    QColor color;
    std::string brush;
    int fps;

    std::vector<QImage> frames;
    int currDrawFrameIndex = 0;
    int currAnimFrameIndex = 0;

};

#endif // MODEL_H
