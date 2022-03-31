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
    int currFrameIndex;

public:
    Model(QObject *parent = nullptr);


public slots:
    void AddFrame(QImage img);
    void UpdateFrame(QImage img);
    //void UpdateCorrespondingFrameSlot();
    void NextFrameSlot();
    void PreviousFrameSlot();

signals:
    void UpdateLayout(std::vector<QImage> frames);
    void SetImageSignal(QImage img);

};

#endif // MODEL_H
