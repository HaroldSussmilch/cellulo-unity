/****************************************************************************
** Meta object code from reading C++ file 'SimpleLogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-logger/src/SimpleLogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimpleLogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLLogger__SimpleLogger_t {
    QByteArrayData data[10];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLLogger__SimpleLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLLogger__SimpleLogger_t qt_meta_stringdata_QMLLogger__SimpleLogger = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QMLLogger::SimpleLogger"
QT_MOC_LITERAL(1, 24, 15), // "filenameChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 3), // "log"
QT_MOC_LITERAL(4, 45, 4), // "data"
QT_MOC_LITERAL(5, 50, 8), // "filename"
QT_MOC_LITERAL(6, 59, 7), // "logTime"
QT_MOC_LITERAL(7, 67, 9), // "logMillis"
QT_MOC_LITERAL(8, 77, 13), // "logDeviceInfo"
QT_MOC_LITERAL(9, 91, 9) // "toConsole"

    },
    "QMLLogger::SimpleLogger\0filenameChanged\0"
    "\0log\0data\0filename\0logTime\0logMillis\0"
    "logDeviceInfo\0toConsole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLLogger__SimpleLogger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       6, QMetaType::Bool, 0x00095003,
       7, QMetaType::Bool, 0x00095003,
       8, QMetaType::Bool, 0x00095003,
       9, QMetaType::Bool, 0x00095003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QMLLogger::SimpleLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimpleLogger *_t = static_cast<SimpleLogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filenameChanged(); break;
        case 1: _t->log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimpleLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleLogger::filenameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SimpleLogger *_t = static_cast<SimpleLogger *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFilename(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->logTime; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->logMillis; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->logDeviceInfo; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->toConsole; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SimpleLogger *_t = static_cast<SimpleLogger *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFilename(*reinterpret_cast< QString*>(_v)); break;
        case 1:
            if (_t->logTime != *reinterpret_cast< bool*>(_v)) {
                _t->logTime = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 2:
            if (_t->logMillis != *reinterpret_cast< bool*>(_v)) {
                _t->logMillis = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 3:
            if (_t->logDeviceInfo != *reinterpret_cast< bool*>(_v)) {
                _t->logDeviceInfo = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 4:
            if (_t->toConsole != *reinterpret_cast< bool*>(_v)) {
                _t->toConsole = *reinterpret_cast< bool*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMLLogger::SimpleLogger::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QMLLogger__SimpleLogger.data,
      qt_meta_data_QMLLogger__SimpleLogger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMLLogger::SimpleLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLLogger::SimpleLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLLogger__SimpleLogger.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLLogger::SimpleLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void QMLLogger::SimpleLogger::filenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
