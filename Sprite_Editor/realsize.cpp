#include "realsize.h"
#include "ui_realsize.h"

RealSize::RealSize(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RealSize)
{
    ui->setupUi(this);
    ui->playBackLabel->setStyleSheet("QLabel {""border-style: solid;" "border-width: 1px;" "border-color: black; ""}");
}

RealSize::~RealSize()
{
    delete ui;
}

void RealSize::UpdateRealPlayBackSlot(QImage frame, int size){
    //this->resize(size, size);
    ui->playBackLabel->setFixedSize(size, size);
    ui->playBackLabel->setPixmap(QPixmap::fromImage(frame));
    ui->playBackLabel->setScaledContents(true);
}
