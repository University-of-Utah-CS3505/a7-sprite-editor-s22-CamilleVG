#ifndef STARTERFORM_H
#define STARTERFORM_H

#include <QWidget>
#include <QAbstractButton>
#include <iostream>

namespace Ui {
class StarterForm;
}

class StarterForm : public QWidget{
    Q_OBJECT

public:
    explicit StarterForm(QWidget *parent = nullptr);
    ~StarterForm();
    int imageSize;

signals:
    void setDimensions(int size);

private slots:
    void on_pushButton_clicked();

private:
    Ui::StarterForm *ui;
    bool isNumber(std::string s);
};

#endif // STARTERFORM_H
