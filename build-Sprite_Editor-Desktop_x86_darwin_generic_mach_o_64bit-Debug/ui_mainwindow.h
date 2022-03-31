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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionNew;
    QAction *actionClose;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *ToolsGroupBox;
    QRadioButton *eraserRadioButton;
    QRadioButton *pencilRadioButton;
    QRadioButton *brushRadioButton;
    QPushButton *colorPickerPushButton;
    QFrame *currentColorFrame;
    QGraphicsView *previewWindow;
    QPushButton *playPushButton;
    QSlider *playSpeedHorizontalSlider;
    QPushButton *addFrame;
    QPushButton *deleteFrame;
    QWidget *gridLayoutWidget;
    QGridLayout *drawGrid;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QSpinBox *fpsSpinBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(210, 400, 521, 141));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 139));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        horizontalLayout_2->addLayout(horizontalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);
        ToolsGroupBox = new QGroupBox(centralwidget);
        ToolsGroupBox->setObjectName(QString::fromUtf8("ToolsGroupBox"));
        ToolsGroupBox->setGeometry(QRect(10, 70, 161, 201));
        eraserRadioButton = new QRadioButton(ToolsGroupBox);
        eraserRadioButton->setObjectName(QString::fromUtf8("eraserRadioButton"));
        eraserRadioButton->setGeometry(QRect(10, 50, 99, 20));
        pencilRadioButton = new QRadioButton(ToolsGroupBox);
        pencilRadioButton->setObjectName(QString::fromUtf8("pencilRadioButton"));
        pencilRadioButton->setGeometry(QRect(10, 110, 99, 20));
        brushRadioButton = new QRadioButton(ToolsGroupBox);
        brushRadioButton->setObjectName(QString::fromUtf8("brushRadioButton"));
        brushRadioButton->setGeometry(QRect(10, 170, 99, 20));
        colorPickerPushButton = new QPushButton(centralwidget);
        colorPickerPushButton->setObjectName(QString::fromUtf8("colorPickerPushButton"));
        colorPickerPushButton->setGeometry(QRect(20, 10, 100, 32));
        currentColorFrame = new QFrame(centralwidget);
        currentColorFrame->setObjectName(QString::fromUtf8("currentColorFrame"));
        currentColorFrame->setGeometry(QRect(130, 10, 31, 31));
        currentColorFrame->setFrameShape(QFrame::StyledPanel);
        currentColorFrame->setFrameShadow(QFrame::Raised);
        previewWindow = new QGraphicsView(centralwidget);
        previewWindow->setObjectName(QString::fromUtf8("previewWindow"));
        previewWindow->setGeometry(QRect(10, 330, 161, 121));
        playPushButton = new QPushButton(centralwidget);
        playPushButton->setObjectName(QString::fromUtf8("playPushButton"));
        playPushButton->setGeometry(QRect(20, 510, 131, 32));
        playSpeedHorizontalSlider = new QSlider(centralwidget);
        playSpeedHorizontalSlider->setObjectName(QString::fromUtf8("playSpeedHorizontalSlider"));
        playSpeedHorizontalSlider->setGeometry(QRect(10, 460, 160, 25));
        playSpeedHorizontalSlider->setMaximum(10);
        playSpeedHorizontalSlider->setOrientation(Qt::Horizontal);
        addFrame = new QPushButton(centralwidget);
        addFrame->setObjectName(QString::fromUtf8("addFrame"));
        addFrame->setGeometry(QRect(740, 420, 31, 24));
        deleteFrame = new QPushButton(centralwidget);
        deleteFrame->setObjectName(QString::fromUtf8("deleteFrame"));
        deleteFrame->setGeometry(QRect(740, 460, 31, 24));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(280, 20, 391, 351));
        drawGrid = new QGridLayout(gridLayoutWidget);
        drawGrid->setObjectName(QString::fromUtf8("drawGrid"));
        drawGrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        drawGrid->setHorizontalSpacing(7);
        drawGrid->setContentsMargins(0, 0, 0, 0);
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(770, 500, 31, 24));
        previousButton = new QPushButton(centralwidget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(740, 500, 31, 24));
        fpsSpinBox = new QSpinBox(centralwidget);
        fpsSpinBox->setObjectName(QString::fromUtf8("fpsSpinBox"));
        fpsSpinBox->setGeometry(QRect(60, 480, 44, 25));
        fpsSpinBox->setMaximum(10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionClose);

        retranslateUi(MainWindow);
        QObject::connect(playSpeedHorizontalSlider, &QSlider::valueChanged, fpsSpinBox, &QSpinBox::setValue);
        QObject::connect(fpsSpinBox, &QSpinBox::valueChanged, playSpeedHorizontalSlider, &QSlider::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        ToolsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        eraserRadioButton->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
        pencilRadioButton->setText(QCoreApplication::translate("MainWindow", "Pencil", nullptr));
        brushRadioButton->setText(QCoreApplication::translate("MainWindow", "Brush", nullptr));
        colorPickerPushButton->setText(QCoreApplication::translate("MainWindow", "ColorPicker", nullptr));
        playPushButton->setText(QCoreApplication::translate("MainWindow", "Play Actual Size", nullptr));
        addFrame->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        deleteFrame->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        previousButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
