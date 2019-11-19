/****************************************************************************
** Meta object code from reading C++ file 'CelluloZonePaintedItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZonePaintedItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZonePaintedItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZonePaintedItem_t {
    QByteArrayData data[13];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePaintedItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePaintedItem_t qt_meta_stringdata_Cellulo__CelluloZonePaintedItem = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Cellulo::CelluloZonePaintedItem"
QT_MOC_LITERAL(1, 32, 12), // "colorChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "associatedZoneChanged"
QT_MOC_LITERAL(4, 68, 30), // "physicalPlaygroundWidthChanged"
QT_MOC_LITERAL(5, 99, 31), // "physicalPlaygroundHeightChanged"
QT_MOC_LITERAL(6, 131, 16), // "setWidthToParent"
QT_MOC_LITERAL(7, 148, 17), // "setHeightToParent"
QT_MOC_LITERAL(8, 166, 5), // "color"
QT_MOC_LITERAL(9, 172, 14), // "associatedZone"
QT_MOC_LITERAL(10, 187, 21), // "Cellulo::CelluloZone*"
QT_MOC_LITERAL(11, 209, 23), // "physicalPlaygroundWidth"
QT_MOC_LITERAL(12, 233, 24) // "physicalPlaygroundHeight"

    },
    "Cellulo::CelluloZonePaintedItem\0"
    "colorChanged\0\0associatedZoneChanged\0"
    "physicalPlaygroundWidthChanged\0"
    "physicalPlaygroundHeightChanged\0"
    "setWidthToParent\0setHeightToParent\0"
    "color\0associatedZone\0Cellulo::CelluloZone*\0"
    "physicalPlaygroundWidth\0"
    "physicalPlaygroundHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePaintedItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QColor, 0x00495103,
       9, 0x80000000 | 10, 0x0049510b,
      11, QMetaType::QReal, 0x00495103,
      12, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Cellulo::CelluloZonePaintedItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePaintedItem *_t = static_cast<CelluloZonePaintedItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->associatedZoneChanged(); break;
        case 2: _t->physicalPlaygroundWidthChanged(); break;
        case 3: _t->physicalPlaygroundHeightChanged(); break;
        case 4: _t->setWidthToParent(); break;
        case 5: _t->setHeightToParent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZonePaintedItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePaintedItem::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloZonePaintedItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePaintedItem::associatedZoneChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloZonePaintedItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePaintedItem::physicalPlaygroundWidthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloZonePaintedItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePaintedItem::physicalPlaygroundHeightChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloZone* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZonePaintedItem *_t = static_cast<CelluloZonePaintedItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getColor(); break;
        case 1: *reinterpret_cast< Cellulo::CelluloZone**>(_v) = _t->getAssociatedZone(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->getPhysicalPlaygroundWidth(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->getPhysicalPlaygroundHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZonePaintedItem *_t = static_cast<CelluloZonePaintedItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setAssociatedZone(*reinterpret_cast< Cellulo::CelluloZone**>(_v)); break;
        case 2: _t->setPhysicalPlaygroundWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setPhysicalPlaygroundHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePaintedItem::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePaintedItem.data,
      qt_meta_data_Cellulo__CelluloZonePaintedItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePaintedItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePaintedItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePaintedItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int Cellulo::CelluloZonePaintedItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::CelluloZonePaintedItem::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloZonePaintedItem::associatedZoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloZonePaintedItem::physicalPlaygroundWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloZonePaintedItem::physicalPlaygroundHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
