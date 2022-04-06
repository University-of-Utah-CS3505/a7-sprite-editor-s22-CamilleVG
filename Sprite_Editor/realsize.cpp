/**
 * A7: Sprite Editor Implementation
 * Cannon Rudd, Hadyn Thurman, Camille van Ginkel, Logan Holmes, Sam Christensen
 * */
#include "realsize.h"
#include "ui_realsize.h"

/**
 * @brief Constructs a window to contain the animation at its real size.
 * @param parent
 */
RealSize::RealSize(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RealSize)
{
    ui->setupUi(this);
    ui->playBackLabel->setStyleSheet("QLabel {""border-style: solid;" "border-width: 1px;" "border-color: black; ""}");
}

/**
 * @brief Destructs the real size window.
 */
RealSize::~RealSize()
{
    delete ui;
}

/**
 * @brief Sets the image in the frame on the window, as well as its size.
 * @param frame
 * @param size
 */
void RealSize::UpdateRealPlayBackSlot(QImage frame, int size){
    ui->playBackLabel->setFixedSize(size, size);
    ui->playBackLabel->setPixmap(QPixmap::fromImage(frame));
    ui->playBackLabel->setScaledContents(true);
}
