/********************************************************************************
** Form generated from reading UI file 'realsize.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALSIZE_H
#define UI_REALSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RealSize
{
public:
    QLabel *playBackLabel;

    void setupUi(QWidget *RealSize)
    {
        if (RealSize->objectName().isEmpty())
            RealSize->setObjectName(QString::fromUtf8("RealSize"));
        RealSize->resize(400, 300);
        playBackLabel = new QLabel(RealSize);
        playBackLabel->setObjectName(QString::fromUtf8("playBackLabel"));
        playBackLabel->setGeometry(QRect(0, 0, 211, 171));

        retranslateUi(RealSize);

        QMetaObject::connectSlotsByName(RealSize);
    } // setupUi

    void retranslateUi(QWidget *RealSize)
    {
        RealSize->setWindowTitle(QCoreApplication::translate("RealSize", "Form", nullptr));
        playBackLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RealSize: public Ui_RealSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALSIZE_H
