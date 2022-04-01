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
    const uint offsetsAndSize[34];
    char stringdata0[187];
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
QT_MOC_LITERAL(47, 14), // "SetImageSignal"
QT_MOC_LITERAL(62, 3), // "img"
QT_MOC_LITERAL(66, 10), // "SendFrames"
QT_MOC_LITERAL(77, 8), // "AddFrame"
QT_MOC_LITERAL(86, 11), // "UpdateFrame"
QT_MOC_LITERAL(98, 13), // "NextFrameSlot"
QT_MOC_LITERAL(112, 17), // "PreviousFrameSlot"
QT_MOC_LITERAL(130, 9), // "GetFrames"
QT_MOC_LITERAL(140, 9), // "UpdateFPS"
QT_MOC_LITERAL(150, 4), // "_fps"
QT_MOC_LITERAL(155, 15), // "SendPlayerFrame"
QT_MOC_LITERAL(171, 15) // "RemoveFrameSlot"

    },
    "Model\0UpdateLayout\0\0std::vector<QImage>\0"
    "frames\0SetImageSignal\0img\0SendFrames\0"
    "AddFrame\0UpdateFrame\0NextFrameSlot\0"
    "PreviousFrameSlot\0GetFrames\0UpdateFPS\0"
    "_fps\0SendPlayerFrame\0RemoveFrameSlot"
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
       1,    1,   80,    2, 0x06,    1 /* Public */,
       5,    1,   83,    2, 0x06,    3 /* Public */,
       7,    1,   86,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   89,    2, 0x0a,    7 /* Public */,
       9,    1,   92,    2, 0x0a,    9 /* Public */,
      10,    0,   95,    2, 0x0a,   11 /* Public */,
      11,    0,   96,    2, 0x0a,   12 /* Public */,
      12,    0,   97,    2, 0x0a,   13 /* Public */,
      13,    1,   98,    2, 0x0a,   14 /* Public */,
      15,    0,  101,    2, 0x0a,   16 /* Public */,
      16,    0,  102,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QImage,    6,
    QMetaType::Void, QMetaType::QImage,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    6,
    QMetaType::Void, QMetaType::QImage,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateLayout((*reinterpret_cast< std::vector<QImage>(*)>(_a[1]))); break;
        case 1: _t->SetImageSignal((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->SendFrames((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->AddFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->UpdateFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 5: _t->NextFrameSlot(); break;
        case 6: _t->PreviousFrameSlot(); break;
        case 7: _t->GetFrames(); break;
        case 8: _t->UpdateFPS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->SendPlayerFrame(); break;
        case 10: _t->RemoveFrameSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(std::vector<QImage> );
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
, QtPrivate::TypeAndForceComplete<Model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<QImage>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
void Model::UpdateLayout(std::vector<QImage> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
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
