/****************************************************************************
** Meta object code from reading C++ file 'CelluloZoneRectangle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZoneRectangle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZoneRectangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZoneRectangle_t {
    QByteArrayData data[16];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRectangle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRectangle_t qt_meta_stringdata_Cellulo__CelluloZoneRectangle = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Cellulo::CelluloZoneRectangle"
QT_MOC_LITERAL(1, 30, 8), // "xChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "yChanged"
QT_MOC_LITERAL(4, 49, 13), // "heightChanged"
QT_MOC_LITERAL(5, 63, 12), // "widthChanged"
QT_MOC_LITERAL(6, 76, 13), // "isMouseInside"
QT_MOC_LITERAL(7, 90, 13), // "mousePosition"
QT_MOC_LITERAL(8, 104, 11), // "canvasWidth"
QT_MOC_LITERAL(9, 116, 12), // "canvasHeight"
QT_MOC_LITERAL(10, 129, 13), // "physicalWidth"
QT_MOC_LITERAL(11, 143, 14), // "physicalHeight"
QT_MOC_LITERAL(12, 158, 1), // "x"
QT_MOC_LITERAL(13, 160, 1), // "y"
QT_MOC_LITERAL(14, 162, 6), // "height"
QT_MOC_LITERAL(15, 169, 5) // "width"

    },
    "Cellulo::CelluloZoneRectangle\0xChanged\0"
    "\0yChanged\0heightChanged\0widthChanged\0"
    "isMouseInside\0mousePosition\0canvasWidth\0"
    "canvasHeight\0physicalWidth\0physicalHeight\0"
    "x\0y\0height\0width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRectangle[] = {

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

void Cellulo::CelluloZoneRectangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRectangle *_t = static_cast<CelluloZoneRectangle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: _t->heightChanged(); break;
        case 3: _t->widthChanged(); break;
        case 4: { bool _r = _t->isMouseInside((*reinterpret_cast< QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZoneRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRectangle::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloZoneRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRectangle::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloZoneRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRectangle::heightChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloZoneRectangle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRectangle::widthChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneRectangle *_t = static_cast<CelluloZoneRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getX(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getY(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getHeight(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneRectangle *_t = static_cast<CelluloZoneRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setHeight(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setWidth(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRectangle::staticMetaObject = {
    { &CelluloZone::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRectangle.data,
      qt_meta_data_Cellulo__CelluloZoneRectangle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRectangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRectangle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRectangle.stringdata0))
        return static_cast<void*>(this);
    return CelluloZone::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRectangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Cellulo::CelluloZoneRectangle::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloZoneRectangle::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloZoneRectangle::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloZoneRectangle::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneRectangleInner_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRectangleInner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRectangleInner_t qt_meta_stringdata_Cellulo__CelluloZoneRectangleInner = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Cellulo::CelluloZoneRectangle..."
QT_MOC_LITERAL(1, 35, 9), // "calculate"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "xRobot"
QT_MOC_LITERAL(4, 53, 6), // "yRobot"
QT_MOC_LITERAL(5, 60, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneRectangleInner\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRectangleInner[] = {

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

void Cellulo::CelluloZoneRectangleInner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRectangleInner *_t = static_cast<CelluloZoneRectangleInner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRectangleInner::staticMetaObject = {
    { &CelluloZoneRectangle::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRectangleInner.data,
      qt_meta_data_Cellulo__CelluloZoneRectangleInner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRectangleInner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRectangleInner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRectangleInner.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneRectangle::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRectangleInner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneRectangle::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZoneRectangleBorder_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRectangleBorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRectangleBorder_t qt_meta_stringdata_Cellulo__CelluloZoneRectangleBorder = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Cellulo::CelluloZoneRectangle..."
QT_MOC_LITERAL(1, 36, 22), // "borderThicknessChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 9), // "calculate"
QT_MOC_LITERAL(4, 70, 6), // "xRobot"
QT_MOC_LITERAL(5, 77, 6), // "yRobot"
QT_MOC_LITERAL(6, 84, 10), // "thetaRobot"
QT_MOC_LITERAL(7, 95, 15) // "borderThickness"

    },
    "Cellulo::CelluloZoneRectangleBorder\0"
    "borderThicknessChanged\0\0calculate\0"
    "xRobot\0yRobot\0thetaRobot\0borderThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRectangleBorder[] = {

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

void Cellulo::CelluloZoneRectangleBorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRectangleBorder *_t = static_cast<CelluloZoneRectangleBorder *>(_o);
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
            using _t = void (CelluloZoneRectangleBorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRectangleBorder::borderThicknessChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneRectangleBorder *_t = static_cast<CelluloZoneRectangleBorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getBorderThickness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneRectangleBorder *_t = static_cast<CelluloZoneRectangleBorder *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRectangleBorder::staticMetaObject = {
    { &CelluloZoneRectangle::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRectangleBorder.data,
      qt_meta_data_Cellulo__CelluloZoneRectangleBorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRectangleBorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRectangleBorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRectangleBorder.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneRectangle::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRectangleBorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneRectangle::qt_metacall(_c, _id, _a);
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
void Cellulo::CelluloZoneRectangleBorder::borderThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneRectangleDistance_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRectangleDistance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRectangleDistance_t qt_meta_stringdata_Cellulo__CelluloZoneRectangleDistance = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Cellulo::CelluloZoneRectangle..."
QT_MOC_LITERAL(1, 38, 9), // "calculate"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 6), // "xRobot"
QT_MOC_LITERAL(4, 56, 6), // "yRobot"
QT_MOC_LITERAL(5, 63, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneRectangleDistance\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRectangleDistance[] = {

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

void Cellulo::CelluloZoneRectangleDistance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRectangleDistance *_t = static_cast<CelluloZoneRectangleDistance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRectangleDistance::staticMetaObject = {
    { &CelluloZoneRectangle::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRectangleDistance.data,
      qt_meta_data_Cellulo__CelluloZoneRectangleDistance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRectangleDistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRectangleDistance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRectangleDistance.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneRectangle::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRectangleDistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneRectangle::qt_metacall(_c, _id, _a);
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
