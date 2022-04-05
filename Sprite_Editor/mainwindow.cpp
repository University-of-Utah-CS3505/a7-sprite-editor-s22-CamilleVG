#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(Model &model, QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
   // ui->playBackLabel->setStyleSheet("QLabel {""border-style: solid;" "border-width: 1px;" "border-color: black; ""}");

    connect(&otherwindow, &StarterForm::setDimensions, this, &MainWindow::AssignDimensions);

    connect(this, &MainWindow::AddFrame, &model, &Model::AddFrame);
    connect(this, &MainWindow::UpdateFrame, &model, &Model::UpdateFrame);
    connect(&model, &Model::UpdateLayout, this, &MainWindow::UpdateLayout);
    connect(this, &MainWindow::NextFrameSignal, &model, &Model::NextFrameSlot);
    connect(this, &MainWindow::PreviousFrameSignal, &model, &Model::PreviousFrameSlot);
    connect(&model, &Model::SetImageSignal, this, &MainWindow::SetFrame);

    connect(this, &MainWindow::PlayPlayBackLabel, &model, &Model::GetFrames);
    connect(this, &MainWindow::UpdateFPS, &model, &Model::UpdateFPS);

    connect(this, &MainWindow::RemoveFrameSignal, &model, &Model::RemoveFrameSlot);


    connect(&model, &Model::SendFrames, this, &MainWindow::UpdatePlayBack);
    connect(&model, &Model::SendFrames, this, &MainWindow::UpdateRealPlayBack);

    connect(this, &MainWindow::SaveFile, &model, &Model::SaveFile);
    connect(this, &MainWindow::OpenFile, &model, &Model::OpenFile);
    connect(&model, &Model::UpdateDrawingFrame, this, &MainWindow::UpdateDrawingFrame);
    connect(&model, &Model::SetDimensions, this, &MainWindow::ChangeScreenSize);

}

MainWindow::~MainWindow(){
    delete ui;
}

/**
 * @brief Assigns the dimensions that were given in the starterform and initializes the form.
 */
void MainWindow::AssignDimensions() {
    screen = new DrawScreen(otherwindow.imageSize, this);
    realsize.resize(otherwindow.imageSize, otherwindow.imageSize);
    ui->drawGrid->addWidget(screen);
    emit(AddFrame(screen->image));
    emit PlayPlayBackLabel();
    connect(this, &MainWindow::SetColor, screen, &DrawScreen::changeColor);
    connect(screen, &DrawScreen::UpdateDrawingFrame, this, &MainWindow::UpdateDrawingFrame);
    connect(this, &MainWindow::UpdateSize, screen, &DrawScreen::ResetSize);
    connect(this, &MainWindow::UpdateRealPlayBackSignal, &realsize, &RealSize::UpdateRealPlayBackSlot);
}

/**
 * @brief Pops up color picker window.
 */
void MainWindow::on_colorPickerPushButton_clicked() {
    QColorDialogTester color;
    currColor = color.returnColor();
    emit(SetColor(currColor));
    QString styleSheet = "background-color: rgb(" + QString::number(currColor.red()) + "," + QString::number(currColor.green()) + "," + QString::number(currColor.blue()) + ")";
    ui->currentColorFrame->setStyleSheet(styleSheet);
}

/**
 * @brief Adds a frame to the sprite editor.
 */
void MainWindow::on_addFrame_clicked()
{
    emit(UpdateFrame(screen->image));
    screen->clear();
    emit(AddFrame(screen->image));
}

/**
 * @brief Changes the main frame.
 * @param Image to change the frame to.
 */
void MainWindow::SetFrame(QImage img){
    screen->clear();
    screen->image = img;
}

/**
 * @brief Updates the layout of the horizontal window containing the frames.
 * @param Array containing all the frames.
 * @param Index of the current selected frame.
 */
