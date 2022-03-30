#ifndef DIMENSIONS_H
#define DIMENSIONS_H

#include <QWidget>
#include "model.h"
#include "mainwindow.h"

namespace Ui {
class dimensions;
}

class dimensions : public QWidget
{
    Q_OBJECT

public:
    explicit dimensions(QWidget *parent = nullptr);
    ~dimensions();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dimensions *ui;
};

#endif // DIMENSIONS_H
