/****************************************************************************
** Meta object code from reading C++ file 'CSVLogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cellulo-core/qml-logger/src/CSVLogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSVLogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLLogger__CSVLogger_t {
    QByteArrayData data[15];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLLogger__CSVLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLLogger__CSVLogger_t qt_meta_stringdata_QMLLogger__CSVLogger = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QMLLogger::CSVLogger"
QT_MOC_LITERAL(1, 21, 15), // "filenameChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "logTimeChanged"
QT_MOC_LITERAL(4, 53, 13), // "headerChanged"
QT_MOC_LITERAL(5, 67, 3), // "log"
QT_MOC_LITERAL(6, 71, 4), // "data"
QT_MOC_LITERAL(7, 76, 5), // "close"
QT_MOC_LITERAL(8, 82, 8), // "filename"
QT_MOC_LITERAL(9, 91, 7), // "logTime"
QT_MOC_LITERAL(10, 99, 9), // "logMillis"
QT_MOC_LITERAL(11, 109, 9), // "toConsole"
QT_MOC_LITERAL(12, 119, 9), // "precision"
QT_MOC_LITERAL(13, 129, 6), // "header"
QT_MOC_LITERAL(14, 136, 14) // "QList<QString>"

    },
    "QMLLogger::CSVLogger\0filenameChanged\0"
    "\0logTimeChanged\0headerChanged\0log\0"
    "data\0close\0filename\0logTime\0logMillis\0"
    "toConsole\0precision\0header\0QList<QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLLogger__CSVLogger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    6,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00095003,
      11, QMetaType::Bool, 0x00095003,
      12, QMetaType::Int, 0x00095003,
      13, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,
       2,

       0        // eod
};

void QMLLogger::CSVLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSVLogger *_t = static_cast<CSVLogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filenameChanged(); break;
        case 1: _t->logTimeChanged(); break;
        case 2: _t->headerChanged(); break;
        case 3: _t->log((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 4: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CSVLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CSVLogger::filenameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CSVLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CSVLogger::logTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CSVLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CSVLogger::headerChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CSVLogger *_t = static_cast<CSVLogger *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFilename(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getLogTime(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->logMillis; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->toConsole; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->precision; break;
        case 5: *reinterpret_cast< QList<QString>*>(_v) = _t->getHeader(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CSVLogger *_t = static_cast<CSVLogger *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFilename(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLogTime(*reinterpret_cast< bool*>(_v)); break;
        case 2:
            if (_t->logMillis != *reinterpret_cast< bool*>(_v)) {
                _t->logMillis = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 3:
            if (_t->toConsole != *reinterpret_cast< bool*>(_v)) {
                _t->toConsole = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 4:
            if (_t->precision != *reinterpret_cast< int*>(_v)) {
                _t->precision = *reinterpret_cast< int*>(_v);
            }
            break;
        case 5: _t->setHeader(*reinterpret_cast< QList<QString>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMLLogger::CSVLogger::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QMLLogger__CSVLogger.data,
      qt_meta_data_QMLLogger__CSVLogger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMLLogger::CSVLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLLogger::CSVLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLLogger__CSVLogger.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLLogger::CSVLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMLLogger::CSVLogger::filenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMLLogger::CSVLogger::logTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMLLogger::CSVLogger::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
