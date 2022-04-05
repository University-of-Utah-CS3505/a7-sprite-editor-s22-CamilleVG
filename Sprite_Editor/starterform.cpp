#include "starterform.h"
#include "ui_starterform.h"

StarterForm::StarterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StarterForm)
{
    ui->setupUi(this);
}

StarterForm::~StarterForm() {
    delete ui;
}

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

    emit(setDimensions(imageSize));

    this->hide();
}

bool StarterForm::isNumber(std::string s) {
    for (char c : s) {
        if (!std::isdigit(c))
            return false;
    }
    return true;
}

