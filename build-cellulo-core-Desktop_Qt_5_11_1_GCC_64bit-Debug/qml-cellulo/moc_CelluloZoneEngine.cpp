/****************************************************************************
** Meta object code from reading C++ file 'CelluloZoneEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/zones/CelluloZoneEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloZoneEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloZoneEngine_t {
    QByteArrayData data[21];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloZoneEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloZoneEngine_t qt_meta_stringdata_Cellulo__CelluloZoneEngine = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Cellulo::CelluloZoneEngine"
QT_MOC_LITERAL(1, 27, 13), // "activeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "getActive"
QT_MOC_LITERAL(4, 52, 9), // "setActive"
QT_MOC_LITERAL(5, 62, 9), // "newActive"
QT_MOC_LITERAL(6, 72, 12), // "addNewClient"
QT_MOC_LITERAL(7, 85, 27), // "Cellulo::CelluloZoneClient*"
QT_MOC_LITERAL(8, 113, 9), // "newClient"
QT_MOC_LITERAL(9, 123, 10), // "addNewZone"
QT_MOC_LITERAL(10, 134, 21), // "Cellulo::CelluloZone*"
QT_MOC_LITERAL(11, 156, 7), // "newZone"
QT_MOC_LITERAL(12, 164, 10), // "clearZones"
QT_MOC_LITERAL(13, 175, 17), // "zoneActiveChanged"
QT_MOC_LITERAL(14, 193, 15), // "getAllZoneNames"
QT_MOC_LITERAL(15, 209, 13), // "getZoneByName"
QT_MOC_LITERAL(16, 223, 4), // "name"
QT_MOC_LITERAL(17, 228, 12), // "getZonesList"
QT_MOC_LITERAL(18, 241, 11), // "addNewZones"
QT_MOC_LITERAL(19, 253, 8), // "newZones"
QT_MOC_LITERAL(20, 262, 6) // "active"

    },
    "Cellulo::CelluloZoneEngine\0activeChanged\0"
    "\0getActive\0setActive\0newActive\0"
    "addNewClient\0Cellulo::CelluloZoneClient*\0"
    "newClient\0addNewZone\0Cellulo::CelluloZone*\0"
    "newZone\0clearZones\0zoneActiveChanged\0"
    "getAllZoneNames\0getZoneByName\0name\0"
    "getZonesList\0addNewZones\0newZones\0"
    "active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloZoneEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    0,   82,    2, 0x02 /* Public */,
      15,    1,   83,    2, 0x02 /* Public */,
      17,    0,   86,    2, 0x02 /* Public */,
      18,    1,   87,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QStringList,
    QMetaType::QObjectStar, QMetaType::QString,   16,
    QMetaType::QVariantList,
    QMetaType::Void, QMetaType::QVariantList,   19,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Cellulo::CelluloZoneEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloZoneEngine *_t = static_cast<CelluloZoneEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeChanged(); break;
        case 1: { bool _r = _t->getActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->addNewClient((*reinterpret_cast< Cellulo::CelluloZoneClient*(*)>(_a[1]))); break;
        case 4: _t->addNewZone((*reinterpret_cast< Cellulo::CelluloZone*(*)>(_a[1]))); break;
        case 5: _t->clearZones(); break;
        case 6: _t->zoneActiveChanged(); break;
        case 7: { QStringList _r = _t->getAllZoneNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: { QObject* _r = _t->getZoneByName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariantList _r = _t->getZonesList();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->addNewZones((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloZoneClient* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloZone* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloZoneEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloZoneEngine::activeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloZoneEngine *_t = static_cast<CelluloZoneEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloZoneEngine *_t = static_cast<CelluloZoneEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloZoneEngine::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloZoneEngine.data,
      qt_meta_data_Cellulo__CelluloZoneEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloZoneEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloZoneEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloZoneEngine.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloZoneEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
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
void Cellulo::CelluloZoneEngine::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
