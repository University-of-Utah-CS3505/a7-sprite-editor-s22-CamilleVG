#include "dimensions.h"
#include "ui_dimensions.h"

dimensions::dimensions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dimensions)
{
    ui->setupUi(this);
}

dimensions::~dimensions()
{
    delete ui;
}

void dimensions::on_pushButton_clicked()
{
    Model model;
    MainWindow w(model, nullptr);
    w.show();
}

