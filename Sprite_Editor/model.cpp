#include "model.h"


Model::Model(QObject *parent):
    QObject(parent)
{
}

void Model::AddFrame(QImage img) {
    frames.push_back(img);
    emit(UpdateLayout(frames));
    currFrameIndex++;
}

void Model::UpdateFrame(QImage img) {
    frames.at(currFrameIndex - 1) = img;
}
