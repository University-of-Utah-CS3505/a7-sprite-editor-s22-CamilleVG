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
    int time = 0;
    playerIndex = 0;
    for (int i = 0; i < frames.size(); i++) {
             time += 1000/fps;
             QTimer::singleShot(time, this, &Model::SendPlayerFrame);
             if (i == frames.size()-1) {
                 QTimer::singleShot(time, this, &Model::GetFrames);
             }
    }
}

void Model::SendPlayerFrame(){
    emit SendFrames(frames[playerIndex]);
    playerIndex++;
}

void Model::UpdateFPS(int _fps) {
    qDebug() << _fps;
    fps = _fps;
}

void Model::RemoveFrameSlot(){
    frames.erase(frames.begin()+currFrameIndex);
    if(currFrameIndex != 0){
        currFrameIndex--;
    }
    else{
        currFrameIndex++;
    }
    emit UpdateLayout(frames, currFrameIndex);
    emit SetImageSignal(frames.at(currFrameIndex));
}
