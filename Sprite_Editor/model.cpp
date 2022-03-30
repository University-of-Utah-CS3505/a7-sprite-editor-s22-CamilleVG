#include "model.h"


Model::Model(QObject *parent):
    QObject(parent)
{
}

void Model::AddFrame(QImage img) {
    frames.push_back(img);
    qDebug() << frames.size();
}
