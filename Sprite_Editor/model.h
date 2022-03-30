#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <QImage>
#include <QObject>
#include <QDebug>

class Model: public QObject{
    Q_OBJECT

private:
    std::vector<QImage> frames;
    int currFrameIndex = 0;

public:
    Model(QObject *parent = nullptr);


public slots:
    void AddFrame(QImage img);

signals:


};

#endif // MODEL_H
