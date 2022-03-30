/********************************************************************************
** Form generated from reading UI file 'starterform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTERFORM_H
#define UI_STARTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StarterForm
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *widthLabel;
    QLabel *heightLabel;
    QDialogButtonBox *buttonBox;
    QLabel *widthLabel_2;
    QTextEdit *textEdit_2;
    QLabel *widthLabel_3;

    void setupUi(QWidget *StarterForm)
    {
        if (StarterForm->objectName().isEmpty())
            StarterForm->setObjectName(QString::fromUtf8("StarterForm"));
        StarterForm->resize(400, 300);
        pushButton = new QPushButton(StarterForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 260, 100, 32));
        textEdit = new QTextEdit(StarterForm);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 70, 171, 31));
        widthLabel = new QLabel(StarterForm);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setGeometry(QRect(40, 70, 71, 31));
        heightLabel = new QLabel(StarterForm);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setGeometry(QRect(40, 150, 71, 31));
        buttonBox = new QDialogButtonBox(StarterForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 220, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widthLabel_2 = new QLabel(StarterForm);
        widthLabel_2->setObjectName(QString::fromUtf8("widthLabel_2"));
        widthLabel_2->setGeometry(QRect(310, 60, 71, 31));
        textEdit_2 = new QTextEdit(StarterForm);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(130, 150, 171, 31));
        widthLabel_3 = new QLabel(StarterForm);
        widthLabel_3->setObjectName(QString::fromUtf8("widthLabel_3"));
        widthLabel_3->setGeometry(QRect(310, 140, 71, 31));

        retranslateUi(StarterForm);

        QMetaObject::connectSlotsByName(StarterForm);
    } // setupUi

    void retranslateUi(QWidget *StarterForm)
    {
        StarterForm->setWindowTitle(QCoreApplication::translate("StarterForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("StarterForm", "Close Window", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("StarterForm", "64", nullptr));
        widthLabel->setText(QCoreApplication::translate("StarterForm", "Width", nullptr));
        heightLabel->setText(QCoreApplication::translate("StarterForm", "Height", nullptr));
        widthLabel_2->setText(QCoreApplication::translate("StarterForm", "px", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("StarterForm", "64", nullptr));
        widthLabel_3->setText(QCoreApplication::translate("StarterForm", "px", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StarterForm: public Ui_StarterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTERFORM_H
