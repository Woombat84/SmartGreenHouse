/****************************************************************************
** Meta object code from reading C++ file 'smartgreenhousegui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SmartGreenHouseGUI/smartgreenhousegui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartgreenhousegui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SmartGreenHouseGUI_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartGreenHouseGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartGreenHouseGUI_t qt_meta_stringdata_SmartGreenHouseGUI = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SmartGreenHouseGUI"
QT_MOC_LITERAL(1, 19, 10), // "serialRead"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "setFanSpeed"
QT_MOC_LITERAL(4, 43, 8), // "callTemp"
QT_MOC_LITERAL(5, 52, 13), // "updateHumiLCD"
QT_MOC_LITERAL(6, 66, 13), // "updateTempLCD"
QT_MOC_LITERAL(7, 80, 7), // "combine"
QT_MOC_LITERAL(8, 88, 24), // "on_fanSpeed_valueChanged"
QT_MOC_LITERAL(9, 113, 5) // "value"

    },
    "SmartGreenHouseGUI\0serialRead\0\0"
    "setFanSpeed\0callTemp\0updateHumiLCD\0"
    "updateTempLCD\0combine\0on_fanSpeed_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartGreenHouseGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       7,    2,   58,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void SmartGreenHouseGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmartGreenHouseGUI *_t = static_cast<SmartGreenHouseGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialRead(); break;
        case 1: _t->setFanSpeed(); break;
        case 2: _t->callTemp(); break;
        case 3: _t->updateHumiLCD((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateTempLCD((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { int _r = _t->combine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->on_fanSpeed_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SmartGreenHouseGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SmartGreenHouseGUI.data,
      qt_meta_data_SmartGreenHouseGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SmartGreenHouseGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartGreenHouseGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SmartGreenHouseGUI.stringdata0))
        return static_cast<void*>(const_cast< SmartGreenHouseGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SmartGreenHouseGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
