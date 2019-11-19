/****************************************************************************
** Meta object code from reading C++ file 'CircularBuffer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-extra-data-structures/src/CircularBuffer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CircularBuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLExtraDataStructures__CircularBuffer_t {
    QByteArrayData data[14];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLExtraDataStructures__CircularBuffer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLExtraDataStructures__CircularBuffer_t qt_meta_stringdata_QMLExtraDataStructures__CircularBuffer = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QMLExtraDataStructures::Circu..."
QT_MOC_LITERAL(1, 39, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 15), // "elementsChanged"
QT_MOC_LITERAL(4, 68, 12), // "elementAdded"
QT_MOC_LITERAL(5, 81, 7), // "element"
QT_MOC_LITERAL(6, 89, 14), // "elementRemoved"
QT_MOC_LITERAL(7, 104, 5), // "clear"
QT_MOC_LITERAL(8, 110, 3), // "get"
QT_MOC_LITERAL(9, 114, 5), // "index"
QT_MOC_LITERAL(10, 120, 3), // "add"
QT_MOC_LITERAL(11, 124, 6), // "remove"
QT_MOC_LITERAL(12, 131, 4), // "size"
QT_MOC_LITERAL(13, 136, 8) // "elements"

    },
    "QMLExtraDataStructures::CircularBuffer\0"
    "sizeChanged\0\0elementsChanged\0elementAdded\0"
    "element\0elementRemoved\0clear\0get\0index\0"
    "add\0remove\0size\0elements"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLExtraDataStructures__CircularBuffer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   62,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::QVariant,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QVariant, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QMLExtraDataStructures::CircularBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CircularBuffer *_t = static_cast<CircularBuffer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->elementsChanged(); break;
        case 2: _t->elementAdded((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->elementRemoved((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: { QVariant _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->add((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->remove((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CircularBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CircularBuffer::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CircularBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CircularBuffer::elementsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CircularBuffer::*)(QVariant const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CircularBuffer::elementAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CircularBuffer::*)(QVariant const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CircularBuffer::elementRemoved)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CircularBuffer *_t = static_cast<CircularBuffer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getSize(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->getElements(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CircularBuffer *_t = static_cast<CircularBuffer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMLExtraDataStructures::CircularBuffer::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QMLExtraDataStructures__CircularBuffer.data,
      qt_meta_data_QMLExtraDataStructures__CircularBuffer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMLExtraDataStructures::CircularBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLExtraDataStructures::CircularBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLExtraDataStructures__CircularBuffer.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLExtraDataStructures::CircularBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMLExtraDataStructures::CircularBuffer::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMLExtraDataStructures::CircularBuffer::elementsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMLExtraDataStructures::CircularBuffer::elementAdded(QVariant const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMLExtraDataStructures::CircularBuffer::elementRemoved(QVariant const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
