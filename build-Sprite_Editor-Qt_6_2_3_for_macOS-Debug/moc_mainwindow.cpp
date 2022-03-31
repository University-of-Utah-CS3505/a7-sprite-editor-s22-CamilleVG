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
    const uint offsetsAndSize[42];
    char stringdata0[309];
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
QT_MOC_LITERAL(89, 32), // "on_colorPickerPushButton_clicked"
QT_MOC_LITERAL(122, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(146, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(170, 19), // "on_addFrame_clicked"
QT_MOC_LITERAL(190, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(212, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(238, 16), // "assignDimensions"
QT_MOC_LITERAL(255, 4), // "size"
QT_MOC_LITERAL(260, 12), // "UpdateLayout"
QT_MOC_LITERAL(273, 19), // "std::vector<QImage>"
QT_MOC_LITERAL(293, 6), // "frames"
QT_MOC_LITERAL(300, 8) // "SetFrame"

    },
    "MainWindow\0SetColor\0\0_color\0AddFrame\0"
    "img\0UpdateFrame\0NextFrameSignal\0"
    "PreviousFrameSignal\0"
    "on_colorPickerPushButton_clicked\0"
    "on_actionSave_triggered\0on_actionLoad_triggered\0"
    "on_addFrame_clicked\0on_nextButton_clicked\0"
    "on_previousButton_clicked\0assignDimensions\0"
    "size\0UpdateLayout\0std::vector<QImage>\0"
    "frames\0SetFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,
       4,    1,  101,    2, 0x06,    3 /* Public */,
       6,    1,  104,    2, 0x06,    5 /* Public */,
       7,    0,  107,    2, 0x06,    7 /* Public */,
       8,    0,  108,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  109,    2, 0x08,    9 /* Private */,
      10,    0,  110,    2, 0x08,   10 /* Private */,
      11,    0,  111,    2, 0x08,   11 /* Private */,
      12,    0,  112,    2, 0x08,   12 /* Private */,
      13,    0,  113,    2, 0x08,   13 /* Private */,
      14,    0,  114,    2, 0x08,   14 /* Private */,
      15,    1,  115,    2, 0x0a,   15 /* Public */,
      17,    1,  118,    2, 0x0a,   17 /* Public */,
      20,    1,  121,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QImage,    5,

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
        case 5: _t->on_colorPickerPushButton_clicked(); break;
        case 6: _t->on_actionSave_triggered(); break;
        case 7: _t->on_actionLoad_triggered(); break;
        case 8: _t->on_addFrame_clicked(); break;
        case 9: _t->on_nextButton_clicked(); break;
        case 10: _t->on_previousButton_clicked(); break;
        case 11: _t->assignDimensions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->UpdateLayout((*reinterpret_cast< std::vector<QImage>(*)>(_a[1]))); break;
        case 13: _t->SetFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
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
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>


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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
