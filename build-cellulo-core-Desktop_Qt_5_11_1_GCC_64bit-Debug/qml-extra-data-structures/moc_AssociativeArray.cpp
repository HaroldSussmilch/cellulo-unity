/****************************************************************************
** Meta object code from reading C++ file 'AssociativeArray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-extra-data-structures/src/AssociativeArray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssociativeArray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLExtraDataStructures__AssociativeArray_t {
    QByteArrayData data[14];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLExtraDataStructures__AssociativeArray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLExtraDataStructures__AssociativeArray_t qt_meta_stringdata_QMLExtraDataStructures__AssociativeArray = {
    {
QT_MOC_LITERAL(0, 0, 40), // "QMLExtraDataStructures::Assoc..."
QT_MOC_LITERAL(1, 41, 4), // "copy"
QT_MOC_LITERAL(2, 46, 41), // "QMLExtraDataStructures::Assoc..."
QT_MOC_LITERAL(3, 88, 0), // ""
QT_MOC_LITERAL(4, 89, 5), // "clear"
QT_MOC_LITERAL(5, 95, 3), // "get"
QT_MOC_LITERAL(6, 99, 3), // "key"
QT_MOC_LITERAL(7, 103, 3), // "set"
QT_MOC_LITERAL(8, 107, 5), // "value"
QT_MOC_LITERAL(9, 113, 4), // "keys"
QT_MOC_LITERAL(10, 118, 14), // "QList<QString>"
QT_MOC_LITERAL(11, 133, 3), // "del"
QT_MOC_LITERAL(12, 137, 6), // "values"
QT_MOC_LITERAL(13, 144, 12) // "defaultValue"

    },
    "QMLExtraDataStructures::AssociativeArray\0"
    "copy\0QMLExtraDataStructures::AssociativeArray*\0"
    "\0clear\0get\0key\0set\0value\0keys\0"
    "QList<QString>\0del\0values\0defaultValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLExtraDataStructures__AssociativeArray[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    3, 0x0a /* Public */,
       4,    0,   50,    3, 0x0a /* Public */,
       5,    1,   51,    3, 0x0a /* Public */,
       7,    2,   54,    3, 0x0a /* Public */,
       9,    0,   59,    3, 0x0a /* Public */,
      11,    1,   60,    3, 0x0a /* Public */,
      12,    0,   63,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::QVariant, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    6,    8,
    0x80000000 | 10,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::QVariantList,

 // properties: name, type, flags
      13, QMetaType::QVariant, 0x00095003,

       0        // eod
};

void QMLExtraDataStructures::AssociativeArray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssociativeArray *_t = static_cast<AssociativeArray *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QMLExtraDataStructures::AssociativeArray* _r = _t->copy();
            if (_a[0]) *reinterpret_cast< QMLExtraDataStructures::AssociativeArray**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->clear(); break;
        case 2: { QVariant _r = _t->get((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->set((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: { QList<QString> _r = _t->keys();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->del((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<QVariant> _r = _t->values();
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AssociativeArray *_t = static_cast<AssociativeArray *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->defaultValue; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AssociativeArray *_t = static_cast<AssociativeArray *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->defaultValue != *reinterpret_cast< QVariant*>(_v)) {
                _t->defaultValue = *reinterpret_cast< QVariant*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMLExtraDataStructures::AssociativeArray::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QMLExtraDataStructures__AssociativeArray.data,
      qt_meta_data_QMLExtraDataStructures__AssociativeArray,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMLExtraDataStructures::AssociativeArray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLExtraDataStructures::AssociativeArray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLExtraDataStructures__AssociativeArray.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLExtraDataStructures::AssociativeArray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
