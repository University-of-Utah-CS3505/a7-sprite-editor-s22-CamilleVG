/**
 * A7: Sprite Editor Implementation
 * Cannon Rudd, Hadyn Thurman, Camille van Ginkel, Logan Holmes, Sam Christensen
 * */
#include "qcolordialogtester.h"

/**
 * @brief Constructs a color dialog.
 */
QColorDialogTester::QColorDialogTester(){}

/**
 * @brief Returns the current color.
 * @return
 */
QColor QColorDialogTester::returnColor() {
    QColor color = QColorDialog::getColor(Qt::yellow, this );
    if( color.isValid() ) {
        return color.rgb();
    }
}
