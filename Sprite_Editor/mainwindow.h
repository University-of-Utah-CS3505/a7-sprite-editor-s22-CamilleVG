#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "model.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Model *model, QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void RenderMainImage(QImage frame);
    void RenderAnimImage(QImage frame);

private slots:
    void on_colorPickerPushButton_clicked();

signals:
    void SetBrush(std::string _brush);
    void SetColor(QColor _color);
    void SetFPS(int _fps);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
