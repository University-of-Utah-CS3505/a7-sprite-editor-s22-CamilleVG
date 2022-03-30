#ifndef STARTERFORM_H
#define STARTERFORM_H

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class StarterForm;
}

class StarterForm : public QWidget
{
    Q_OBJECT

public:
    explicit StarterForm(QWidget *parent = nullptr);
    ~StarterForm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_clicked(bool checked);

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::StarterForm *ui;
};

#endif // STARTERFORM_H
