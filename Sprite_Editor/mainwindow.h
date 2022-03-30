#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "drawscreen.h"
#include "model.h"
#include "qcolordialogtester.h"
#include <QMainWindow>
#include <QImage>
#include <starterform.h>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(Model &model, QWidget *parent = nullptr);
    StarterForm otherwindow;
    ~MainWindow();

private slots:
    void on_colorPickerPushButton_clicked();

    void on_addFrame_clicked();

public slots:
    void assignDimensions(int size);

signals:
    void SetColor(QColor _color);
    void AddFrame(QImage img);

private:
    Ui::MainWindow *ui;
    DrawScreen *screen;
    QColor currColor;

};

#endif // MAINWINDOW_H
