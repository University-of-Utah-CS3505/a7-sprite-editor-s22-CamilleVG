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
    const uint offsetsAndSize[38];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Model_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Model_t qt_meta_stringdata_Model = {
    {
QT_MOC_LITERAL(0, 5), // "Model"
QT_MOC_LITERAL(6, 12), // "UpdateLayout"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 19), // "std::vector<QImage>"
QT_MOC_LITERAL(40, 6), // "frames"
QT_MOC_LITERAL(47, 12), // "currentFrame"
QT_MOC_LITERAL(60, 14), // "SetImageSignal"
QT_MOC_LITERAL(75, 3), // "img"
QT_MOC_LITERAL(79, 10), // "SendFrames"
QT_MOC_LITERAL(90, 8), // "AddFrame"
QT_MOC_LITERAL(99, 11), // "UpdateFrame"
QT_MOC_LITERAL(111, 13), // "NextFrameSlot"
QT_MOC_LITERAL(125, 17), // "PreviousFrameSlot"
QT_MOC_LITERAL(143, 9), // "GetFrames"
QT_MOC_LITERAL(153, 9), // "UpdateFPS"
QT_MOC_LITERAL(163, 4), // "_fps"
QT_MOC_LITERAL(168, 15), // "RemoveFrameSlot"
QT_MOC_LITERAL(184, 8), // "SaveFile"
QT_MOC_LITERAL(193, 8) // "filename"

    },
    "Model\0UpdateLayout\0\0std::vector<QImage>\0"
    "frames\0currentFrame\0SetImageSignal\0"
    "img\0SendFrames\0AddFrame\0UpdateFrame\0"
    "NextFrameSlot\0PreviousFrameSlot\0"
    "GetFrames\0UpdateFPS\0_fps\0RemoveFrameSlot\0"
    "SaveFile\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   80,    2, 0x06,    1 /* Public */,
       6,    1,   85,    2, 0x06,    4 /* Public */,
       8,    1,   88,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   91,    2, 0x0a,    8 /* Public */,
      10,    1,   94,    2, 0x0a,   10 /* Public */,
      11,    0,   97,    2, 0x0a,   12 /* Public */,
      12,    0,   98,    2, 0x0a,   13 /* Public */,
      13,    0,   99,    2, 0x0a,   14 /* Public */,
      14,    1,  100,    2, 0x0a,   15 /* Public */,
      16,    0,  103,    2, 0x0a,   17 /* Public */,
      17,    1,  104,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QImage,    7,
    QMetaType::Void, QMetaType::QImage,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    7,
    QMetaType::Void, QMetaType::QImage,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateLayout((*reinterpret_cast< std::vector<QImage>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SetImageSignal((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->SendFrames((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->AddFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->UpdateFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 5: _t->NextFrameSlot(); break;
        case 6: _t->PreviousFrameSlot(); break;
        case 7: _t->GetFrames(); break;
        case 8: _t->UpdateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->RemoveFrameSlot(); break;
        case 10: _t->SaveFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(std::vector<QImage> , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::UpdateLayout)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::SetImageSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::SendFrames)) {
                *result = 2;
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
, QtPrivate::TypeAndForceComplete<Model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Model::UpdateLayout(std::vector<QImage> _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Model::SetImageSignal(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::SendFrames(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
