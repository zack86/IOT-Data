/****************************************************************************
** Meta object code from reading C++ file 'IMUThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IMUThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMUThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IMUThread_t {
    QByteArrayData data[16];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IMUThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IMUThread_t qt_meta_stringdata_IMUThread = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 17),
QT_MOC_LITERAL(4, 37, 18),
QT_MOC_LITERAL(5, 56, 10),
QT_MOC_LITERAL(6, 67, 9),
QT_MOC_LITERAL(7, 77, 7),
QT_MOC_LITERAL(8, 85, 10),
QT_MOC_LITERAL(9, 96, 10),
QT_MOC_LITERAL(10, 107, 4),
QT_MOC_LITERAL(11, 112, 15),
QT_MOC_LITERAL(12, 128, 7),
QT_MOC_LITERAL(13, 136, 6),
QT_MOC_LITERAL(14, 143, 11),
QT_MOC_LITERAL(15, 155, 11)
    },
    "IMUThread\0running\0\0internalEndThread\0"
    "internalKillThread\0newCalData\0RTVector3\0"
    "compass\0newIMUData\0RTIMU_DATA\0data\0"
    "internalRunLoop\0cleanup\0newIMU\0"
    "newPressure\0newHumidity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IMUThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       8,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   73,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x0a /* Public */,
      14,    0,   76,    2, 0x0a /* Public */,
      15,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IMUThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IMUThread *_t = static_cast<IMUThread *>(_o);
        switch (_id) {
        case 0: _t->running(); break;
        case 1: _t->internalEndThread(); break;
        case 2: _t->internalKillThread(); break;
        case 3: _t->newCalData((*reinterpret_cast< const RTVector3(*)>(_a[1]))); break;
        case 4: _t->newIMUData((*reinterpret_cast< const RTIMU_DATA(*)>(_a[1]))); break;
        case 5: _t->internalRunLoop(); break;
        case 6: _t->cleanup(); break;
        case 7: _t->newIMU(); break;
        case 8: _t->newPressure(); break;
        case 9: _t->newHumidity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IMUThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IMUThread::running)) {
                *result = 0;
            }
        }
        {
            typedef void (IMUThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IMUThread::internalEndThread)) {
                *result = 1;
            }
        }
        {
            typedef void (IMUThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IMUThread::internalKillThread)) {
                *result = 2;
            }
        }
        {
            typedef void (IMUThread::*_t)(const RTVector3 & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IMUThread::newCalData)) {
                *result = 3;
            }
        }
        {
            typedef void (IMUThread::*_t)(const RTIMU_DATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IMUThread::newIMUData)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject IMUThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMUThread.data,
      qt_meta_data_IMUThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *IMUThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IMUThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMUThread.stringdata))
        return static_cast<void*>(const_cast< IMUThread*>(this));
    return QObject::qt_metacast(_clname);
}

int IMUThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void IMUThread::running()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void IMUThread::internalEndThread()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void IMUThread::internalKillThread()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void IMUThread::newCalData(const RTVector3 & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IMUThread::newIMUData(const RTIMU_DATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
