#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>

MainWindow::MainWindow(Model &model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);

    connect(this, &MainWindow::currColorChanged, &model, &Model::currColorChanged);

}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_colorPickerPushButton_clicked(){
    qDebug() << "Yep";
    QColorDialogTester color;
    currColor = color.returnColor();
    currColorChanged(currColor);
    QString styleSheet = "background-color: rgb(" + QString::number(currColor.red()) + "," + QString::number(currColor.green()) + "," + QString::number(currColor.blue()) + ")";
    ui->currentColorFrame->setStyleSheet(styleSheet);
}

void MainWindow::RenderMainImage(QImage frame){

}

void MainWindow::RenderAnimImage(QImage frame){

}

void MainWindow::currColorChanged(QColor col){

}

