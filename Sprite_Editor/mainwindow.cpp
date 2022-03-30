#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>

MainWindow::MainWindow(Model &model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {

    ui->setupUi(this);

    connect(&otherwindow, &StarterForm::setDimensions, this, &MainWindow::assignDimensions);
    connect(this, &MainWindow::AddFrame, &model, &Model::AddFrame);
    connect(this, &MainWindow::UpdateFrame, &model, &Model::UpdateFrame);
    connect(&model, &Model::UpdateLayout, this, &MainWindow::UpdateLayout);

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

void MainWindow::UpdateLayout(std::vector<QImage> frames) {
    ClearLayout();
    for (QImage img : frames) {
        QLabel *label = new QLabel("Text", this);
        label->setFixedSize(100, 100);
        label->setPixmap(QPixmap::fromImage(img));
        label->setScaledContents(true);

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
