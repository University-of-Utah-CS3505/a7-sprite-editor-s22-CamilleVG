#include "qcolordialogtester.h"

QColorDialogTester::QColorDialogTester()
{

}

QColor QColorDialogTester::returnColor() {
    QColor color = QColorDialog::getColor(Qt::yellow, this );
    if( color.isValid() ) {
        return color.rgb();
    }
}
