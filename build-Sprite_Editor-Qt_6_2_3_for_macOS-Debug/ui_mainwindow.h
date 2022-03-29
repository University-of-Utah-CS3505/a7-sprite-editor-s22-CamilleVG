/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QGroupBox *ToolsGroupBox;
    QRadioButton *eraserRadioButton;
    QRadioButton *pencilRadioButton;
    QRadioButton *brushRadioButton;
    QGroupBox *ColorGroupBox;
    QPushButton *colorPickerPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(150, 370, 621, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 619, 109));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 9, 531, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(340, 100, 361, 241));
        ToolsGroupBox = new QGroupBox(centralwidget);
        ToolsGroupBox->setObjectName(QString::fromUtf8("ToolsGroupBox"));
        ToolsGroupBox->setGeometry(QRect(10, 50, 120, 251));
        eraserRadioButton = new QRadioButton(ToolsGroupBox);
        eraserRadioButton->setObjectName(QString::fromUtf8("eraserRadioButton"));
        eraserRadioButton->setGeometry(QRect(10, 50, 99, 20));
        pencilRadioButton = new QRadioButton(ToolsGroupBox);
        pencilRadioButton->setObjectName(QString::fromUtf8("pencilRadioButton"));
        pencilRadioButton->setGeometry(QRect(10, 100, 99, 20));
        brushRadioButton = new QRadioButton(ToolsGroupBox);
        brushRadioButton->setObjectName(QString::fromUtf8("brushRadioButton"));
        brushRadioButton->setGeometry(QRect(10, 160, 99, 20));
        ColorGroupBox = new QGroupBox(centralwidget);
        ColorGroupBox->setObjectName(QString::fromUtf8("ColorGroupBox"));
        ColorGroupBox->setGeometry(QRect(10, 340, 120, 131));
        colorPickerPushButton = new QPushButton(centralwidget);
        colorPickerPushButton->setObjectName(QString::fromUtf8("colorPickerPushButton"));
        colorPickerPushButton->setGeometry(QRect(20, 20, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ToolsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        eraserRadioButton->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
        pencilRadioButton->setText(QCoreApplication::translate("MainWindow", "Pencil", nullptr));
        brushRadioButton->setText(QCoreApplication::translate("MainWindow", "Brush", nullptr));
        ColorGroupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        colorPickerPushButton->setText(QCoreApplication::translate("MainWindow", "ColorPicker", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
