/****************************************************************************
** Meta object code from reading C++ file 'CelluloUIUtil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-cellulo/src/util/ui/CelluloUIUtil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloUIUtil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloUIUtil_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloUIUtil_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloUIUtil_t qt_meta_stringdata_Cellulo__CelluloUIUtil = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Cellulo::CelluloUIUtil"
QT_MOC_LITERAL(1, 23, 15), // "colorFromString"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "color"
QT_MOC_LITERAL(4, 46, 16), // "colorInterpolate"
QT_MOC_LITERAL(5, 63, 6), // "color1"
QT_MOC_LITERAL(6, 70, 6), // "color2"
QT_MOC_LITERAL(7, 77, 12) // "color1Weight"

    },
    "Cellulo::CelluloUIUtil\0colorFromString\0"
    "\0color\0colorInterpolate\0color1\0color2\0"
    "color1Weight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloUIUtil[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       4,    3,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QColor, QMetaType::QString,    3,
    QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::QReal,    5,    6,    7,

       0        // eod
};

void Cellulo::CelluloUIUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloUIUtil *_t = static_cast<CelluloUIUtil *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QColor _r = _t->colorFromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 1: { QColor _r = _t->colorInterpolate((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloUIUtil::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloUIUtil.data,
      qt_meta_data_Cellulo__CelluloUIUtil,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloUIUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloUIUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloUIUtil.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cellulo::CelluloUIUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
