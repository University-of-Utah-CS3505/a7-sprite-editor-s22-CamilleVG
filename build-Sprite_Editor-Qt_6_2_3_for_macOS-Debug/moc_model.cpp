/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Sprite_Editor/model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Model_t {
    const uint offsetsAndSize[22];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Model_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Model_t qt_meta_stringdata_Model = {
    {
QT_MOC_LITERAL(0, 5), // "Model"
QT_MOC_LITERAL(6, 15), // "RenderMainImage"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 5), // "frame"
QT_MOC_LITERAL(29, 15), // "RenderAnimImage"
QT_MOC_LITERAL(45, 8), // "SetBrush"
QT_MOC_LITERAL(54, 5), // "brush"
QT_MOC_LITERAL(60, 8), // "SetColor"
QT_MOC_LITERAL(69, 5), // "color"
QT_MOC_LITERAL(75, 6), // "SetFPS"
QT_MOC_LITERAL(82, 3) // "fps"

    },
    "Model\0RenderMainImage\0\0frame\0"
    "RenderAnimImage\0SetBrush\0brush\0SetColor\0"
    "color\0SetFPS\0fps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   50,    2, 0x0a,    5 /* Public */,
       7,    1,   53,    2, 0x0a,    7 /* Public */,
       9,    1,   56,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QImage,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RenderMainImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->RenderAnimImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->SetBrush((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SetColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->SetFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::RenderMainImage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::RenderAnimImage)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Model::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Model.offsetsAndSize,
    qt_meta_data_Model,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Model_t
, QtPrivate::TypeAndForceComplete<Model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Model.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Model::RenderMainImage(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Model::RenderAnimImage(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE