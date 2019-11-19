/****************************************************************************
** Meta object code from reading C++ file 'BluetoothSocketExtended.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-bluetooth-extras/src/BluetoothSocketExtended.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BluetoothSocketExtended.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLBluetoothExtras__BluetoothSocketExtended_t {
    QByteArrayData data[19];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLBluetoothExtras__BluetoothSocketExtended_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLBluetoothExtras__BluetoothSocketExtended_t qt_meta_stringdata_QMLBluetoothExtras__BluetoothSocketExtended = {
    {
QT_MOC_LITERAL(0, 0, 43), // "QMLBluetoothExtras::Bluetooth..."
QT_MOC_LITERAL(1, 44, 18), // "peerAddressChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 11), // "uuidChanged"
QT_MOC_LITERAL(4, 76, 9), // "connected"
QT_MOC_LITERAL(5, 86, 12), // "disconnected"
QT_MOC_LITERAL(6, 99, 5), // "error"
QT_MOC_LITERAL(7, 105, 11), // "socketError"
QT_MOC_LITERAL(8, 117, 13), // "bytesReceived"
QT_MOC_LITERAL(9, 131, 10), // "QList<int>"
QT_MOC_LITERAL(10, 142, 5), // "bytes"
QT_MOC_LITERAL(11, 148, 16), // "connectToService"
QT_MOC_LITERAL(12, 165, 21), // "disconnectFromService"
QT_MOC_LITERAL(13, 187, 10), // "writeBytes"
QT_MOC_LITERAL(14, 198, 7), // "publish"
QT_MOC_LITERAL(15, 206, 14), // "emitErrorAsInt"
QT_MOC_LITERAL(16, 221, 29), // "QBluetoothSocket::SocketError"
QT_MOC_LITERAL(17, 251, 11), // "peerAddress"
QT_MOC_LITERAL(18, 263, 4) // "uuid"

    },
    "QMLBluetoothExtras::BluetoothSocketExtended\0"
    "peerAddressChanged\0\0uuidChanged\0"
    "connected\0disconnected\0error\0socketError\0"
    "bytesReceived\0QList<int>\0bytes\0"
    "connectToService\0disconnectFromService\0"
    "writeBytes\0publish\0emitErrorAsInt\0"
    "QBluetoothSocket::SocketError\0peerAddress\0"
    "uuid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLBluetoothExtras__BluetoothSocketExtended[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    1,   81,    2, 0x0a /* Public */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    7,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QMLBluetoothExtras::BluetoothSocketExtended::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BluetoothSocketExtended *_t = static_cast<BluetoothSocketExtended *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->peerAddressChanged(); break;
        case 1: _t->uuidChanged(); break;
        case 2: _t->connected(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->bytesReceived((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 6: _t->connectToService(); break;
        case 7: _t->disconnectFromService(); break;
        case 8: { bool _r = _t->writeBytes((*reinterpret_cast< QList<int>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->publish(); break;
        case 10: _t->emitErrorAsInt((*reinterpret_cast< QBluetoothSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothSocketExtended::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothSocketExtended::peerAddressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothSocketExtended::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothSocketExtended::uuidChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothSocketExtended::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothSocketExtended::connected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BluetoothSocketExtended::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothSocketExtended::disconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BluetoothSocketExtended::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothSocketExtended::error)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BluetoothSocketExtended::*)(QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothSocketExtended::bytesReceived)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BluetoothSocketExtended *_t = static_cast<BluetoothSocketExtended *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPeerAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getUuid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BluetoothSocketExtended *_t = static_cast<BluetoothSocketExtended *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPeerAddress(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUuid(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMLBluetoothExtras::BluetoothSocketExtended::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QMLBluetoothExtras__BluetoothSocketExtended.data,
      qt_meta_data_QMLBluetoothExtras__BluetoothSocketExtended,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMLBluetoothExtras::BluetoothSocketExtended::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLBluetoothExtras::BluetoothSocketExtended::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLBluetoothExtras__BluetoothSocketExtended.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLBluetoothExtras::BluetoothSocketExtended::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QMLBluetoothExtras::BluetoothSocketExtended::peerAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMLBluetoothExtras::BluetoothSocketExtended::uuidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMLBluetoothExtras::BluetoothSocketExtended::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QMLBluetoothExtras::BluetoothSocketExtended::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QMLBluetoothExtras::BluetoothSocketExtended::error(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMLBluetoothExtras::BluetoothSocketExtended::bytesReceived(QList<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
