/****************************************************************************
** Meta object code from reading C++ file 'cellulopoolclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cellulopoolclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cellulopoolclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CelluloPoolClientWrapper_t {
    QByteArrayData data[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CelluloPoolClientWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CelluloPoolClientWrapper_t qt_meta_stringdata_CelluloPoolClientWrapper = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CelluloPoolClientWrapper"
QT_MOC_LITERAL(1, 25, 4), // "init"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "deinit"
QT_MOC_LITERAL(4, 38, 10), // "onNewRobot"
QT_MOC_LITERAL(5, 49, 17), // "CelluloBluetooth*"
QT_MOC_LITERAL(6, 67, 5), // "robot"
QT_MOC_LITERAL(7, 73, 11), // "removeRobot"
QT_MOC_LITERAL(8, 85, 5), // "init_"
QT_MOC_LITERAL(9, 91, 7) // "deinit_"

    },
    "CelluloPoolClientWrapper\0init\0\0deinit\0"
    "onNewRobot\0CelluloBluetooth*\0robot\0"
    "removeRobot\0init_\0deinit_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CelluloPoolClientWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x00 /* Private */,
       9,    0,   53,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CelluloPoolClientWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloPoolClientWrapper *_t = static_cast<CelluloPoolClientWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->deinit(); break;
        case 2: _t->onNewRobot((*reinterpret_cast< CelluloBluetooth*(*)>(_a[1]))); break;
        case 3: _t->removeRobot((*reinterpret_cast< CelluloBluetooth*(*)>(_a[1]))); break;
        case 4: _t->init_(); break;
        case 5: _t->deinit_(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CelluloBluetooth* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CelluloBluetooth* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CelluloPoolClientWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CelluloPoolClientWrapper.data,
      qt_meta_data_CelluloPoolClientWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CelluloPoolClientWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CelluloPoolClientWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CelluloPoolClientWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CelluloPoolClientWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
