#include "mainwindow.h"
#include "model.h"
#include <QApplication>

int main( int argc, char **argv ) {
  QApplication a( argc, argv );


  Model model;
  MainWindow w(model, nullptr);
  w.show();
  w.otherwindow.setWindowModality(Qt::ApplicationModal);
  w.otherwindow.show();
  return a.exec();
}
