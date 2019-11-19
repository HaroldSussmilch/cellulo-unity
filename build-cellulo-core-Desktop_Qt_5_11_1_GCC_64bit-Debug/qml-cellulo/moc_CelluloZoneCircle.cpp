/****************************************************************************
** Meta object code from reading C++ file 'CelluloZoneCircle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZoneCircle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZoneCircle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZoneCircle_t {
    QByteArrayData data[14];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneCircle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneCircle_t qt_meta_stringdata_Cellulo__CelluloZoneCircle = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Cellulo::CelluloZoneCircle"
QT_MOC_LITERAL(1, 27, 8), // "xChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "yChanged"
QT_MOC_LITERAL(4, 46, 8), // "rChanged"
QT_MOC_LITERAL(5, 55, 13), // "isMouseInside"
QT_MOC_LITERAL(6, 69, 13), // "mousePosition"
QT_MOC_LITERAL(7, 83, 11), // "canvasWidth"
QT_MOC_LITERAL(8, 95, 12), // "canvasHeight"
QT_MOC_LITERAL(9, 108, 13), // "physicalWidth"
QT_MOC_LITERAL(10, 122, 14), // "physicalHeight"
QT_MOC_LITERAL(11, 137, 1), // "x"
QT_MOC_LITERAL(12, 139, 1), // "y"
QT_MOC_LITERAL(13, 141, 1) // "r"

    },
    "Cellulo::CelluloZoneCircle\0xChanged\0"
    "\0yChanged\0rChanged\0isMouseInside\0"
    "mousePosition\0canvasWidth\0canvasHeight\0"
    "physicalWidth\0physicalHeight\0x\0y\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneCircle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    5,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVector2D, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    6,    7,    8,    9,   10,

 // properties: name, type, flags
      11, QMetaType::Float, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Cellulo::CelluloZoneCircle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneCircle *_t = static_cast<CelluloZoneCircle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: _t->rChanged(); break;
        case 3: { bool _r = _t->isMouseInside((*reinterpret_cast< QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZoneCircle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneCircle::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloZoneCircle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneCircle::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloZoneCircle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneCircle::rChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneCircle *_t = static_cast<CelluloZoneCircle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getX(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getY(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getR(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneCircle *_t = static_cast<CelluloZoneCircle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setR(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneCircle::staticMetaObject = {
    { &CelluloZone::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneCircle.data,
      qt_meta_data_Cellulo__CelluloZoneCircle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneCircle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneCircle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneCircle.stringdata0))
        return static_cast<void*>(this);
    return CelluloZone::qt_metacast(_clname);
}

int Cellulo::CelluloZoneCircle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZone::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::CelluloZoneCircle::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloZoneCircle::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloZoneCircle::rChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneCircleInner_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneCircleInner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneCircleInner_t qt_meta_stringdata_Cellulo__CelluloZoneCircleInner = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Cellulo::CelluloZoneCircleInner"
QT_MOC_LITERAL(1, 32, 9), // "calculate"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "xRobot"
QT_MOC_LITERAL(4, 50, 6), // "yRobot"
QT_MOC_LITERAL(5, 57, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneCircleInner\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneCircleInner[] = {

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

void Cellulo::CelluloZoneCircleInner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneCircleInner *_t = static_cast<CelluloZoneCircleInner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneCircleInner::staticMetaObject = {
    { &CelluloZoneCircle::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneCircleInner.data,
      qt_meta_data_Cellulo__CelluloZoneCircleInner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneCircleInner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneCircleInner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneCircleInner.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneCircle::qt_metacast(_clname);
}

int Cellulo::CelluloZoneCircleInner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneCircle::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZoneCircleBorder_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneCircleBorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneCircleBorder_t qt_meta_stringdata_Cellulo__CelluloZoneCircleBorder = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Cellulo::CelluloZoneCircleBorder"
QT_MOC_LITERAL(1, 33, 22), // "borderThicknessChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 9), // "calculate"
QT_MOC_LITERAL(4, 67, 6), // "xRobot"
QT_MOC_LITERAL(5, 74, 6), // "yRobot"
QT_MOC_LITERAL(6, 81, 10), // "thetaRobot"
QT_MOC_LITERAL(7, 92, 15) // "borderThickness"

    },
    "Cellulo::CelluloZoneCircleBorder\0"
    "borderThicknessChanged\0\0calculate\0"
    "xRobot\0yRobot\0thetaRobot\0borderThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneCircleBorder[] = {

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

void Cellulo::CelluloZoneCircleBorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneCircleBorder *_t = static_cast<CelluloZoneCircleBorder *>(_o);
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
            using _t = void (CelluloZoneCircleBorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneCircleBorder::borderThicknessChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneCircleBorder *_t = static_cast<CelluloZoneCircleBorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getBorderThickness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneCircleBorder *_t = static_cast<CelluloZoneCircleBorder *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneCircleBorder::staticMetaObject = {
    { &CelluloZoneCircle::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneCircleBorder.data,
      qt_meta_data_Cellulo__CelluloZoneCircleBorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneCircleBorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneCircleBorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneCircleBorder.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneCircle::qt_metacast(_clname);
}

int Cellulo::CelluloZoneCircleBorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneCircle::qt_metacall(_c, _id, _a);
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
void Cellulo::CelluloZoneCircleBorder::borderThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneCircleDistance_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneCircleDistance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneCircleDistance_t qt_meta_stringdata_Cellulo__CelluloZoneCircleDistance = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Cellulo::CelluloZoneCircleDis..."
QT_MOC_LITERAL(1, 35, 9), // "calculate"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "xRobot"
QT_MOC_LITERAL(4, 53, 6), // "yRobot"
QT_MOC_LITERAL(5, 60, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneCircleDistance\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneCircleDistance[] = {

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

void Cellulo::CelluloZoneCircleDistance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneCircleDistance *_t = static_cast<CelluloZoneCircleDistance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneCircleDistance::staticMetaObject = {
    { &CelluloZoneCircle::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneCircleDistance.data,
      qt_meta_data_Cellulo__CelluloZoneCircleDistance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneCircleDistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneCircleDistance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneCircleDistance.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneCircle::qt_metacast(_clname);
}

int Cellulo::CelluloZoneCircleDistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneCircle::qt_metacall(_c, _id, _a);
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
