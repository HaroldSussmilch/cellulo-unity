/****************************************************************************
** Meta object code from reading C++ file 'CelluloZone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZone_t {
    QByteArrayData data[33];
    char stringdata0[430];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZone_t qt_meta_stringdata_Cellulo__CelluloZone = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Cellulo::CelluloZone"
QT_MOC_LITERAL(1, 21, 13), // "activeChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "nameChanged"
QT_MOC_LITERAL(4, 48, 11), // "typeChanged"
QT_MOC_LITERAL(5, 60, 19), // "onClientPoseChanged"
QT_MOC_LITERAL(6, 80, 1), // "x"
QT_MOC_LITERAL(7, 82, 1), // "y"
QT_MOC_LITERAL(8, 84, 5), // "theta"
QT_MOC_LITERAL(9, 90, 9), // "calculate"
QT_MOC_LITERAL(10, 100, 6), // "xRobot"
QT_MOC_LITERAL(11, 107, 6), // "yRobot"
QT_MOC_LITERAL(12, 114, 10), // "thetaRobot"
QT_MOC_LITERAL(13, 125, 13), // "isMouseInside"
QT_MOC_LITERAL(14, 139, 13), // "mousePosition"
QT_MOC_LITERAL(15, 153, 11), // "canvasWidth"
QT_MOC_LITERAL(16, 165, 12), // "canvasHeight"
QT_MOC_LITERAL(17, 178, 13), // "physicalWidth"
QT_MOC_LITERAL(18, 192, 14), // "physicalHeight"
QT_MOC_LITERAL(19, 207, 17), // "createPaintedItem"
QT_MOC_LITERAL(20, 225, 32), // "Cellulo::CelluloZonePaintedItem*"
QT_MOC_LITERAL(21, 258, 11), // "QQuickItem*"
QT_MOC_LITERAL(22, 270, 6), // "parent"
QT_MOC_LITERAL(23, 277, 5), // "color"
QT_MOC_LITERAL(24, 283, 23), // "physicalPlaygroundWidth"
QT_MOC_LITERAL(25, 307, 24), // "physicalPlaygroundHeight"
QT_MOC_LITERAL(26, 332, 14), // "setPaintedItem"
QT_MOC_LITERAL(27, 347, 14), // "newPaintedItem"
QT_MOC_LITERAL(28, 362, 14), // "getPaintedItem"
QT_MOC_LITERAL(29, 377, 6), // "active"
QT_MOC_LITERAL(30, 384, 4), // "name"
QT_MOC_LITERAL(31, 389, 4), // "type"
QT_MOC_LITERAL(32, 394, 35) // "Cellulo::CelluloZoneTypes::Zo..."

    },
    "Cellulo::CelluloZone\0activeChanged\0\0"
    "nameChanged\0typeChanged\0onClientPoseChanged\0"
    "x\0y\0theta\0calculate\0xRobot\0yRobot\0"
    "thetaRobot\0isMouseInside\0mousePosition\0"
    "canvasWidth\0canvasHeight\0physicalWidth\0"
    "physicalHeight\0createPaintedItem\0"
    "Cellulo::CelluloZonePaintedItem*\0"
    "QQuickItem*\0parent\0color\0"
    "physicalPlaygroundWidth\0"
    "physicalPlaygroundHeight\0setPaintedItem\0"
    "newPaintedItem\0getPaintedItem\0active\0"
    "name\0type\0Cellulo::CelluloZoneTypes::ZoneType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   62,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    3,   69,    2, 0x02 /* Public */,
      13,    5,   76,    2, 0x02 /* Public */,
      19,    4,   87,    2, 0x02 /* Public */,
      26,    1,   96,    2, 0x02 /* Public */,
      28,    0,   99,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    6,    7,    8,

 // methods: parameters
    QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   10,   11,   12,
    QMetaType::Bool, QMetaType::QVector2D, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   14,   15,   16,   17,   18,
    0x80000000 | 20, 0x80000000 | 21, QMetaType::QColor, QMetaType::QReal, QMetaType::QReal,   22,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 20,   27,
    0x80000000 | 20,

 // properties: name, type, flags
      29, QMetaType::Bool, 0x00495103,
      30, QMetaType::QString, 0x00495103,
      31, 0x80000000 | 32, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Cellulo::CelluloZone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZone *_t = static_cast<CelluloZone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->typeChanged(); break;
        case 3: _t->onClientPoseChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 4: { float _r = _t->calculate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->isMouseInside((*reinterpret_cast< QVector2D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { Cellulo::CelluloZonePaintedItem* _r = _t->createPaintedItem((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< Cellulo::CelluloZonePaintedItem**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setPaintedItem((*reinterpret_cast< Cellulo::CelluloZonePaintedItem*(*)>(_a[1]))); break;
        case 8: { Cellulo::CelluloZonePaintedItem* _r = _t->getPaintedItem();
            if (_a[0]) *reinterpret_cast< Cellulo::CelluloZonePaintedItem**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloZonePaintedItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZone::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZone::activeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloZone::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZone::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloZone::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZone::typeChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloZoneTypes::ZoneType >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZone *_t = static_cast<CelluloZone *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast< Cellulo::CelluloZoneTypes::ZoneType*>(_v) = _t->getType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZone *_t = static_cast<CelluloZone *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Cellulo__CelluloZone[] = {
        &Cellulo::CelluloZoneTypes::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZone::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZone.data,
      qt_meta_data_Cellulo__CelluloZone,  qt_static_metacall, qt_meta_extradata_Cellulo__CelluloZone, nullptr}
};


const QMetaObject *Cellulo::CelluloZone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZone.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloZone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
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
void Cellulo::CelluloZone::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloZone::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloZone::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
