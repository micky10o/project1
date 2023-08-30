/****************************************************************************
** Meta object code from reading C++ file 'chartwidget1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../optimumproject/chartwidget1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartwidget1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChartWidget1_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChartWidget1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChartWidget1_t qt_meta_stringdata_ChartWidget1 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChartWidget1"
QT_MOC_LITERAL(1, 13, 7), // "tonext2"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "ivalues"
QT_MOC_LITERAL(4, 30, 11), // "icordgx1_1a"
QT_MOC_LITERAL(5, 42, 11), // "icordgy1_1a"
QT_MOC_LITERAL(6, 54, 11), // "icordgx1_1b"
QT_MOC_LITERAL(7, 66, 11), // "icordgy1_1b"
QT_MOC_LITERAL(8, 78, 11), // "icordgx1_2a"
QT_MOC_LITERAL(9, 90, 11), // "icordgy1_2a"
QT_MOC_LITERAL(10, 102, 11), // "icordgx1_2b"
QT_MOC_LITERAL(11, 114, 11), // "icordgy1_2b"
QT_MOC_LITERAL(12, 126, 21) // "on_gnext2_1_1_clicked"

    },
    "ChartWidget1\0tonext2\0\0ivalues\0icordgx1_1a\0"
    "icordgy1_1a\0icordgx1_1b\0icordgy1_1b\0"
    "icordgx1_2a\0icordgy1_2a\0icordgx1_2b\0"
    "icordgy1_2b\0on_gnext2_1_1_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChartWidget1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    8,   30,    2, 0x0a /* Public */,
      12,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void,

       0        // eod
};

void ChartWidget1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChartWidget1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tonext2(); break;
        case 1: _t->ivalues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 2: _t->on_gnext2_1_1_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChartWidget1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartWidget1::tonext2)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChartWidget1::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ChartWidget1.data,
    qt_meta_data_ChartWidget1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChartWidget1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChartWidget1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChartWidget1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChartWidget1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ChartWidget1::tonext2()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
