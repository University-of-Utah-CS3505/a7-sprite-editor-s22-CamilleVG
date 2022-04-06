/**
 * A7: Sprite Editor Implementation
 * Cannon Rudd, Hadyn Thurman, Camille van Ginkel, Logan Holmes, Sam Christensen
 * */
#include "mainwindow.h"
#include "model.h"
#include <QApplication>

/**
 * @brief Sets up and executes the program.
 * @param argc
 * @param argv
 * @return
 */
int main( int argc, char **argv ) {
  QApplication a( argc, argv );
  Model model;
  MainWindow w(model, nullptr);
  w.show();
  w.otherwindow.setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
  w.otherwindow.setWindowModality(Qt::ApplicationModal);
  w.otherwindow.show();
  return a.exec();
}
