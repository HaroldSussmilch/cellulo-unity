/****************************************************************************
** Meta object code from reading C++ file 'CelluloRelayServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/comm/relay/CelluloRelayServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloRelayServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloRelayServer_t {
    QByteArrayData data[22];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloRelayServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloRelayServer_t qt_meta_stringdata_Cellulo__CelluloRelayServer = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Cellulo::CelluloRelayServer"
QT_MOC_LITERAL(1, 28, 14), // "addressChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "portChanged"
QT_MOC_LITERAL(4, 56, 15), // "clientConnected"
QT_MOC_LITERAL(5, 72, 18), // "clientDisconnected"
QT_MOC_LITERAL(6, 91, 10), // "robotAdded"
QT_MOC_LITERAL(7, 102, 7), // "macAddr"
QT_MOC_LITERAL(8, 110, 12), // "robotRemoved"
QT_MOC_LITERAL(9, 123, 11), // "isListening"
QT_MOC_LITERAL(10, 135, 12), // "setListening"
QT_MOC_LITERAL(11, 148, 6), // "enable"
QT_MOC_LITERAL(12, 155, 8), // "addRobot"
QT_MOC_LITERAL(13, 164, 26), // "Cellulo::CelluloBluetooth*"
QT_MOC_LITERAL(14, 191, 5), // "robot"
QT_MOC_LITERAL(15, 197, 11), // "removeRobot"
QT_MOC_LITERAL(16, 209, 16), // "disconnectClient"
QT_MOC_LITERAL(17, 226, 9), // "addClient"
QT_MOC_LITERAL(18, 236, 12), // "deleteClient"
QT_MOC_LITERAL(19, 249, 18), // "incomingClientData"
QT_MOC_LITERAL(20, 268, 7), // "address"
QT_MOC_LITERAL(21, 276, 4) // "port"

    },
    "Cellulo::CelluloRelayServer\0addressChanged\0"
    "\0portChanged\0clientConnected\0"
    "clientDisconnected\0robotAdded\0macAddr\0"
    "robotRemoved\0isListening\0setListening\0"
    "enable\0addRobot\0Cellulo::CelluloBluetooth*\0"
    "robot\0removeRobot\0disconnectClient\0"
    "addClient\0deleteClient\0incomingClientData\0"
    "address\0port"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloRelayServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       2,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    1,   88,    2, 0x06 /* Public */,
       8,    1,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   94,    2, 0x0a /* Public */,
      10,    1,   95,    2, 0x0a /* Public */,
      12,    1,   98,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Cellulo::CelluloRelayServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloRelayServer *_t = static_cast<CelluloRelayServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressChanged(); break;
        case 1: _t->portChanged(); break;
        case 2: _t->clientConnected(); break;
        case 3: _t->clientDisconnected(); break;
        case 4: _t->robotAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->robotRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->isListening();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setListening((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->addRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 9: _t->removeRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 10: _t->disconnectClient(); break;
        case 11: _t->addClient(); break;
        case 12: _t->deleteClient(); break;
        case 13: _t->incomingClientData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        case 9:
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
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::addressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::portChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::clientConnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::clientDisconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::robotAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::robotRemoved)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloRelayServer *_t = static_cast<CelluloRelayServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getAddress(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloRelayServer *_t = static_cast<CelluloRelayServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloRelayServer::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloRelayServer.data,
      qt_meta_data_Cellulo__CelluloRelayServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloRelayServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloRelayServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloRelayServer.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloRelayServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
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
void Cellulo::CelluloRelayServer::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloRelayServer::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloRelayServer::clientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloRelayServer::clientDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cellulo::CelluloRelayServer::robotAdded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Cellulo::CelluloRelayServer::robotRemoved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
