#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonObject>

MainWindow::MainWindow(Model &model, QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    connect(&otherwindow, &StarterForm::setDimensions, this, &MainWindow::assignDimensions);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::assignDimensions(int size) {
    screen = new DrawScreen(otherwindow.imageSize, this);
    ui->drawGrid->addWidget(screen);

    connect(this, &MainWindow::SetColor, screen, &DrawScreen::changeColor);
}

void MainWindow::on_colorPickerPushButton_clicked() {
    QColorDialogTester color;
    currColor = color.returnColor();
    emit(SetColor(currColor));
    QString styleSheet = "background-color: rgb(" + QString::number(currColor.red()) + "," + QString::number(currColor.green()) + "," + QString::number(currColor.blue()) + ")";
    ui->currentColorFrame->setStyleSheet(styleSheet);
}

void MainWindow::RenderMainImage(QImage frame){

}

void MainWindow::RenderAnimImage(QImage frame){

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
}

