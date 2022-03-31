#include "model.h"


Model::Model(QObject *parent):
    QObject(parent)
{
    currFrameIndex = 0;
}

void Model::AddFrame(QImage img) {
    frames.push_back(img);
    emit UpdateLayout(frames);
    // Don't want to increment frame index when adding the very first frame
    if(frames.size() != 1){
        currFrameIndex++;
    }
}

void Model::UpdateFrame(QImage img) {
    frames.at(currFrameIndex) = img;
}

void Model::NextFrameSlot(){
    if(frames.size() - 1 > currFrameIndex){
        currFrameIndex++;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames);
}

void Model::PreviousFrameSlot(){
    if(0 < currFrameIndex){
        currFrameIndex--;
    }
    emit SetImageSignal(frames.at(currFrameIndex));
    emit UpdateLayout(frames);
}
