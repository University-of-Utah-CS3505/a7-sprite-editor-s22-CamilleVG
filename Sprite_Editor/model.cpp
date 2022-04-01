#include "model.h"
Model::Model(QObject *parent):
    QObject(parent)
{
    currFrameIndex = 0;
    playerIndex = 0;
}

void Model::AddFrame(QImage img) {
    frames.push_back(img);
    // Don't want to increment frame index when adding the very first frame
    if(frames.size() != 1){
        currFrameIndex++;
    }
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::UpdateFrame(QImage img) {
    frames.at(currFrameIndex) = img;
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::NextFrameSlot(){
    if(frames.size() - 1 > currFrameIndex){
        currFrameIndex++;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::PreviousFrameSlot(){
    if(0 < currFrameIndex){
        currFrameIndex--;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}

void Model::GetFrames(){
    if (playerIndex >= frames.size()) {
        playerIndex = 0;
    }

    QTimer::singleShot(1000/fps, this, &Model::GetFrames);
    emit SendFrames(frames[playerIndex]);

    playerIndex++;
}

void Model::UpdateFPS(int _fps) {
    qDebug() << _fps;
    fps = _fps;
}

void Model::RemoveFrameSlot(){
    if (currFrameIndex == 0 && frames.size() == 1) {
        frames.at(currFrameIndex).fill(Qt::transparent);
    } else {
        frames.erase(frames.begin()+currFrameIndex);
        currFrameIndex--;
    }

    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames, currFrameIndex);
}
