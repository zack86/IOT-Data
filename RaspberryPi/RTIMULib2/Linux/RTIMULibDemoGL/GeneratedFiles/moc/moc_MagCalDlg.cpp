/****************************************************************************
** Meta object code from reading C++ file 'MagCalDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MagCalDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MagCalDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MagCalDlg_t {
    QByteArrayData data[9];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagCalDlg_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagCalDlg_t qt_meta_stringdata_MagCalDlg = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 8),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 7),
QT_MOC_LITERAL(4, 28, 12),
QT_MOC_LITERAL(5, 41, 9),
QT_MOC_LITERAL(6, 51, 10),
QT_MOC_LITERAL(7, 62, 10),
QT_MOC_LITERAL(8, 73, 4)
    },
    "MagCalDlg\0onCancel\0\0onReset\0onSaveMinMax\0"
    "onProcess\0newIMUData\0RTIMU_DATA\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagCalDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void MagCalDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MagCalDlg *_t = static_cast<MagCalDlg *>(_o);
        switch (_id) {
        case 0: _t->onCancel(); break;
        case 1: _t->onReset(); break;
        case 2: _t->onSaveMinMax(); break;
        case 3: _t->onProcess(); break;
        case 4: _t->newIMUData((*reinterpret_cast< const RTIMU_DATA(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MagCalDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MagCalDlg.data,
      qt_meta_data_MagCalDlg,  qt_static_metacall, 0, 0}
};


const QMetaObject *MagCalDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagCalDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MagCalDlg.stringdata))
        return static_cast<void*>(const_cast< MagCalDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int MagCalDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
