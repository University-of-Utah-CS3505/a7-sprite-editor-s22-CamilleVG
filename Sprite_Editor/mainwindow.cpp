#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>

MainWindow::MainWindow(Model *model, QWidget *parent)
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
    QColor col = color.returnColor();
    int red = col.red();
    int green = col.green();
    int blue = col.blue();
    QString styleSheet = "background-color: rgb(" + QString::number(red) + "," + QString::number(green) + "," + QString::number(blue) + ")";
    ui->currentColorFrame->setStyleSheet(styleSheet);
}
