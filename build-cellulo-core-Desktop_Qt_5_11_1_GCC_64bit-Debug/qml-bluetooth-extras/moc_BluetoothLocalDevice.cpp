/****************************************************************************
** Meta object code from reading C++ file 'BluetoothLocalDevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-bluetooth-extras/src/BluetoothLocalDevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BluetoothLocalDevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDevice_t {
    QByteArrayData data[13];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDevice_t qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDevice = {
    {
QT_MOC_LITERAL(0, 0, 40), // "QMLBluetoothExtras::Bluetooth..."
QT_MOC_LITERAL(1, 41, 15), // "hostModeChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 14), // "addressChanged"
QT_MOC_LITERAL(4, 73, 11), // "nameChanged"
QT_MOC_LITERAL(5, 85, 23), // "connectedDevicesChanged"
QT_MOC_LITERAL(6, 109, 7), // "isValid"
QT_MOC_LITERAL(7, 117, 7), // "powerOn"
QT_MOC_LITERAL(8, 125, 8), // "hostMode"
QT_MOC_LITERAL(9, 134, 56), // "QMLBluetoothExtras::Bluetooth..."
QT_MOC_LITERAL(10, 191, 4), // "name"
QT_MOC_LITERAL(11, 196, 7), // "address"
QT_MOC_LITERAL(12, 204, 16) // "connectedDevices"

    },
    "QMLBluetoothExtras::BluetoothLocalDevice\0"
    "hostModeChanged\0\0addressChanged\0"
    "nameChanged\0connectedDevicesChanged\0"
    "isValid\0powerOn\0hostMode\0"
    "QMLBluetoothExtras::BluetoothLocalDeviceStatic::HostMode\0"
    "name\0address\0connectedDevices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLBluetoothExtras__BluetoothLocalDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00495009,
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,

       0        // eod
};

void QMLBluetoothExtras::BluetoothLocalDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BluetoothLocalDevice *_t = static_cast<BluetoothLocalDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hostModeChanged(); break;
        case 1: _t->addressChanged(); break;
        case 2: _t->nameChanged(); break;
        case 3: _t->connectedDevicesChanged(); break;
        case 4: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->powerOn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothLocalDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothLocalDevice::hostModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothLocalDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothLocalDevice::addressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothLocalDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothLocalDevice::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BluetoothLocalDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothLocalDevice::connectedDevicesChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMLBluetoothExtras::BluetoothLocalDeviceStatic::HostMode >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BluetoothLocalDevice *_t = static_cast<BluetoothLocalDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMLBluetoothExtras::BluetoothLocalDeviceStatic::HostMode*>(_v) = _t->getHostMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getAddress(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->getConnectedDevices(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BluetoothLocalDevice *_t = static_cast<BluetoothLocalDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QMLBluetoothExtras__BluetoothLocalDevice[] = {
        &QMLBluetoothExtras::BluetoothLocalDeviceStatic::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QMLBluetoothExtras::BluetoothLocalDevice::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDevice.data,
      qt_meta_data_QMLBluetoothExtras__BluetoothLocalDevice,  qt_static_metacall, qt_meta_extradata_QMLBluetoothExtras__BluetoothLocalDevice, nullptr}
};


const QMetaObject *QMLBluetoothExtras::BluetoothLocalDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLBluetoothExtras::BluetoothLocalDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDevice.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLBluetoothExtras::BluetoothLocalDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QMLBluetoothExtras::BluetoothLocalDevice::hostModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMLBluetoothExtras::BluetoothLocalDevice::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMLBluetoothExtras::BluetoothLocalDevice::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QMLBluetoothExtras::BluetoothLocalDevice::connectedDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
