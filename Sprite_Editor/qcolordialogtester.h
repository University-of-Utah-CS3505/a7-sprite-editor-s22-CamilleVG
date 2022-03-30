#ifndef QCOLORDIALOGTESTER_H
#define QCOLORDIALOGTESTER_H

#include <QWidget>
#include <QColorDialog>

class QColorDialogTester : public QWidget
{
public:
    QColorDialogTester();
    QColor returnColor();
};
#endif // QCOLORDIALOGTESTER_H
