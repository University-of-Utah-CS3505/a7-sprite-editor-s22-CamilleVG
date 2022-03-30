#include "mainwindow.h"
#include "model.h"
#include "dimensiondialog.h"
#include <QApplication>

int main( int argc, char **argv )
{
  QApplication a( argc, argv );


  Model model;
  MainWindow w(model, nullptr);
  w.show();
/*
  DimensionDialog dDialog(w, nullptr);
  dDialog.show();
  */

  return a.exec();
}
