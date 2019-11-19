/****************************************************************************
** Meta object code from reading C++ file 'CelluloBluetoothScanner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/comm/CelluloBluetoothScanner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloBluetoothScanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloBluetoothScanner_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloBluetoothScanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloBluetoothScanner_t qt_meta_stringdata_Cellulo__CelluloBluetoothScanner = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Cellulo::CelluloBluetoothScanner"
QT_MOC_LITERAL(1, 33, 15), // "robotDiscovered"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 7), // "macAddr"
QT_MOC_LITERAL(4, 58, 8), // "finished"
QT_MOC_LITERAL(5, 67, 15), // "scanningChanged"
QT_MOC_LITERAL(6, 83, 18), // "foundRobotsChanged"
QT_MOC_LITERAL(7, 102, 5), // "start"
QT_MOC_LITERAL(8, 108, 4), // "stop"
QT_MOC_LITERAL(9, 113, 5), // "clear"
QT_MOC_LITERAL(10, 119, 18), // "onDeviceDiscovered"
QT_MOC_LITERAL(11, 138, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(12, 159, 4), // "info"
QT_MOC_LITERAL(13, 164, 13), // "decideRestart"
QT_MOC_LITERAL(14, 178, 10), // "continuous"
QT_MOC_LITERAL(15, 189, 8), // "scanning"
QT_MOC_LITERAL(16, 198, 11) // "foundRobots"

    },
    "Cellulo::CelluloBluetoothScanner\0"
    "robotDiscovered\0\0macAddr\0finished\0"
    "scanningChanged\0foundRobotsChanged\0"
    "start\0stop\0clear\0onDeviceDiscovered\0"
    "QBluetoothDeviceInfo\0info\0decideRestart\0"
    "continuous\0scanning\0foundRobots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloBluetoothScanner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00095003,
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       3,

       0        // eod
};

void Cellulo::CelluloBluetoothScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloBluetoothScanner *_t = static_cast<CelluloBluetoothScanner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->robotDiscovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->scanningChanged(); break;
        case 3: _t->foundRobotsChanged(); break;
        case 4: _t->start(); break;
        case 5: _t->stop(); break;
        case 6: _t->clear(); break;
        case 7: _t->onDeviceDiscovered((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 8: _t->decideRestart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloBluetoothScanner::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetoothScanner::robotDiscovered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloBluetoothScanner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetoothScanner::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloBluetoothScanner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetoothScanner::scanningChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloBluetoothScanner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetoothScanner::foundRobotsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloBluetoothScanner *_t = static_cast<CelluloBluetoothScanner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->continuous; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isScanning(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->getFoundRobots(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloBluetoothScanner *_t = static_cast<CelluloBluetoothScanner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->continuous != *reinterpret_cast< bool*>(_v)) {
                _t->continuous = *reinterpret_cast< bool*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloBluetoothScanner::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloBluetoothScanner.data,
      qt_meta_data_Cellulo__CelluloBluetoothScanner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloBluetoothScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloBluetoothScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloBluetoothScanner.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloBluetoothScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Cellulo::CelluloBluetoothScanner::robotDiscovered(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cellulo::CelluloBluetoothScanner::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloBluetoothScanner::scanningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloBluetoothScanner::foundRobotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
