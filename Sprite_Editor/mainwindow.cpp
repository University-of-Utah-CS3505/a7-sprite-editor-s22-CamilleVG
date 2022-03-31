#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(Model &model, QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow), screen(nullptr) {
    ui->setupUi(this);

    connect(&otherwindow, &StarterForm::setDimensions, this, &MainWindow::assignDimensions);
    connect(this, &MainWindow::AddFrame, &model, &Model::AddFrame);
    connect(this, &MainWindow::UpdateFrame, &model, &Model::UpdateFrame);
    connect(&model, &Model::UpdateLayout, this, &MainWindow::UpdateLayout);
    //connect(screen, &DrawScreen::UpdateCorrespondingFrameSignal, &model, &Model::UpdateCorrespondingFrameSlot);
    connect(this, &MainWindow::NextFrameSignal, &model, &Model::NextFrameSlot);
    connect(this, &MainWindow::PreviousFrameSignal, &model, &Model::PreviousFrameSlot);
    connect(&model, &Model::SetImageSignal, this, &MainWindow::SetFrame);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::assignDimensions(int size) {
    screen = new DrawScreen(otherwindow.imageSize, this);
    ui->drawGrid->addWidget(screen);
    emit(AddFrame(screen->image));

    connect(this, &MainWindow::SetColor, screen, &DrawScreen::changeColor);
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

void MainWindow::UpdateLayout(std::vector<QImage> frames) {
    ClearLayout();
    qDebug("updating");
    for (QImage img : frames) {
        QLabel *label = new QLabel("Text", this);
        label->setFixedSize(100, 100);
        label->setPixmap(QPixmap::fromImage(img));
        label->setScaledContents(true);
        label->setStyleSheet("border:3px solid black");
        if(img == screen->image) {
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
    if (!filename.isEmpty()) {
        QJsonDocument saveDoc;
        QJsonObject saveObject;
        saveObject["height"] = otherwindow.imageSize;
        saveObject["width"] = otherwindow.imageSize;
        saveObject["numberOfFrames"] = 1;
        saveDoc.setObject(saveObject);
        QByteArray jsonData = saveDoc.toJson();
        QFile output(filename);
        if (output.open(QIODevice::WriteOnly)) {
            output.write(jsonData);
            output.close();
        }
    }
}


void MainWindow::on_actionLoad_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "", "", "Sprite Sheet Project (*.ssp)");
    if (!filename.isEmpty()) {
        QJsonDocument loadDoc;
        QJsonObject loadObject;
        QByteArray jsonData;
        QFile loadFile(filename);
        if (loadFile.open(QIODevice::ReadOnly)) {
            jsonData = loadFile.readAll();
            loadDoc = loadDoc.fromJson(jsonData);
            loadObject = loadDoc.object();
            otherwindow.imageSize = loadObject["height"].toInt();
        }
    }
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

