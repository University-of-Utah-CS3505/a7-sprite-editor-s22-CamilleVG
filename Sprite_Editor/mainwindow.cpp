#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>

class QColorDialogTester : public QWidget
{
public:
  void onColor()
  {
    QColor color = QColorDialog::getColor(Qt::yellow, this );
    if( color.isValid() )
    {
      qDebug() << "Color Choosen : " << color.name();
    }
  }

};

MainWindow::MainWindow(QWidget *parent)
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
    QColorDialogTester color_test;
    color_test.onColor();
}

