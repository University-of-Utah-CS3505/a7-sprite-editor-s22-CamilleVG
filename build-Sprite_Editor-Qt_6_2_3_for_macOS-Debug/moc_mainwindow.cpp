/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Sprite_Editor/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[66];
    char stringdata0[537];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 8), // "SetColor"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 6), // "_color"
QT_MOC_LITERAL(28, 8), // "AddFrame"
QT_MOC_LITERAL(37, 3), // "img"
QT_MOC_LITERAL(41, 11), // "UpdateFrame"
QT_MOC_LITERAL(53, 15), // "NextFrameSignal"
QT_MOC_LITERAL(69, 19), // "PreviousFrameSignal"
QT_MOC_LITERAL(89, 17), // "PlayPlayBackLabel"
QT_MOC_LITERAL(107, 9), // "UpdateFPS"
QT_MOC_LITERAL(117, 3), // "fps"
QT_MOC_LITERAL(121, 17), // "RemoveFrameSignal"
QT_MOC_LITERAL(139, 32), // "on_colorPickerPushButton_clicked"
QT_MOC_LITERAL(172, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(196, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(220, 19), // "on_addFrame_clicked"
QT_MOC_LITERAL(240, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(262, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(288, 41), // "on_playSpeedHorizontalSlider_..."
QT_MOC_LITERAL(330, 5), // "value"
QT_MOC_LITERAL(336, 28), // "on_eraserRadioButton_clicked"
QT_MOC_LITERAL(365, 28), // "on_pencilRadioButton_clicked"
QT_MOC_LITERAL(394, 27), // "on_brushRadioButton_clicked"
QT_MOC_LITERAL(422, 22), // "on_deleteFrame_clicked"
QT_MOC_LITERAL(445, 16), // "assignDimensions"
QT_MOC_LITERAL(462, 4), // "size"
QT_MOC_LITERAL(467, 12), // "UpdateLayout"
QT_MOC_LITERAL(480, 19), // "std::vector<QImage>"
QT_MOC_LITERAL(500, 6), // "frames"
QT_MOC_LITERAL(507, 8), // "SetFrame"
QT_MOC_LITERAL(516, 14), // "UpdatePlayBack"
QT_MOC_LITERAL(531, 5) // "frame"

    },
    "MainWindow\0SetColor\0\0_color\0AddFrame\0"
    "img\0UpdateFrame\0NextFrameSignal\0"
    "PreviousFrameSignal\0PlayPlayBackLabel\0"
    "UpdateFPS\0fps\0RemoveFrameSignal\0"
    "on_colorPickerPushButton_clicked\0"
    "on_actionSave_triggered\0on_actionLoad_triggered\0"
    "on_addFrame_clicked\0on_nextButton_clicked\0"
    "on_previousButton_clicked\0"
    "on_playSpeedHorizontalSlider_valueChanged\0"
    "value\0on_eraserRadioButton_clicked\0"
    "on_pencilRadioButton_clicked\0"
    "on_brushRadioButton_clicked\0"
    "on_deleteFrame_clicked\0assignDimensions\0"
    "size\0UpdateLayout\0std::vector<QImage>\0"
    "frames\0SetFrame\0UpdatePlayBack\0frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  152,    2, 0x06,    1 /* Public */,
       4,    1,  155,    2, 0x06,    3 /* Public */,
       6,    1,  158,    2, 0x06,    5 /* Public */,
       7,    0,  161,    2, 0x06,    7 /* Public */,
       8,    0,  162,    2, 0x06,    8 /* Public */,
       9,    0,  163,    2, 0x06,    9 /* Public */,
      10,    1,  164,    2, 0x06,   10 /* Public */,
      12,    0,  167,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  168,    2, 0x08,   13 /* Private */,
      14,    0,  169,    2, 0x08,   14 /* Private */,
      15,    0,  170,    2, 0x08,   15 /* Private */,
      16,    0,  171,    2, 0x08,   16 /* Private */,
      17,    0,  172,    2, 0x08,   17 /* Private */,
      18,    0,  173,    2, 0x08,   18 /* Private */,
      19,    1,  174,    2, 0x08,   19 /* Private */,
      21,    0,  177,    2, 0x08,   21 /* Private */,
      22,    0,  178,    2, 0x08,   22 /* Private */,
      23,    0,  179,    2, 0x08,   23 /* Private */,
      24,    0,  180,    2, 0x08,   24 /* Private */,
      25,    1,  181,    2, 0x0a,   25 /* Public */,
      27,    1,  184,    2, 0x0a,   27 /* Public */,
      30,    1,  187,    2, 0x0a,   29 /* Public */,
      31,    1,  190,    2, 0x0a,   31 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,   32,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->AddFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->UpdateFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->NextFrameSignal(); break;
        case 4: _t->PreviousFrameSignal(); break;
        case 5: _t->PlayPlayBackLabel(); break;
        case 6: _t->UpdateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->RemoveFrameSignal(); break;
        case 8: _t->on_colorPickerPushButton_clicked(); break;
        case 9: _t->on_actionSave_triggered(); break;
        case 10: _t->on_actionLoad_triggered(); break;
        case 11: _t->on_addFrame_clicked(); break;
        case 12: _t->on_nextButton_clicked(); break;
        case 13: _t->on_previousButton_clicked(); break;
        case 14: _t->on_playSpeedHorizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_eraserRadioButton_clicked(); break;
        case 16: _t->on_pencilRadioButton_clicked(); break;
        case 17: _t->on_brushRadioButton_clicked(); break;
        case 18: _t->on_deleteFrame_clicked(); break;
        case 19: _t->assignDimensions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->UpdateLayout((*reinterpret_cast< std::vector<QImage>(*)>(_a[1]))); break;
        case 21: _t->SetFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 22: _t->UpdatePlayBack((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SetColor)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AddFrame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::UpdateFrame)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::NextFrameSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::PreviousFrameSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::PlayPlayBackLabel)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::UpdateFPS)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::RemoveFrameSignal)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::SetColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::AddFrame(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::UpdateFrame(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::NextFrameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::PreviousFrameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::PlayPlayBackLabel()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainWindow::UpdateFPS(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::RemoveFrameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
