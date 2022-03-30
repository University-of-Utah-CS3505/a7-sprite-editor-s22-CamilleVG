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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StarterForm
{
public:
    QTextEdit *sizeText;
    QLabel *widthLabel;
    QLabel *widthLabel_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *StarterForm)
    {
        if (StarterForm->objectName().isEmpty())
            StarterForm->setObjectName(QString::fromUtf8("StarterForm"));
        StarterForm->resize(400, 300);
        sizeText = new QTextEdit(StarterForm);
        sizeText->setObjectName(QString::fromUtf8("sizeText"));
        sizeText->setGeometry(QRect(120, 110, 171, 31));
        widthLabel = new QLabel(StarterForm);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setGeometry(QRect(30, 110, 71, 31));
        widthLabel_2 = new QLabel(StarterForm);
        widthLabel_2->setObjectName(QString::fromUtf8("widthLabel_2"));
        widthLabel_2->setGeometry(QRect(300, 100, 71, 31));
        pushButton = new QPushButton(StarterForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 220, 93, 29));
        pushButton_2 = new QPushButton(StarterForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 220, 93, 29));

        retranslateUi(StarterForm);

        QMetaObject::connectSlotsByName(StarterForm);
    } // setupUi

    void retranslateUi(QWidget *StarterForm)
    {
        StarterForm->setWindowTitle(QCoreApplication::translate("StarterForm", "Form", nullptr));
        sizeText->setPlaceholderText(QCoreApplication::translate("StarterForm", "64", nullptr));
        widthLabel->setText(QCoreApplication::translate("StarterForm", "Size", nullptr));
        widthLabel_2->setText(QCoreApplication::translate("StarterForm", "px", nullptr));
        pushButton->setText(QCoreApplication::translate("StarterForm", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StarterForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StarterForm: public Ui_StarterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTERFORM_H
