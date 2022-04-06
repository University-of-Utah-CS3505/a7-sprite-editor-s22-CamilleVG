/**
 * A7: Sprite Editor Implementation
 * Cannon Rudd, Hadyn Thurman, Camille van Ginkel, Logan Holmes, Sam Christensen
 * */
#include "starterform.h"
#include "ui_starterform.h"

/**
 * @brief Constructs the starter form that is first seen when running the application.
 * @param parent
 */
StarterForm::StarterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StarterForm)
{
    ui->setupUi(this);
}

/**
 * @brief Destructs the starter form.
 */
StarterForm::~StarterForm() {
    delete ui;
}

/**
 * @brief Sets the image size when the Ok button is clicked.
 */
void StarterForm::on_pushButton_clicked() {
    int value;

    QString text = ui->sizeText->toPlainText();
    if(text.isEmpty() || !(isNumber(text.toStdString()))) {
        value = 20;
    } else {
        value = text.toInt();
        if (value < 4) {
            value = 4;
        }
        if (value > 128) {
            value = 128;
        }
    }

    imageSize = value;

    emit setDimensions(imageSize);

    this->hide();
}

/**
 * @brief Checks if the string representation of a number is in fact a number.
 * @param s
 * @return true of false
 */
bool StarterForm::isNumber(std::string s) {
    for (char c : s) {
        if (!std::isdigit(c))
            return false;
    }
    return true;
}

