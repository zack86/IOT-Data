/****************************************************************************
** Meta object code from reading C++ file 'RTIMULibDemoGL.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RTIMULibDemoGL.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RTIMULibDemoGL.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RTIMULibDemoGL_t {
    QByteArrayData data[13];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTIMULibDemoGL_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTIMULibDemoGL_t qt_meta_stringdata_RTIMULibDemoGL = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 6),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 23),
QT_MOC_LITERAL(4, 47, 25),
QT_MOC_LITERAL(5, 73, 24),
QT_MOC_LITERAL(6, 98, 11),
QT_MOC_LITERAL(7, 110, 12),
QT_MOC_LITERAL(8, 123, 13),
QT_MOC_LITERAL(9, 137, 15),
QT_MOC_LITERAL(10, 153, 13),
QT_MOC_LITERAL(11, 167, 10),
QT_MOC_LITERAL(12, 178, 10)
    },
    "RTIMULibDemoGL\0newIMU\0\0onSelectFusionAlgorithm\0"
    "onCalibrateAccelerometers\0"
    "onCalibrateMagnetometers\0onSelectIMU\0"
    "onEnableGyro\0onEnableAccel\0onEnableCompass\0"
    "onEnableDebug\0newIMUData\0RTIMU_DATA"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTIMULibDemoGL[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void RTIMULibDemoGL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RTIMULibDemoGL *_t = static_cast<RTIMULibDemoGL *>(_o);
        switch (_id) {
        case 0: _t->newIMU(); break;
        case 1: _t->onSelectFusionAlgorithm(); break;
        case 2: _t->onCalibrateAccelerometers(); break;
        case 3: _t->onCalibrateMagnetometers(); break;
        case 4: _t->onSelectIMU(); break;
        case 5: _t->onEnableGyro((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onEnableAccel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onEnableCompass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onEnableDebug((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->newIMUData((*reinterpret_cast< const RTIMU_DATA(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RTIMULibDemoGL::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTIMULibDemoGL::newIMU)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject RTIMULibDemoGL::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RTIMULibDemoGL.data,
      qt_meta_data_RTIMULibDemoGL,  qt_static_metacall, 0, 0}
};


const QMetaObject *RTIMULibDemoGL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTIMULibDemoGL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RTIMULibDemoGL.stringdata))
        return static_cast<void*>(const_cast< RTIMULibDemoGL*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RTIMULibDemoGL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void RTIMULibDemoGL::newIMU()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
