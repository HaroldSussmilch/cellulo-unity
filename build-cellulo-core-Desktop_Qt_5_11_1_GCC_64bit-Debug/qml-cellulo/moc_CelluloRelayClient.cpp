/****************************************************************************
** Meta object code from reading C++ file 'CelluloRelayClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/comm/relay/CelluloRelayClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloRelayClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloRelayClient_t {
    QByteArrayData data[24];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloRelayClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloRelayClient_t qt_meta_stringdata_Cellulo__CelluloRelayClient = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Cellulo::CelluloRelayClient"
QT_MOC_LITERAL(1, 28, 16), // "connectedChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 18), // "autoConnectChanged"
QT_MOC_LITERAL(4, 65, 20), // "serverAddressChanged"
QT_MOC_LITERAL(5, 86, 11), // "portChanged"
QT_MOC_LITERAL(6, 98, 13), // "robotsChanged"
QT_MOC_LITERAL(7, 112, 9), // "connected"
QT_MOC_LITERAL(8, 122, 12), // "disconnected"
QT_MOC_LITERAL(9, 135, 20), // "unknownRobotAtServer"
QT_MOC_LITERAL(10, 156, 7), // "macAddr"
QT_MOC_LITERAL(11, 164, 15), // "connectToServer"
QT_MOC_LITERAL(12, 180, 20), // "disconnectFromServer"
QT_MOC_LITERAL(13, 201, 8), // "addRobot"
QT_MOC_LITERAL(14, 210, 26), // "Cellulo::CelluloBluetooth*"
QT_MOC_LITERAL(15, 237, 5), // "robot"
QT_MOC_LITERAL(16, 243, 6), // "select"
QT_MOC_LITERAL(17, 250, 11), // "removeRobot"
QT_MOC_LITERAL(18, 262, 18), // "incomingServerData"
QT_MOC_LITERAL(19, 281, 15), // "decideReconnect"
QT_MOC_LITERAL(20, 297, 13), // "serverAddress"
QT_MOC_LITERAL(21, 311, 4), // "port"
QT_MOC_LITERAL(22, 316, 11), // "autoConnect"
QT_MOC_LITERAL(23, 328, 6) // "robots"

    },
    "Cellulo::CelluloRelayClient\0"
    "connectedChanged\0\0autoConnectChanged\0"
    "serverAddressChanged\0portChanged\0"
    "robotsChanged\0connected\0disconnected\0"
    "unknownRobotAtServer\0macAddr\0"
    "connectToServer\0disconnectFromServer\0"
    "addRobot\0Cellulo::CelluloBluetooth*\0"
    "robot\0select\0removeRobot\0incomingServerData\0"
    "decideReconnect\0serverAddress\0port\0"
    "autoConnect\0robots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloRelayClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       5,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    2,  101,    2, 0x0a /* Public */,
      13,    1,  106,    2, 0x2a /* Public | MethodCloned */,
      17,    1,  109,    2, 0x0a /* Public */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   16,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::Int, 0x00495103,
      23, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       3,
       1,
       4,

       0        // eod
};

void Cellulo::CelluloRelayClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloRelayClient *_t = static_cast<CelluloRelayClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectedChanged(); break;
        case 1: _t->autoConnectChanged(); break;
        case 2: _t->serverAddressChanged(); break;
        case 3: _t->portChanged(); break;
        case 4: _t->robotsChanged(); break;
        case 5: _t->connected(); break;
        case 6: _t->disconnected(); break;
        case 7: _t->unknownRobotAtServer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->connectToServer(); break;
        case 9: _t->disconnectFromServer(); break;
        case 10: _t->addRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->addRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 12: _t->removeRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 13: _t->incomingServerData(); break;
        case 14: _t->decideReconnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        case 12:
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
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::connectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::autoConnectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::serverAddressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::portChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::robotsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::connected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::disconnected)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::unknownRobotAtServer)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloRelayClient *_t = static_cast<CelluloRelayClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getServerAddress(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getPort(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getAutoConnect(); break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->getRobots(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloRelayClient *_t = static_cast<CelluloRelayClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setServerAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAutoConnect(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloRelayClient::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloRelayClient.data,
      qt_meta_data_Cellulo__CelluloRelayClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloRelayClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloRelayClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloRelayClient.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloRelayClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
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
void Cellulo::CelluloRelayClient::connectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloRelayClient::autoConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloRelayClient::serverAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloRelayClient::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cellulo::CelluloRelayClient::robotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Cellulo::CelluloRelayClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Cellulo::CelluloRelayClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Cellulo::CelluloRelayClient::unknownRobotAtServer(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
