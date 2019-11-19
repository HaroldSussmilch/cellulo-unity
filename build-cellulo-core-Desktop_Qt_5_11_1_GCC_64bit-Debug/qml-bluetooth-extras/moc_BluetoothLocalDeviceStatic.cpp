/****************************************************************************
** Meta object code from reading C++ file 'BluetoothLocalDeviceStatic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-bluetooth-extras/src/BluetoothLocalDeviceStatic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BluetoothLocalDeviceStatic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDeviceStatic_t {
    QByteArrayData data[8];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDeviceStatic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDeviceStatic_t qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDeviceStatic = {
    {
QT_MOC_LITERAL(0, 0, 46), // "QMLBluetoothExtras::Bluetooth..."
QT_MOC_LITERAL(1, 47, 10), // "allDevices"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 8), // "HostMode"
QT_MOC_LITERAL(4, 68, 18), // "HostModePoweredOff"
QT_MOC_LITERAL(5, 87, 19), // "HostModeConnectable"
QT_MOC_LITERAL(6, 107, 20), // "HostModeDiscoverable"
QT_MOC_LITERAL(7, 128, 34) // "HostModeDiscoverableLimitedIn..."

    },
    "QMLBluetoothExtras::BluetoothLocalDeviceStatic\0"
    "allDevices\0\0HostMode\0HostModePoweredOff\0"
    "HostModeConnectable\0HostModeDiscoverable\0"
    "HostModeDiscoverableLimitedInquiry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLBluetoothExtras__BluetoothLocalDeviceStatic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QStringList,

 // enums: name, flags, count, data
       3, 0x0,    4,   24,

 // enum data: key, value
       4, uint(QMLBluetoothExtras::BluetoothLocalDeviceStatic::HostModePoweredOff),
       5, uint(QMLBluetoothExtras::BluetoothLocalDeviceStatic::HostModeConnectable),
       6, uint(QMLBluetoothExtras::BluetoothLocalDeviceStatic::HostModeDiscoverable),
       7, uint(QMLBluetoothExtras::BluetoothLocalDeviceStatic::HostModeDiscoverableLimitedInquiry),

       0        // eod
};

void QMLBluetoothExtras::BluetoothLocalDeviceStatic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BluetoothLocalDeviceStatic *_t = static_cast<BluetoothLocalDeviceStatic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->allDevices();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QMLBluetoothExtras::BluetoothLocalDeviceStatic::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDeviceStatic.data,
      qt_meta_data_QMLBluetoothExtras__BluetoothLocalDeviceStatic,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMLBluetoothExtras::BluetoothLocalDeviceStatic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLBluetoothExtras::BluetoothLocalDeviceStatic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLBluetoothExtras__BluetoothLocalDeviceStatic.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMLBluetoothExtras::BluetoothLocalDeviceStatic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
