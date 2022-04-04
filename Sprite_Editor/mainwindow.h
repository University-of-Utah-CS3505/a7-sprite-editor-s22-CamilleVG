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
    void on_actionSave_triggered();

    void on_actionLoad_triggered();

    void on_addFrame_clicked();

    void on_nextButton_clicked();

    void on_previousButton_clicked();

    void on_playSpeedHorizontalSlider_valueChanged(int value);

    void on_eraserRadioButton_clicked();

    void on_pencilRadioButton_clicked();

    void on_brushRadioButton_clicked();

    void on_deleteFrame_clicked();
    void UpdateDrawingFrame(QImage img);

    void on_duplicateButton_clicked();
    void ChangeScreenSize(int size);

public slots:
    void AssignDimensions();
    void ReassignDimensions();
    void UpdateLayout(std::vector<QImage> frames, int currentFrame);
    void SetFrame(QImage img);
    void UpdatePlayBack(QImage frame);

signals:
    void SetColor(QColor _color);
    void AddFrame(QImage img);
    void UpdateFrame(QImage img);
    void NextFrameSignal();
    void PreviousFrameSignal();
    void PlayPlayBackLabel();
    void UpdateFPS(int fps);
    void RemoveFrameSignal();
    void SaveFile(QString filename);
    void OpenFile(QString filename);
    void UpdateSize(int size);

private:
    void ClearLayout();
    Ui::MainWindow *ui;
    DrawScreen *screen;
    QColor currColor;
};

#endif // MAINWINDOW_H
