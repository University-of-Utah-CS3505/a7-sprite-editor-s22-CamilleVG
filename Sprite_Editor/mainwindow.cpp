#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>

MainWindow::MainWindow(Model &model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_colorPickerPushButton_clicked()
{
    QColorDialogTester color;
    currentColor = color.returnColor();
    QString styleSheet = "background-color: rgb(" + QString::number(currentColor.red()) + "," + QString::number(currentColor.green()) + "," + QString::number(currentColor.blue()) + ")";
    ui->currentColorFrame->setStyleSheet(styleSheet);
}

void MainWindow::RenderMainImage(QImage frame){

}

void MainWindow::RenderAnimImage(QImage frame){

}
