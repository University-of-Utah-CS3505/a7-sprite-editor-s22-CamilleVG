#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <QImage>
#include <QObject>
#include <QDebug>
#include <QTimer>

class Model: public QObject{
    Q_OBJECT

private:
    std::vector<QImage> frames;
    int currFrameIndex;
    int playerIndex;
    int fps = 1;

public:
    Model(QObject *parent = nullptr);


public slots:
    void AddFrame(QImage img);
    void UpdateFrame(QImage img);
    //void UpdateCorrespondingFrameSlot();
    void NextFrameSlot();
    void PreviousFrameSlot();
    void GetFrames();
    void UpdateFPS(int _fps);
    void SendPlayerFrame();

signals:
    void UpdateLayout(std::vector<QImage> frames);
    void SetImageSignal(QImage img);
    void SendFrames(QImage img);
};

#endif // MODEL_H
