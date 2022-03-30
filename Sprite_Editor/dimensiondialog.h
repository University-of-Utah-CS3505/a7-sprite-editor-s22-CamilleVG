#ifndef DIMENSIONDIALOG_H
#define DIMENSIONDIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include "mainwindow.h"
#include "model.h"

namespace Ui {
class DimensionDialog;
}

class DimensionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DimensionDialog(QWidget *parent = nullptr);
    ~DimensionDialog();

private slots:
    void on_buttonBox_clicked();

private:
    Ui::DimensionDialog *ui;

};

#endif // DIMENSIONDIALOG_H
