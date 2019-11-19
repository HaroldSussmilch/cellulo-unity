/****************************************************************************
** Meta object code from reading C++ file 'CelluloBluetoothEMP.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/comm/CelluloBluetoothEMP.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloBluetoothEMP.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloBluetoothEMP_t {
    QByteArrayData data[19];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloBluetoothEMP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloBluetoothEMP_t qt_meta_stringdata_Cellulo__CelluloBluetoothEMP = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Cellulo::CelluloBluetoothEMP"
QT_MOC_LITERAL(1, 29, 17), // "continuousChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "macAddrToBlastChanged"
QT_MOC_LITERAL(4, 70, 21), // "macAddrBlastedChanged"
QT_MOC_LITERAL(5, 92, 13), // "setContinuous"
QT_MOC_LITERAL(6, 106, 10), // "continuous"
QT_MOC_LITERAL(7, 117, 10), // "resetLater"
QT_MOC_LITERAL(8, 128, 7), // "macAddr"
QT_MOC_LITERAL(9, 136, 13), // "shutdownLater"
QT_MOC_LITERAL(10, 150, 5), // "clear"
QT_MOC_LITERAL(11, 156, 16), // "resetIfConnected"
QT_MOC_LITERAL(12, 173, 19), // "shutdownIfConnected"
QT_MOC_LITERAL(13, 193, 21), // "requeueIfDisconnected"
QT_MOC_LITERAL(14, 215, 17), // "moveToBlastedList"
QT_MOC_LITERAL(15, 233, 17), // "CelluloBluetooth*"
QT_MOC_LITERAL(16, 251, 5), // "robot"
QT_MOC_LITERAL(17, 257, 14), // "macAddrToBlast"
QT_MOC_LITERAL(18, 272, 14) // "macAddrBlasted"

    },
    "Cellulo::CelluloBluetoothEMP\0"
    "continuousChanged\0\0macAddrToBlastChanged\0"
    "macAddrBlastedChanged\0setContinuous\0"
    "continuous\0resetLater\0macAddr\0"
    "shutdownLater\0clear\0resetIfConnected\0"
    "shutdownIfConnected\0requeueIfDisconnected\0"
    "moveToBlastedList\0CelluloBluetooth*\0"
    "robot\0macAddrToBlast\0macAddrBlasted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloBluetoothEMP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       3,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       9,    1,   83,    2, 0x0a /* Public */,
      10,    0,   86,    2, 0x0a /* Public */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495103,
      17, QMetaType::QStringList, 0x00495001,
      18, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Cellulo::CelluloBluetoothEMP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloBluetoothEMP *_t = static_cast<CelluloBluetoothEMP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->continuousChanged(); break;
        case 1: _t->macAddrToBlastChanged(); break;
        case 2: _t->macAddrBlastedChanged(); break;
        case 3: _t->setContinuous((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->resetLater((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->shutdownLater((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->clear(); break;
        case 7: _t->resetIfConnected(); break;
        case 8: _t->shutdownIfConnected(); break;
        case 9: _t->requeueIfDisconnected(); break;
        case 10: _t->moveToBlastedList((*reinterpret_cast< CelluloBluetooth*(*)>(_a[1]))); break;
        case 11: _t->moveToBlastedList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CelluloBluetooth* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloBluetoothEMP::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetoothEMP::continuousChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloBluetoothEMP::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetoothEMP::macAddrToBlastChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloBluetoothEMP::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetoothEMP::macAddrBlastedChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloBluetoothEMP *_t = static_cast<CelluloBluetoothEMP *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getContinuous(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getMacAddrToBlast(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->getMacAddrBlasted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloBluetoothEMP *_t = static_cast<CelluloBluetoothEMP *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContinuous(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloBluetoothEMP::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloBluetoothEMP.data,
      qt_meta_data_Cellulo__CelluloBluetoothEMP,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloBluetoothEMP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloBluetoothEMP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloBluetoothEMP.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloBluetoothEMP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
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
void Cellulo::CelluloBluetoothEMP::continuousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloBluetoothEMP::macAddrToBlastChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloBluetoothEMP::macAddrBlastedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
