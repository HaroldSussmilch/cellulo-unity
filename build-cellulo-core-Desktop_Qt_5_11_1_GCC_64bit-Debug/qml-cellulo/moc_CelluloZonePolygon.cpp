/****************************************************************************
** Meta object code from reading C++ file 'CelluloZonePolygon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZonePolygon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZonePolygon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZonePolygon_t {
    QByteArrayData data[12];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZonePolygon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZonePolygon_t qt_meta_stringdata_Cellulo__CelluloZonePolygon = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Cellulo::CelluloZonePolygon"
QT_MOC_LITERAL(1, 28, 15), // "verticesChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "setVerticesAsVariants"
QT_MOC_LITERAL(4, 67, 21), // "newVerticesAsVariants"
QT_MOC_LITERAL(5, 89, 13), // "isMouseInside"
QT_MOC_LITERAL(6, 103, 13), // "mousePosition"
QT_MOC_LITERAL(7, 117, 11), // "canvasWidth"
QT_MOC_LITERAL(8, 129, 12), // "canvasHeight"
QT_MOC_LITERAL(9, 142, 13), // "physicalWidth"
QT_MOC_LITERAL(10, 156, 14), // "physicalHeight"
QT_MOC_LITERAL(11, 171, 8) // "vertices"

    },
    "Cellulo::CelluloZonePolygon\0verticesChanged\0"
    "\0setVerticesAsVariants\0newVerticesAsVariants\0"
    "isMouseInside\0mousePosition\0canvasWidth\0"
    "canvasHeight\0physicalWidth\0physicalHeight\0"
    "vertices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZonePolygon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x02 /* Public */,
       5,    5,   33,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantList,    4,
    QMetaType::Bool, QMetaType::QVector2D, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    6,    7,    8,    9,   10,

 // properties: name, type, flags
      11, QMetaType::QVariantList, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Cellulo::CelluloZonePolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZonePolygon *_t = static_cast<CelluloZonePolygon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->verticesChanged(); break;
        case 1: _t->setVerticesAsVariants((*reinterpret_cast< QList<QVariant>(*)>(_a[1]))); break;
        case 2: { bool _r = _t->isMouseInside((*reinterpret_cast< QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZonePolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZonePolygon::verticesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZonePolygon *_t = static_cast<CelluloZonePolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = _t->getVerticesAsVariants(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZonePolygon *_t = static_cast<CelluloZonePolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVerticesAsVariants(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZonePolygon::staticMetaObject = {
    { &CelluloZone::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZonePolygon.data,
      qt_meta_data_Cellulo__CelluloZonePolygon,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZonePolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZonePolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZonePolygon.stringdata0))
        return static_cast<void*>(this);
    return CelluloZone::qt_metacast(_clname);
}

int Cellulo::CelluloZonePolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Cellulo::CelluloZonePolygon::verticesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygon_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygon_t qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygon = {
    {
QT_MOC_LITERAL(0, 0, 36) // "Cellulo::CelluloZoneIrregular..."

    },
    "Cellulo::CelluloZoneIrregularPolygon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneIrregularPolygon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Cellulo::CelluloZoneIrregularPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneIrregularPolygon::staticMetaObject = {
    { &CelluloZonePolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygon.data,
      qt_meta_data_Cellulo__CelluloZoneIrregularPolygon,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneIrregularPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneIrregularPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygon.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneIrregularPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolygon::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonInner_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonInner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonInner_t qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonInner = {
    {
QT_MOC_LITERAL(0, 0, 41), // "Cellulo::CelluloZoneIrregular..."
QT_MOC_LITERAL(1, 42, 9), // "calculate"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 6), // "xRobot"
QT_MOC_LITERAL(4, 60, 6), // "yRobot"
QT_MOC_LITERAL(5, 67, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneIrregularPolygonInner\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneIrregularPolygonInner[] = {

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

void Cellulo::CelluloZoneIrregularPolygonInner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneIrregularPolygonInner *_t = static_cast<CelluloZoneIrregularPolygonInner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneIrregularPolygonInner::staticMetaObject = {
    { &CelluloZoneIrregularPolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonInner.data,
      qt_meta_data_Cellulo__CelluloZoneIrregularPolygonInner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneIrregularPolygonInner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneIrregularPolygonInner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonInner.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneIrregularPolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneIrregularPolygonInner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneIrregularPolygon::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonBorder_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonBorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonBorder_t qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonBorder = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Cellulo::CelluloZoneIrregular..."
QT_MOC_LITERAL(1, 43, 22), // "borderThicknessChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 9), // "calculate"
QT_MOC_LITERAL(4, 77, 6), // "xRobot"
QT_MOC_LITERAL(5, 84, 6), // "yRobot"
QT_MOC_LITERAL(6, 91, 10), // "thetaRobot"
QT_MOC_LITERAL(7, 102, 15) // "borderThickness"

    },
    "Cellulo::CelluloZoneIrregularPolygonBorder\0"
    "borderThicknessChanged\0\0calculate\0"
    "xRobot\0yRobot\0thetaRobot\0borderThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneIrregularPolygonBorder[] = {

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

void Cellulo::CelluloZoneIrregularPolygonBorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneIrregularPolygonBorder *_t = static_cast<CelluloZoneIrregularPolygonBorder *>(_o);
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
            using _t = void (CelluloZoneIrregularPolygonBorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneIrregularPolygonBorder::borderThicknessChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneIrregularPolygonBorder *_t = static_cast<CelluloZoneIrregularPolygonBorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getBorderThickness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneIrregularPolygonBorder *_t = static_cast<CelluloZoneIrregularPolygonBorder *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneIrregularPolygonBorder::staticMetaObject = {
    { &CelluloZoneIrregularPolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonBorder.data,
      qt_meta_data_Cellulo__CelluloZoneIrregularPolygonBorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneIrregularPolygonBorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneIrregularPolygonBorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonBorder.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneIrregularPolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneIrregularPolygonBorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneIrregularPolygon::qt_metacall(_c, _id, _a);
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
void Cellulo::CelluloZoneIrregularPolygonBorder::borderThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonDistance_t {
    QByteArrayData data[6];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonDistance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonDistance_t qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonDistance = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Cellulo::CelluloZoneIrregular..."
QT_MOC_LITERAL(1, 45, 9), // "calculate"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 6), // "xRobot"
QT_MOC_LITERAL(4, 63, 6), // "yRobot"
QT_MOC_LITERAL(5, 70, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneIrregularPolygonDistance\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneIrregularPolygonDistance[] = {

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

void Cellulo::CelluloZoneIrregularPolygonDistance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneIrregularPolygonDistance *_t = static_cast<CelluloZoneIrregularPolygonDistance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneIrregularPolygonDistance::staticMetaObject = {
    { &CelluloZoneIrregularPolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonDistance.data,
      qt_meta_data_Cellulo__CelluloZoneIrregularPolygonDistance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneIrregularPolygonDistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneIrregularPolygonDistance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneIrregularPolygonDistance.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneIrregularPolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneIrregularPolygonDistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneIrregularPolygon::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygon_t {
    QByteArrayData data[12];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygon_t qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygon = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Cellulo::CelluloZoneRegularPo..."
QT_MOC_LITERAL(1, 35, 15), // "numEdgesChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 8), // "xChanged"
QT_MOC_LITERAL(4, 61, 8), // "yChanged"
QT_MOC_LITERAL(5, 70, 8), // "rChanged"
QT_MOC_LITERAL(6, 79, 15), // "rotAngleChanged"
QT_MOC_LITERAL(7, 95, 8), // "numEdges"
QT_MOC_LITERAL(8, 104, 1), // "x"
QT_MOC_LITERAL(9, 106, 1), // "y"
QT_MOC_LITERAL(10, 108, 1), // "r"
QT_MOC_LITERAL(11, 110, 8) // "rotAngle"

    },
    "Cellulo::CelluloZoneRegularPolygon\0"
    "numEdgesChanged\0\0xChanged\0yChanged\0"
    "rChanged\0rotAngleChanged\0numEdges\0x\0"
    "y\0r\0rotAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRegularPolygon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Cellulo::CelluloZoneRegularPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRegularPolygon *_t = static_cast<CelluloZoneRegularPolygon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numEdgesChanged(); break;
        case 1: _t->xChanged(); break;
        case 2: _t->yChanged(); break;
        case 3: _t->rChanged(); break;
        case 4: _t->rotAngleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZoneRegularPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRegularPolygon::numEdgesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloZoneRegularPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRegularPolygon::xChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloZoneRegularPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRegularPolygon::yChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloZoneRegularPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRegularPolygon::rChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CelluloZoneRegularPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRegularPolygon::rotAngleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneRegularPolygon *_t = static_cast<CelluloZoneRegularPolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumEdges(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getX(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getY(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getR(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getRotAngle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneRegularPolygon *_t = static_cast<CelluloZoneRegularPolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumEdges(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setY(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setR(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setRotAngle(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRegularPolygon::staticMetaObject = {
    { &CelluloZonePolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygon.data,
      qt_meta_data_Cellulo__CelluloZoneRegularPolygon,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRegularPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRegularPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygon.stringdata0))
        return static_cast<void*>(this);
    return CelluloZonePolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRegularPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZonePolygon::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::CelluloZoneRegularPolygon::numEdgesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloZoneRegularPolygon::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloZoneRegularPolygon::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloZoneRegularPolygon::rChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cellulo::CelluloZoneRegularPolygon::rotAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonInner_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonInner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonInner_t qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonInner = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Cellulo::CelluloZoneRegularPo..."
QT_MOC_LITERAL(1, 40, 9), // "calculate"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 6), // "xRobot"
QT_MOC_LITERAL(4, 58, 6), // "yRobot"
QT_MOC_LITERAL(5, 65, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneRegularPolygonInner\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRegularPolygonInner[] = {

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

void Cellulo::CelluloZoneRegularPolygonInner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRegularPolygonInner *_t = static_cast<CelluloZoneRegularPolygonInner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRegularPolygonInner::staticMetaObject = {
    { &CelluloZoneRegularPolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonInner.data,
      qt_meta_data_Cellulo__CelluloZoneRegularPolygonInner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRegularPolygonInner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRegularPolygonInner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonInner.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneRegularPolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRegularPolygonInner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneRegularPolygon::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonBorder_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonBorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonBorder_t qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonBorder = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Cellulo::CelluloZoneRegularPo..."
QT_MOC_LITERAL(1, 41, 22), // "borderThicknessChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 9), // "calculate"
QT_MOC_LITERAL(4, 75, 6), // "xRobot"
QT_MOC_LITERAL(5, 82, 6), // "yRobot"
QT_MOC_LITERAL(6, 89, 10), // "thetaRobot"
QT_MOC_LITERAL(7, 100, 15) // "borderThickness"

    },
    "Cellulo::CelluloZoneRegularPolygonBorder\0"
    "borderThicknessChanged\0\0calculate\0"
    "xRobot\0yRobot\0thetaRobot\0borderThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRegularPolygonBorder[] = {

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

void Cellulo::CelluloZoneRegularPolygonBorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRegularPolygonBorder *_t = static_cast<CelluloZoneRegularPolygonBorder *>(_o);
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
            using _t = void (CelluloZoneRegularPolygonBorder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneRegularPolygonBorder::borderThicknessChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneRegularPolygonBorder *_t = static_cast<CelluloZoneRegularPolygonBorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getBorderThickness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneRegularPolygonBorder *_t = static_cast<CelluloZoneRegularPolygonBorder *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRegularPolygonBorder::staticMetaObject = {
    { &CelluloZoneRegularPolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonBorder.data,
      qt_meta_data_Cellulo__CelluloZoneRegularPolygonBorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRegularPolygonBorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRegularPolygonBorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonBorder.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneRegularPolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRegularPolygonBorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneRegularPolygon::qt_metacall(_c, _id, _a);
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
void Cellulo::CelluloZoneRegularPolygonBorder::borderThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonDistance_t {
    QByteArrayData data[6];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonDistance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonDistance_t qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonDistance = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Cellulo::CelluloZoneRegularPo..."
QT_MOC_LITERAL(1, 43, 9), // "calculate"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 6), // "xRobot"
QT_MOC_LITERAL(4, 61, 6), // "yRobot"
QT_MOC_LITERAL(5, 68, 10) // "thetaRobot"

    },
    "Cellulo::CelluloZoneRegularPolygonDistance\0"
    "calculate\0\0xRobot\0yRobot\0thetaRobot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneRegularPolygonDistance[] = {

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

void Cellulo::CelluloZoneRegularPolygonDistance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneRegularPolygonDistance *_t = static_cast<CelluloZoneRegularPolygonDistance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneRegularPolygonDistance::staticMetaObject = {
    { &CelluloZoneRegularPolygon::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonDistance.data,
      qt_meta_data_Cellulo__CelluloZoneRegularPolygonDistance,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneRegularPolygonDistance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneRegularPolygonDistance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneRegularPolygonDistance.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneRegularPolygon::qt_metacast(_clname);
}

int Cellulo::CelluloZoneRegularPolygonDistance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneRegularPolygon::qt_metacall(_c, _id, _a);
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
