#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(Model &model, QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->playBackLabel->setStyleSheet("QLabel {""border-style: solid;" "border-width: 1px;" "border-color: black; ""}");

    connect(&otherwindow, &StarterForm::setDimensions, this, &MainWindow::assignDimensions);
    connect(this, &MainWindow::AddFrame, &model, &Model::AddFrame);
    connect(this, &MainWindow::UpdateFrame, &model, &Model::UpdateFrame);
    connect(&model, &Model::UpdateLayout, this, &MainWindow::UpdateLayout);
    connect(this, &MainWindow::NextFrameSignal, &model, &Model::NextFrameSlot);
    connect(this, &MainWindow::PreviousFrameSignal, &model, &Model::PreviousFrameSlot);
    connect(&model, &Model::SetImageSignal, this, &MainWindow::SetFrame);

    connect(this, &MainWindow::PlayPlayBackLabel, &model, &Model::GetFrames);
    connect(this, &MainWindow::UpdateFPS, &model, &Model::UpdateFPS);

    connect(this, &MainWindow::RemoveFrameSignal, &model, &Model::RemoveFrameSlot);


    connect(&model, &Model::SendFrames, this, &MainWindow::UpdatePlayBack);
    connect(&model, &Model::SendFrames, this, &MainWindow::UpdateRealPlayBack);

    connect(this, &MainWindow::SaveFile, &model, &Model::SaveFile);
    connect(this, &MainWindow::OpenFile, &model, &Model::OpenFile);
    connect(&model, &Model::UpdateDrawingFrame, this, &MainWindow::UpdateDrawingFrame);

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::assignDimensions(int size) {
    screen = new DrawScreen(otherwindow.imageSize, this);
    realsize.resize(otherwindow.imageSize, otherwindow.imageSize);
    ui->drawGrid->addWidget(screen);
    emit(AddFrame(screen->image));
    emit PlayPlayBackLabel();
    connect(this, &MainWindow::SetColor, screen, &DrawScreen::changeColor);
    connect(screen, &DrawScreen::UpdateDrawingFrame, this, &MainWindow::UpdateDrawingFrame);
    connect(this, &MainWindow::UpdateRealPlayBackSignal, &realsize, &RealSize::UpdateRealPlayBackSlot);
}

void MainWindow::on_colorPickerPushButton_clicked() {
    QColorDialogTester color;
    currColor = color.returnColor();
    emit(SetColor(currColor));
    QString styleSheet = "background-color: rgb(" + QString::number(currColor.red()) + "," + QString::number(currColor.green()) + "," + QString::number(currColor.blue()) + ")";
    ui->currentColorFrame->setStyleSheet(styleSheet);
}

void MainWindow::on_addFrame_clicked()
{
    emit(UpdateFrame(screen->image));
    screen->clear();
    emit(AddFrame(screen->image));
}

void MainWindow::SetFrame(QImage img){
    screen->clear();
    screen->image = img;
}

void MainWindow::UpdateLayout(std::vector<QImage> frames, int currentFrame) {
    ClearLayout();
    qDebug("updating");
    for (int i = 0; i < frames.size(); i++) {
        QImage img = frames[i];
        QLabel *label = new QLabel("Text", this);
        label->setFixedSize(100, 100);
        label->setPixmap(QPixmap::fromImage(img));
        label->setScaledContents(true);
        label->setStyleSheet("border:3px solid black");
        if(i == currentFrame) {
            label->setStyleSheet("border:3px solid red");
        }

        ui->horizontalLayout->addWidget(label);
    }
}

void MainWindow::ClearLayout() {
    if (ui->horizontalLayout == NULL)
        return;

    QLayoutItem *item;
    while((item = ui->horizontalLayout->takeAt(0))) {
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}

void MainWindow::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "", "", "Sprite Sheet Project (*.ssp)");
    emit SaveFile(filename);
}


void MainWindow::on_actionLoad_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "", "", "Sprite Sheet Project (*.ssp)");
    emit OpenFile(filename);
}

void MainWindow::on_nextButton_clicked()
{
    emit UpdateFrame(screen->image);
    emit NextFrameSignal();
}


void MainWindow::on_previousButton_clicked()
{
    emit UpdateFrame(screen->image);
    emit PreviousFrameSignal();
}

void MainWindow::UpdatePlayBack(QImage frame) {
        ui->playBackLabel->setFixedSize(100, 100);
        ui->playBackLabel->setPixmap(QPixmap::fromImage(frame));
        ui->playBackLabel->setScaledContents(true);
}


void MainWindow::on_playSpeedHorizontalSlider_valueChanged(int value)
{
    UpdateFPS(value);
}


void MainWindow::on_eraserRadioButton_clicked()
{
    screen->brushType = "eraser";
}


void MainWindow::on_pencilRadioButton_clicked()
{
    screen->brushType = "pencil";
}


void MainWindow::on_brushRadioButton_clicked()
{
    screen->brushType = "brush";
}


void MainWindow::on_deleteFrame_clicked()
{
    emit RemoveFrameSignal();
}

void MainWindow::UpdateDrawingFrame(QImage img) {
    emit UpdateFrame(img);
}

void MainWindow::on_playPushButton_clicked()
{
    realsize.show();
}

void MainWindow::UpdateRealPlayBack(QImage frame) {
    emit UpdateRealPlayBackSignal(frame, otherwindow.imageSize);

}
void MainWindow::on_duplicateButton_clicked()
{
    emit(UpdateFrame(screen->image));
    emit(AddFrame(screen->image));
}

