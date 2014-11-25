/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TP_CERCLE_CORRIGE/InterfaceCSG/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 14),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 15),
QT_MOC_LITERAL(4, 43, 12),
QT_MOC_LITERAL(5, 56, 12),
QT_MOC_LITERAL(6, 69, 20),
QT_MOC_LITERAL(7, 90, 18),
QT_MOC_LITERAL(8, 109, 9),
QT_MOC_LITERAL(9, 119, 9),
QT_MOC_LITERAL(10, 129, 9),
QT_MOC_LITERAL(11, 139, 7),
QT_MOC_LITERAL(12, 147, 7),
QT_MOC_LITERAL(13, 155, 9),
QT_MOC_LITERAL(14, 165, 8),
QT_MOC_LITERAL(15, 174, 10),
QT_MOC_LITERAL(16, 185, 10),
QT_MOC_LITERAL(17, 196, 5),
QT_MOC_LITERAL(18, 202, 16),
QT_MOC_LITERAL(19, 219, 18),
QT_MOC_LITERAL(20, 238, 2),
QT_MOC_LITERAL(21, 241, 16)
    },
    "MainWindow\0createPrimtive\0\0createOperation\0"
    "applyTransfo\0resetTransfo\0"
    "transfoSliderChanged\0transfoSpinChanged\0"
    "loadImage\0saveImage\0drawSobel\0loadCSG\0"
    "saveCSG\0appendCSG\0clearCSG\0swapLRRoot\0"
    "unjoinRoot\0clone\0checkDrawCurrent\0"
    "currentNodeChanged\0id\0nodeTextSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x0a /* Public */,
       9,    0,  116,    2, 0x0a /* Public */,
      10,    0,  117,    2, 0x0a /* Public */,
      11,    0,  118,    2, 0x0a /* Public */,
      12,    0,  119,    2, 0x0a /* Public */,
      13,    0,  120,    2, 0x0a /* Public */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x0a /* Public */,
      16,    0,  123,    2, 0x0a /* Public */,
      17,    0,  124,    2, 0x0a /* Public */,
      18,    0,  125,    2, 0x0a /* Public */,
      19,    1,  126,    2, 0x0a /* Public */,
      21,    1,  129,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->createPrimtive(); break;
        case 1: _t->createOperation(); break;
        case 2: _t->applyTransfo(); break;
        case 3: _t->resetTransfo(); break;
        case 4: _t->transfoSliderChanged(); break;
        case 5: _t->transfoSpinChanged(); break;
        case 6: _t->loadImage(); break;
        case 7: _t->saveImage(); break;
        case 8: _t->drawSobel(); break;
        case 9: _t->loadCSG(); break;
        case 10: _t->saveCSG(); break;
        case 11: _t->appendCSG(); break;
        case 12: _t->clearCSG(); break;
        case 13: _t->swapLRRoot(); break;
        case 14: _t->unjoinRoot(); break;
        case 15: _t->clone(); break;
        case 16: _t->checkDrawCurrent(); break;
        case 17: _t->currentNodeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->nodeTextSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
