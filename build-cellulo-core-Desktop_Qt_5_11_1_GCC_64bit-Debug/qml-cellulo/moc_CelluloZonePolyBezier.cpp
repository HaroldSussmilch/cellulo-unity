/****************************************************************************
** Meta object code from reading C++ file 'CelluloZonePolyBezier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZonePolyBezier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZonePolyBezier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZonePolyBezier_t {
    QByteArrayData data[17];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolyBezier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolyBezier_t qt_meta_stringdata_Cellulo__CelluloZonePolyBezier = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Cellulo::CelluloZonePolyBezier"
QT_MOC_LITERAL(1, 31, 20), // "controlPointsChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "sendPathToRobot"
QT_MOC_LITERAL(4, 69, 26), // "Cellulo::CelluloBluetooth*"
QT_MOC_LITERAL(5, 96, 5), // "robot"
QT_MOC_LITERAL(6, 102, 8), // "getPoint"
QT_MOC_LITERAL(7, 111, 1), // "t"
QT_MOC_LITERAL(8, 113, 10), // "getTangent"
QT_MOC_LITERAL(9, 124, 9), // "getNormal"
QT_MOC_LITERAL(10, 134, 13), // "isMouseInside"
QT_MOC_LITERAL(11, 148, 13), // "mousePosition"
QT_MOC_LITERAL(12, 162, 11), // "canvasWidth"
QT_MOC_LITERAL(13, 174, 12), // "canvasHeight"
QT_MOC_LITERAL(14, 187, 13), // "physicalWidth"
QT_MOC_LITERAL(15, 201, 14), // "physicalHeight"
QT_MOC_LITERAL(16, 216, 13) // "controlPoints"

    },
    "Cellulo::CelluloZonePolyBezier\0"
    "controlPointsChanged\0\0sendPathToRobot\0"
    "Cellulo::CelluloBluetooth*\0robot\0"
    "getPoint\0t\0getTangent\0getNormal\0"
    "isMouseInside\0mousePosition\0canvasWidth\0"
    "canvasHeight\0physicalWidth\0physicalHeight\0"
    "controlPoints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolyBezier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    5,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::QVector2D, QMetaType::QReal,    7,
    QMetaType::QVector2D, QMetaType::QReal,    7,
    QMetaType::QVector2D, QMetaType::QReal,    7,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVector2D, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   11,   12,   13,   14,   15,

 // properties: name, type, flags
      16, QMetaType::QVariantList, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Cellulo::CelluloZonePolyBezier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolyBezier *_t = static_cast<CelluloZonePolyBezier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->controlPointsChanged(); break;
        case 1: _t->sendPathToRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 2: { QVector2D _r = _t->getPoint((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector2D _r = _t->getTangent((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVector2D _r = _t->getNormal((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->isMouseInside((*reinterpret_cast< QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZonePolyBezier::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePolyBezier::controlPointsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZonePolyBezier *_t = static_cast<CelluloZonePolyBezier *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->getControlPoints(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZonePolyBezier *_t = static_cast<CelluloZonePolyBezier *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setControlPoints(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolyBezier::staticMetaObject = {
    { &CelluloZone::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolyBezier.data,
      qt_meta_data_Cellulo__CelluloZonePolyBezier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolyBezier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolyBezier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolyBezier.stringdata0))
        return static_cast<void*>(this);
    return CelluloZone::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolyBezier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZone::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
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

// SIGNAL 0
void Cellulo::CelluloZonePolyBezier::controlPointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZonePolyBezierClosestT_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolyBezierClosestT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolyBezierClosestT_t qt_meta_stringdata_Cellulo__CelluloZonePolyBezierClosestT = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Cellulo::CelluloZonePolyBezie..."
QT_MOC_LITERAL(1, 39, 9), // "calculate"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 6), // "xRobot"
QT_MOC_LITERAL(4, 57, 6), // "yRobot"
QT_MOC_LITERAL(5, 64, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZonePolyBezierClosestT\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolyBezierClosestT[] = {

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

void Cellulo::CelluloZonePolyBezierClosestT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolyBezierClosestT *_t = static_cast<CelluloZonePolyBezierClosestT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolyBezierClosestT::staticMetaObject = {
    { &CelluloZonePolyBezier::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierClosestT.data,
      qt_meta_data_Cellulo__CelluloZonePolyBezierClosestT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolyBezierClosestT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolyBezierClosestT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierClosestT.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolyBezier::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolyBezierClosestT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolyBezier::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZonePolyBezierXT_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolyBezierXT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolyBezierXT_t qt_meta_stringdata_Cellulo__CelluloZonePolyBezierXT = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Cellulo::CelluloZonePolyBezierXT"
QT_MOC_LITERAL(1, 33, 9), // "calculate"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "xRobot"
QT_MOC_LITERAL(4, 51, 6), // "yRobot"
QT_MOC_LITERAL(5, 58, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZonePolyBezierXT\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolyBezierXT[] = {

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

void Cellulo::CelluloZonePolyBezierXT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolyBezierXT *_t = static_cast<CelluloZonePolyBezierXT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolyBezierXT::staticMetaObject = {
    { &CelluloZonePolyBezierClosestT::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierXT.data,
      qt_meta_data_Cellulo__CelluloZonePolyBezierXT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolyBezierXT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolyBezierXT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierXT.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolyBezierClosestT::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolyBezierXT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolyBezierClosestT::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZonePolyBezierYT_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolyBezierYT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolyBezierYT_t qt_meta_stringdata_Cellulo__CelluloZonePolyBezierYT = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Cellulo::CelluloZonePolyBezierYT"
QT_MOC_LITERAL(1, 33, 9), // "calculate"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "xRobot"
QT_MOC_LITERAL(4, 51, 6), // "yRobot"
QT_MOC_LITERAL(5, 58, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZonePolyBezierYT\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolyBezierYT[] = {

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

void Cellulo::CelluloZonePolyBezierYT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolyBezierYT *_t = static_cast<CelluloZonePolyBezierYT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolyBezierYT::staticMetaObject = {
    { &CelluloZonePolyBezierClosestT::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierYT.data,
      qt_meta_data_Cellulo__CelluloZonePolyBezierYT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolyBezierYT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolyBezierYT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierYT.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolyBezierClosestT::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolyBezierYT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolyBezierClosestT::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZonePolyBezierDistance_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolyBezierDistance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolyBezierDistance_t qt_meta_stringdata_Cellulo__CelluloZonePolyBezierDistance = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Cellulo::CelluloZonePolyBezie..."
QT_MOC_LITERAL(1, 39, 9), // "calculate"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 6), // "xRobot"
QT_MOC_LITERAL(4, 57, 6), // "yRobot"
QT_MOC_LITERAL(5, 64, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZonePolyBezierDistance\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolyBezierDistance[] = {

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

void Cellulo::CelluloZonePolyBezierDistance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolyBezierDistance *_t = static_cast<CelluloZonePolyBezierDistance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolyBezierDistance::staticMetaObject = {
    { &CelluloZonePolyBezierClosestT::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierDistance.data,
      qt_meta_data_Cellulo__CelluloZonePolyBezierDistance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolyBezierDistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolyBezierDistance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierDistance.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolyBezierClosestT::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolyBezierDistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolyBezierClosestT::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZonePolyBezierBorder_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolyBezierBorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolyBezierBorder_t qt_meta_stringdata_Cellulo__CelluloZonePolyBezierBorder = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Cellulo::CelluloZonePolyBezie..."
QT_MOC_LITERAL(1, 37, 22), // "borderThicknessChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 9), // "calculate"
QT_MOC_LITERAL(4, 71, 6), // "xRobot"
QT_MOC_LITERAL(5, 78, 6), // "yRobot"
QT_MOC_LITERAL(6, 85, 10), // "thetaRobot"
QT_MOC_LITERAL(7, 96, 15) // "borderThickness"

    },
    "Cellulo::CelluloZonePolyBezierBorder\0"
    "borderThicknessChanged\0\0calculate\0"
    "xRobot\0yRobot\0thetaRobot\0borderThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolyBezierBorder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    3,   25,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    4,    5,    6,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Cellulo::CelluloZonePolyBezierBorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolyBezierBorder *_t = static_cast<CelluloZonePolyBezierBorder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->borderThicknessChanged(); break;
        case 1: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZonePolyBezierBorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePolyBezierBorder::borderThicknessChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZonePolyBezierBorder *_t = static_cast<CelluloZonePolyBezierBorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getBorderThickness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZonePolyBezierBorder *_t = static_cast<CelluloZonePolyBezierBorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderThickness(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolyBezierBorder::staticMetaObject = {
    { &CelluloZonePolyBezier::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierBorder.data,
      qt_meta_data_Cellulo__CelluloZonePolyBezierBorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolyBezierBorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolyBezierBorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierBorder.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolyBezier::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolyBezierBorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolyBezier::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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

// SIGNAL 0
void Cellulo::CelluloZonePolyBezierBorder::borderThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZonePolyBezierInner_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolyBezierInner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolyBezierInner_t qt_meta_stringdata_Cellulo__CelluloZonePolyBezierInner = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Cellulo::CelluloZonePolyBezie..."
QT_MOC_LITERAL(1, 36, 9), // "calculate"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 6), // "xRobot"
QT_MOC_LITERAL(4, 54, 6), // "yRobot"
QT_MOC_LITERAL(5, 61, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZonePolyBezierInner\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolyBezierInner[] = {

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

void Cellulo::CelluloZonePolyBezierInner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolyBezierInner *_t = static_cast<CelluloZonePolyBezierInner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolyBezierInner::staticMetaObject = {
    { &CelluloZonePolyBezier::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierInner.data,
      qt_meta_data_Cellulo__CelluloZonePolyBezierInner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolyBezierInner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolyBezierInner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolyBezierInner.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolyBezier::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolyBezierInner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolyBezier::qt_metacall(_c, _id, _a);
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
