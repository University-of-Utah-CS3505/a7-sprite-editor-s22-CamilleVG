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
    const uint offsetsAndSize[82];
    char stringdata0[666];
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
QT_MOC_LITERAL(139, 8), // "SaveFile"
QT_MOC_LITERAL(148, 8), // "filename"
QT_MOC_LITERAL(157, 8), // "OpenFile"
QT_MOC_LITERAL(166, 24), // "UpdateRealPlayBackSignal"
QT_MOC_LITERAL(191, 5), // "frame"
QT_MOC_LITERAL(197, 4), // "size"
QT_MOC_LITERAL(202, 32), // "on_colorPickerPushButton_clicked"
QT_MOC_LITERAL(235, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(259, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(283, 19), // "on_addFrame_clicked"
QT_MOC_LITERAL(303, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(325, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(351, 41), // "on_playSpeedHorizontalSlider_..."
QT_MOC_LITERAL(393, 5), // "value"
QT_MOC_LITERAL(399, 28), // "on_eraserRadioButton_clicked"
QT_MOC_LITERAL(428, 28), // "on_pencilRadioButton_clicked"
QT_MOC_LITERAL(457, 27), // "on_brushRadioButton_clicked"
QT_MOC_LITERAL(485, 22), // "on_deleteFrame_clicked"
QT_MOC_LITERAL(508, 18), // "UpdateDrawingFrame"
QT_MOC_LITERAL(527, 25), // "on_playPushButton_clicked"
QT_MOC_LITERAL(553, 16), // "assignDimensions"
QT_MOC_LITERAL(570, 12), // "UpdateLayout"
QT_MOC_LITERAL(583, 19), // "std::vector<QImage>"
QT_MOC_LITERAL(603, 6), // "frames"
QT_MOC_LITERAL(610, 12), // "currentFrame"
QT_MOC_LITERAL(623, 8), // "SetFrame"
QT_MOC_LITERAL(632, 14), // "UpdatePlayBack"
QT_MOC_LITERAL(647, 18) // "UpdateRealPlayBack"

    },
    "MainWindow\0SetColor\0\0_color\0AddFrame\0"
    "img\0UpdateFrame\0NextFrameSignal\0"
    "PreviousFrameSignal\0PlayPlayBackLabel\0"
    "UpdateFPS\0fps\0RemoveFrameSignal\0"
    "SaveFile\0filename\0OpenFile\0"
    "UpdateRealPlayBackSignal\0frame\0size\0"
    "on_colorPickerPushButton_clicked\0"
    "on_actionSave_triggered\0on_actionLoad_triggered\0"
    "on_addFrame_clicked\0on_nextButton_clicked\0"
    "on_previousButton_clicked\0"
    "on_playSpeedHorizontalSlider_valueChanged\0"
    "value\0on_eraserRadioButton_clicked\0"
    "on_pencilRadioButton_clicked\0"
    "on_brushRadioButton_clicked\0"
    "on_deleteFrame_clicked\0UpdateDrawingFrame\0"
    "on_playPushButton_clicked\0assignDimensions\0"
    "UpdateLayout\0std::vector<QImage>\0"
    "frames\0currentFrame\0SetFrame\0"
    "UpdatePlayBack\0UpdateRealPlayBack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x06,    1 /* Public */,
       4,    1,  191,    2, 0x06,    3 /* Public */,
       6,    1,  194,    2, 0x06,    5 /* Public */,
       7,    0,  197,    2, 0x06,    7 /* Public */,
       8,    0,  198,    2, 0x06,    8 /* Public */,
       9,    0,  199,    2, 0x06,    9 /* Public */,
      10,    1,  200,    2, 0x06,   10 /* Public */,
      12,    0,  203,    2, 0x06,   12 /* Public */,
      13,    1,  204,    2, 0x06,   13 /* Public */,
      15,    1,  207,    2, 0x06,   15 /* Public */,
      16,    2,  210,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    0,  215,    2, 0x08,   20 /* Private */,
      20,    0,  216,    2, 0x08,   21 /* Private */,
      21,    0,  217,    2, 0x08,   22 /* Private */,
      22,    0,  218,    2, 0x08,   23 /* Private */,
      23,    0,  219,    2, 0x08,   24 /* Private */,
      24,    0,  220,    2, 0x08,   25 /* Private */,
      25,    1,  221,    2, 0x08,   26 /* Private */,
      27,    0,  224,    2, 0x08,   28 /* Private */,
      28,    0,  225,    2, 0x08,   29 /* Private */,
      29,    0,  226,    2, 0x08,   30 /* Private */,
      30,    0,  227,    2, 0x08,   31 /* Private */,
      31,    1,  228,    2, 0x08,   32 /* Private */,
      32,    0,  231,    2, 0x08,   34 /* Private */,
      33,    1,  232,    2, 0x0a,   35 /* Public */,
      34,    2,  235,    2, 0x0a,   37 /* Public */,
      38,    1,  240,    2, 0x0a,   40 /* Public */,
      39,    1,  243,    2, 0x0a,   42 /* Public */,
      40,    1,  246,    2, 0x0a,   44 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QImage, QMetaType::Int,   17,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Int,   36,   37,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,   17,
    QMetaType::Void, QMetaType::QImage,   17,

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
        case 8: _t->SaveFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->OpenFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->UpdateRealPlayBackSignal((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_colorPickerPushButton_clicked(); break;
        case 12: _t->on_actionSave_triggered(); break;
        case 13: _t->on_actionLoad_triggered(); break;
        case 14: _t->on_addFrame_clicked(); break;
        case 15: _t->on_nextButton_clicked(); break;
        case 16: _t->on_previousButton_clicked(); break;
        case 17: _t->on_playSpeedHorizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_eraserRadioButton_clicked(); break;
        case 19: _t->on_pencilRadioButton_clicked(); break;
        case 20: _t->on_brushRadioButton_clicked(); break;
        case 21: _t->on_deleteFrame_clicked(); break;
        case 22: _t->UpdateDrawingFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 23: _t->on_playPushButton_clicked(); break;
        case 24: _t->assignDimensions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->UpdateLayout((*reinterpret_cast< std::vector<QImage>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->SetFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 27: _t->UpdatePlayBack((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 28: _t->UpdateRealPlayBack((*reinterpret_cast< QImage(*)>(_a[1]))); break;
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
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SaveFile)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::OpenFile)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QImage , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::UpdateRealPlayBackSignal)) {
                *result = 10;
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
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>


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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
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

// SIGNAL 8
void MainWindow::SaveFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::OpenFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::UpdateRealPlayBackSignal(QImage _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
