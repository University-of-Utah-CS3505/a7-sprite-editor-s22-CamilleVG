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

}


void StarterForm::on_pushButton_clicked(bool checked) {
    this->hide();
}


void StarterForm::on_buttonBox_clicked(QAbstractButton *button) {
    this->hide();
}