void MainWindow::UpdateLayout(std::vector<QImage> frames, int currentFrame) {
    ClearLayout();
    for (int i = 0; i < frames.size(); i++) {
        QImage img = frames[i];
        QLabel *label = new QLabel("Text", this);
        label->setFixedSize(100, 100);
        label->setPixmap(QPixmap::fromImage(img));
        label->setScaledContents(true);
        label->setStyleSheet("border:3px solid black");
        if (i == currentFrame) {
            label->setStyleSheet("border:3px solid red");
        }

        ui->horizontalLayout->addWidget(label);
    }
}

/**
 * @brief Clears the layout containing the frames.
 */
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

/**
 * @brief Saves the current sprite.
 */
void MainWindow::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "", "", "Sprite Sheet Project (*.ssp)");
    emit SaveFile(filename, this->otherwindow.imageSize);
}

/**
 * @brief Loads a specific sprite.
 */
void MainWindow::on_actionLoad_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "", "", "Sprite Sheet Project (*.ssp)");
    emit OpenFile(filename);
}

/**
 * @brief Opens a new sprite editor.
 */
void MainWindow::on_actionNew_triggered()
{
    qDebug() << "entered action new";
    Model newModel;
    MainWindow *newWin = new MainWindow(newModel, nullptr);
    newWin->show();
    newWin->otherwindow.setWindowModality(Qt::ApplicationModal);
    newWin->otherwindow.show();
}

/**
 * @brief Closes the current sprite editor.
 */
void MainWindow::on_actionClose_triggered()
{
    hide();
}

/**
 * @brief Moves current screen to the next frame.
 */
void MainWindow::on_nextButton_clicked()
{
    emit UpdateFrame(screen->image);
    emit NextFrameSignal();
}

/**
 * @brief Moves current screen to the previous frame.
 */
void MainWindow::on_previousButton_clicked()
{
    emit UpdateFrame(screen->image);
    emit PreviousFrameSignal();
}

/**
 * @brief Updates the playback window.
 * @param Frame to set the playback window image to.
 */
void MainWindow::UpdatePlayBack(QImage frame) {
        ui->playBackLabel->setFixedSize(100, 100);
        ui->playBackLabel->setPixmap(QPixmap::fromImage(frame));
        ui->playBackLabel->setScaledContents(true);
}

/**
 * @brief Changes the frames per second value.
 * @param Value that the slider is changed to.
 */
void MainWindow::on_playSpeedHorizontalSlider_valueChanged(int value)
{
    UpdateFPS(value);
}

/**
 * @brief Brush type changes to eraser.
 */
void MainWindow::on_eraserRadioButton_clicked()
{
    screen->brushType = "eraser";
}

/**
 * @brief Brush trype changes to pencil.
 */
void MainWindow::on_pencilRadioButton_clicked()
{
    screen->brushType = "pencil";
}

/**
 * @brief Brush type changes to brush.
 */
void MainWindow::on_brushRadioButton_clicked()
{
    screen->brushType = "brush";
}

/**
 * @brief Deletes the current frame.
 */
void MainWindow::on_deleteFrame_clicked()
{
    emit RemoveFrameSignal();
}

/**
 * @brief Updates the drawing frame.
 * @param Image to update the drawing frame to.
 */
void MainWindow::UpdateDrawingFrame(QImage img) {
    emit UpdateFrame(img);
}

/**
 * @brief Shows the playback window with the real size.
 */
void MainWindow::on_playPushButton_clicked()
{
    realsize.show();
}

/**
 * @brief Updates the real size play back window.
 * @param Image to change the playback window to.
 */
void MainWindow::UpdateRealPlayBack(QImage frame) {
    emit UpdateRealPlayBackSignal(frame, otherwindow.imageSize);

}

/**
 * @brief Duplicates the selected frame.
 */
void MainWindow::on_duplicateButton_clicked()
{
    emit(UpdateFrame(screen->image));
    emit(AddFrame(screen->image));
}

/**
 * @brief Changes screen size when opening a new file.
 * @param Size to be changed to.
 */
void MainWindow::ChangeScreenSize(int size)
{
    emit(UpdateSize(size));
}
