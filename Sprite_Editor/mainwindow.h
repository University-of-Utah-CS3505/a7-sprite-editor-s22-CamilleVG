#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "drawscreen.h"
#include "model.h"
#include "qcolordialogtester.h"
#include <QMainWindow>
#include <QImage>
#include <starterform.h>

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

public slots:
    void RenderMainImage(QImage frame);
    void RenderAnimImage(QImage frame);
    void assignDimensions(int size);

signals:
    void SetBrush(std::string _brush);
    void SetColor(QColor _color);
    void SetFPS(int _fps);

private:
    Ui::MainWindow *ui;
    DrawScreen *screen;
    QColor currColor;

};

#endif // MAINWINDOW_H
