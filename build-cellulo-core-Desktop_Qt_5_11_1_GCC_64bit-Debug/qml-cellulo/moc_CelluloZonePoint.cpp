/****************************************************************************
** Meta object code from reading C++ file 'CelluloZonePoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZonePoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZonePoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZonePoint_t {
    QByteArrayData data[12];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePoint_t qt_meta_stringdata_Cellulo__CelluloZonePoint = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Cellulo::CelluloZonePoint"
QT_MOC_LITERAL(1, 26, 8), // "xChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "yChanged"
QT_MOC_LITERAL(4, 45, 13), // "isMouseInside"
QT_MOC_LITERAL(5, 59, 13), // "mousePosition"
QT_MOC_LITERAL(6, 73, 11), // "canvasWidth"
QT_MOC_LITERAL(7, 85, 12), // "canvasHeight"
QT_MOC_LITERAL(8, 98, 13), // "physicalWidth"
QT_MOC_LITERAL(9, 112, 14), // "physicalHeight"
QT_MOC_LITERAL(10, 127, 1), // "x"
QT_MOC_LITERAL(11, 129, 1) // "y"

    },
    "Cellulo::CelluloZonePoint\0xChanged\0\0"
    "yChanged\0isMouseInside\0mousePosition\0"
    "canvasWidth\0canvasHeight\0physicalWidth\0"
    "physicalHeight\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    5,   31,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVector2D, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    5,    6,    7,    8,    9,

 // properties: name, type, flags
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Cellulo::CelluloZonePoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePoint *_t = static_cast<CelluloZonePoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: { bool _r = _t->isMouseInside((*reinterpret_cast< QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZonePoint::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePoint::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloZonePoint::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePoint::yChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZonePoint *_t = static_cast<CelluloZonePoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getX(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getY(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZonePoint *_t = static_cast<CelluloZonePoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePoint::staticMetaObject = {
    { &CelluloZone::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePoint.data,
      qt_meta_data_Cellulo__CelluloZonePoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePoint.stringdata0))
        return static_cast<void*>(this);
    return CelluloZone::qt_metacast(_clname);
}

int Cellulo::CelluloZonePoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZone::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void Cellulo::CelluloZonePoint::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloZonePoint::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZonePointDistance_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePointDistance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePointDistance_t qt_meta_stringdata_Cellulo__CelluloZonePointDistance = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Cellulo::CelluloZonePointDist..."
QT_MOC_LITERAL(1, 34, 9), // "calculate"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "xRobot"
QT_MOC_LITERAL(4, 52, 6), // "yRobot"
QT_MOC_LITERAL(5, 59, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZonePointDistance\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePointDistance[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,

       0        // eod
};

void Cellulo::CelluloZonePointDistance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePointDistance *_t = static_cast<CelluloZonePointDistance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePointDistance::staticMetaObject = {
    { &CelluloZonePoint::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePointDistance.data,
      qt_meta_data_Cellulo__CelluloZonePointDistance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePointDistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePointDistance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePointDistance.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePoint::qt_metacast(_clname);
}

int Cellulo::CelluloZonePointDistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
