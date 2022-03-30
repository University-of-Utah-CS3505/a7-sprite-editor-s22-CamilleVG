#include "model.h"


Model::Model(QObject *parent):
    QObject(parent)
{
}

void Model::SetBrush(QString brush){

}
void Model::SetColor(QColor color){

}
void Model::SetFPS(int fps){

}

void Model::AddFrame(QImage img) {
    frames.push_back(img);
    qDebug() << frames.size();
}
