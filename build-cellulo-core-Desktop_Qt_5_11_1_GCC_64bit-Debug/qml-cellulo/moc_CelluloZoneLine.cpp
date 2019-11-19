/****************************************************************************
** Meta object code from reading C++ file 'CelluloZoneLine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZoneLine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZoneLine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZoneLine_t {
    QByteArrayData data[16];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneLine_t qt_meta_stringdata_Cellulo__CelluloZoneLine = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Cellulo::CelluloZoneLine"
QT_MOC_LITERAL(1, 25, 9), // "x1Changed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "y1Changed"
QT_MOC_LITERAL(4, 46, 9), // "x2Changed"
QT_MOC_LITERAL(5, 56, 9), // "y2Changed"
QT_MOC_LITERAL(6, 66, 13), // "isMouseInside"
QT_MOC_LITERAL(7, 80, 13), // "mousePosition"
QT_MOC_LITERAL(8, 94, 11), // "canvasWidth"
QT_MOC_LITERAL(9, 106, 12), // "canvasHeight"
QT_MOC_LITERAL(10, 119, 13), // "physicalWidth"
QT_MOC_LITERAL(11, 133, 14), // "physicalHeight"
QT_MOC_LITERAL(12, 148, 2), // "x1"
QT_MOC_LITERAL(13, 151, 2), // "y1"
QT_MOC_LITERAL(14, 154, 2), // "x2"
QT_MOC_LITERAL(15, 157, 2) // "y2"

    },
    "Cellulo::CelluloZoneLine\0x1Changed\0\0"
    "y1Changed\0x2Changed\0y2Changed\0"
    "isMouseInside\0mousePosition\0canvasWidth\0"
    "canvasHeight\0physicalWidth\0physicalHeight\0"
    "x1\0y1\0x2\0y2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    5,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVector2D, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    7,    8,    9,   10,   11,

 // properties: name, type, flags
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Cellulo::CelluloZoneLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneLine *_t = static_cast<CelluloZoneLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->x1Changed(); break;
        case 1: _t->y1Changed(); break;
        case 2: _t->x2Changed(); break;
        case 3: _t->y2Changed(); break;
        case 4: { bool _r = _t->isMouseInside((*reinterpret_cast< QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZoneLine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneLine::x1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloZoneLine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneLine::y1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloZoneLine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneLine::x2Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloZoneLine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneLine::y2Changed)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneLine *_t = static_cast<CelluloZoneLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getX1(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getY1(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getX2(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getY2(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneLine *_t = static_cast<CelluloZoneLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX1(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY1(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setX2(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setY2(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneLine::staticMetaObject = {
    { &CelluloZone::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneLine.data,
      qt_meta_data_Cellulo__CelluloZoneLine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneLine.stringdata0))
        return static_cast<void*>(this);
    return CelluloZone::qt_metacast(_clname);
}

int Cellulo::CelluloZoneLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZone::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void Cellulo::CelluloZoneLine::x1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloZoneLine::y1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloZoneLine::x2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloZoneLine::y2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneLineSegmentDistance_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneLineSegmentDistance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneLineSegmentDistance_t qt_meta_stringdata_Cellulo__CelluloZoneLineSegmentDistance = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Cellulo::CelluloZoneLineSegme..."
QT_MOC_LITERAL(1, 40, 9), // "calculate"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 6), // "xRobot"
QT_MOC_LITERAL(4, 58, 6), // "yRobot"
QT_MOC_LITERAL(5, 65, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneLineSegmentDistance\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneLineSegmentDistance[] = {

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

void Cellulo::CelluloZoneLineSegmentDistance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneLineSegmentDistance *_t = static_cast<CelluloZoneLineSegmentDistance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneLineSegmentDistance::staticMetaObject = {
    { &CelluloZoneLine::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneLineSegmentDistance.data,
      qt_meta_data_Cellulo__CelluloZoneLineSegmentDistance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneLineSegmentDistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneLineSegmentDistance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneLineSegmentDistance.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneLine::qt_metacast(_clname);
}

int Cellulo::CelluloZoneLineSegmentDistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneLine::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZoneLineDistanceSigned_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneLineDistanceSigned_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneLineDistanceSigned_t qt_meta_stringdata_Cellulo__CelluloZoneLineDistanceSigned = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Cellulo::CelluloZoneLineDista..."
QT_MOC_LITERAL(1, 39, 9), // "calculate"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 6), // "xRobot"
QT_MOC_LITERAL(4, 57, 6), // "yRobot"
QT_MOC_LITERAL(5, 64, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneLineDistanceSigned\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneLineDistanceSigned[] = {

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

void Cellulo::CelluloZoneLineDistanceSigned::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneLineDistanceSigned *_t = static_cast<CelluloZoneLineDistanceSigned *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneLineDistanceSigned::staticMetaObject = {
    { &CelluloZoneLine::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneLineDistanceSigned.data,
      qt_meta_data_Cellulo__CelluloZoneLineDistanceSigned,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneLineDistanceSigned::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneLineDistanceSigned::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneLineDistanceSigned.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneLine::qt_metacast(_clname);
}

int Cellulo::CelluloZoneLineDistanceSigned::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneLine::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZoneLineBorder_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneLineBorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneLineBorder_t qt_meta_stringdata_Cellulo__CelluloZoneLineBorder = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Cellulo::CelluloZoneLineBorder"
QT_MOC_LITERAL(1, 31, 22), // "borderThicknessChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 9), // "calculate"
QT_MOC_LITERAL(4, 65, 6), // "xRobot"
QT_MOC_LITERAL(5, 72, 6), // "yRobot"
QT_MOC_LITERAL(6, 79, 10), // "thetaRobot"
QT_MOC_LITERAL(7, 90, 15) // "borderThickness"

    },
    "Cellulo::CelluloZoneLineBorder\0"
    "borderThicknessChanged\0\0calculate\0"
    "xRobot\0yRobot\0thetaRobot\0borderThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneLineBorder[] = {

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

void Cellulo::CelluloZoneLineBorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneLineBorder *_t = static_cast<CelluloZoneLineBorder *>(_o);
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
            using _t = void (CelluloZoneLineBorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneLineBorder::borderThicknessChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneLineBorder *_t = static_cast<CelluloZoneLineBorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getBorderThickness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneLineBorder *_t = static_cast<CelluloZoneLineBorder *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneLineBorder::staticMetaObject = {
    { &CelluloZoneLine::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneLineBorder.data,
      qt_meta_data_Cellulo__CelluloZoneLineBorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneLineBorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneLineBorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneLineBorder.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneLine::qt_metacast(_clname);
}

int Cellulo::CelluloZoneLineBorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneLine::qt_metacall(_c, _id, _a);
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
void Cellulo::CelluloZoneLineBorder::borderThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
