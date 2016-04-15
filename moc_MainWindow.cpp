/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.hpp'
**
** Created: Fri Apr 15 22:35:34 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui3DQt__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      41,   20,   20,   20, 0x08,
      58,   20,   20,   20, 0x08,
      75,   20,   20,   20, 0x08,
      98,   20,   20,   20, 0x08,
     119,   20,   20,   20, 0x08,
     140,   20,   20,   20, 0x08,
     151,   20,   20,   20, 0x08,
     163,   20,   20,   20, 0x08,
     183,   20,   20,   20, 0x08,
     210,  205,   20,   20, 0x08,
     234,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui3DQt__MainWindow[] = {
    "Gui3DQt::MainWindow\0\0set2DImage(QImage&)\0"
    "viewChanged(int)\0changeView2D3D()\0"
    "showHideControlPanel()\0setWhiteBackground()\0"
    "setBlackBackground()\0zoomIn2D()\0"
    "zoomOut2D()\0setImageOutputDir()\0"
    "setImageFilePattern()\0grab\0"
    "startStopGrabbing(bool)\0startSingleGrab()\0"
};

void Gui3DQt::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->set2DImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->viewChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeView2D3D(); break;
        case 3: _t->showHideControlPanel(); break;
        case 4: _t->setWhiteBackground(); break;
        case 5: _t->setBlackBackground(); break;
        case 6: _t->zoomIn2D(); break;
        case 7: _t->zoomOut2D(); break;
        case 8: _t->setImageOutputDir(); break;
        case 9: _t->setImageFilePattern(); break;
        case 10: _t->startStopGrabbing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->startSingleGrab(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui3DQt::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui3DQt::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Gui3DQt__MainWindow,
      qt_meta_data_Gui3DQt__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui3DQt::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui3DQt::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui3DQt::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui3DQt__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Gui3DQt::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
