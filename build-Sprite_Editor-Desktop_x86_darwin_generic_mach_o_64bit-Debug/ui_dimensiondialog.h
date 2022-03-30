/********************************************************************************
** Form generated from reading UI file 'dimensiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMENSIONDIALOG_H
#define UI_DIMENSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DimensionDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *widthLabel;
    QLabel *heightLabel;
    QLabel *widthLabel_2;
    QLabel *widthLabel_3;

    void setupUi(QDialog *DimensionDialog)
    {
        if (DimensionDialog->objectName().isEmpty())
            DimensionDialog->setObjectName(QString::fromUtf8("DimensionDialog"));
        DimensionDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(DimensionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(DimensionDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 60, 171, 31));
        textEdit_2 = new QTextEdit(DimensionDialog);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(130, 140, 171, 31));
        widthLabel = new QLabel(DimensionDialog);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setGeometry(QRect(40, 60, 71, 31));
        heightLabel = new QLabel(DimensionDialog);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setGeometry(QRect(40, 140, 71, 31));
        widthLabel_2 = new QLabel(DimensionDialog);
        widthLabel_2->setObjectName(QString::fromUtf8("widthLabel_2"));
        widthLabel_2->setGeometry(QRect(310, 50, 71, 31));
        widthLabel_3 = new QLabel(DimensionDialog);
        widthLabel_3->setObjectName(QString::fromUtf8("widthLabel_3"));
        widthLabel_3->setGeometry(QRect(310, 130, 71, 31));

        retranslateUi(DimensionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DimensionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DimensionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DimensionDialog);
    } // setupUi

    void retranslateUi(QDialog *DimensionDialog)
    {
        DimensionDialog->setWindowTitle(QCoreApplication::translate("DimensionDialog", "Dialog", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("DimensionDialog", "64", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("DimensionDialog", "64", nullptr));
        widthLabel->setText(QCoreApplication::translate("DimensionDialog", "Width", nullptr));
        heightLabel->setText(QCoreApplication::translate("DimensionDialog", "Height", nullptr));
        widthLabel_2->setText(QCoreApplication::translate("DimensionDialog", "px", nullptr));
        widthLabel_3->setText(QCoreApplication::translate("DimensionDialog", "px", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DimensionDialog: public Ui_DimensionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMENSIONDIALOG_H
