/****************************************************************************
** Meta object code from reading C++ file 'qdbzmqthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdbzmqthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbzmqthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDbZmqThread_t {
    QByteArrayData data[1];
    char stringdata[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QDbZmqThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QDbZmqThread_t qt_meta_stringdata_QDbZmqThread = {
    {
QT_MOC_LITERAL(0, 0, 12)
    },
    "QDbZmqThread\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDbZmqThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QDbZmqThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDbZmqThread::staticMetaObject = {
    { &QBaseZmqThread::staticMetaObject, qt_meta_stringdata_QDbZmqThread.data,
      qt_meta_data_QDbZmqThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *QDbZmqThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDbZmqThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDbZmqThread.stringdata))
        return static_cast<void*>(const_cast< QDbZmqThread*>(this));
    return QBaseZmqThread::qt_metacast(_clname);
}

int QDbZmqThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBaseZmqThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
