/****************************************************************************
** Meta object code from reading C++ file 'BluetoothServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-bluetooth-extras/src/BluetoothServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BluetoothServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLBluetoothExtras__BluetoothServer_t {
    QByteArrayData data[12];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLBluetoothExtras__BluetoothServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLBluetoothExtras__BluetoothServer_t qt_meta_stringdata_QMLBluetoothExtras__BluetoothServer = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QMLBluetoothExtras::Bluetooth..."
QT_MOC_LITERAL(1, 36, 16), // "listeningChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "uuidChanged"
QT_MOC_LITERAL(4, 66, 11), // "nameChanged"
QT_MOC_LITERAL(5, 78, 13), // "newConnection"
QT_MOC_LITERAL(6, 92, 44), // "QMLBluetoothExtras::Bluetooth..."
QT_MOC_LITERAL(7, 137, 6), // "socket"
QT_MOC_LITERAL(8, 144, 18), // "publishConnections"
QT_MOC_LITERAL(9, 163, 6), // "listen"
QT_MOC_LITERAL(10, 170, 4), // "uuid"
QT_MOC_LITERAL(11, 175, 4) // "name"

    },
    "QMLBluetoothExtras::BluetoothServer\0"
    "listeningChanged\0\0uuidChanged\0nameChanged\0"
    "newConnection\0"
    "QMLBluetoothExtras::BluetoothSocketExtended*\0"
    "socket\0publishConnections\0listen\0uuid\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLBluetoothExtras__BluetoothServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495003,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QMLBluetoothExtras::BluetoothServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BluetoothServer *_t = static_cast<BluetoothServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listeningChanged(); break;
        case 1: _t->uuidChanged(); break;
        case 2: _t->nameChanged(); break;
        case 3: _t->newConnection((*reinterpret_cast< QMLBluetoothExtras::BluetoothSocketExtended*(*)>(_a[1]))); break;
        case 4: _t->publishConnections(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMLBluetoothExtras::BluetoothSocketExtended* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothServer::listeningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothServer::uuidChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothServer::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BluetoothServer::*)(QMLBluetoothExtras::BluetoothSocketExtended * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothServer::newConnection)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BluetoothServer *_t = static_cast<BluetoothServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isListening(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getUuid(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BluetoothServer *_t = static_cast<BluetoothServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setListening(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUuid(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMLBluetoothExtras::BluetoothServer::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QMLBluetoothExtras__BluetoothServer.data,
      qt_meta_data_QMLBluetoothExtras__BluetoothServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMLBluetoothExtras::BluetoothServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLBluetoothExtras::BluetoothServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLBluetoothExtras__BluetoothServer.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLBluetoothExtras::BluetoothServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void QMLBluetoothExtras::BluetoothServer::listeningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMLBluetoothExtras::BluetoothServer::uuidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMLBluetoothExtras::BluetoothServer::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QMLBluetoothExtras::BluetoothServer::newConnection(QMLBluetoothExtras::BluetoothSocketExtended * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
