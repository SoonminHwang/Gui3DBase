/****************************************************************************
** Meta object code from reading C++ file 'Visualizer.hpp'
**
** Created: Fri Apr 15 22:35:35 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Visualizer.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Visualizer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui3DQt__Visualizer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      36,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Gui3DQt__Visualizer[] = {
    "Gui3DQt::Visualizer\0\0stateChanged()\0"
    "redraw2D(QImage&)\0"
};

void Gui3DQt::Visualizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Visualizer *_t = static_cast<Visualizer *>(_o);
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->redraw2D((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui3DQt::Visualizer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui3DQt::Visualizer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui3DQt__Visualizer,
      qt_meta_data_Gui3DQt__Visualizer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui3DQt::Visualizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui3DQt::Visualizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui3DQt::Visualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui3DQt__Visualizer))
        return static_cast<void*>(const_cast< Visualizer*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui3DQt::Visualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gui3DQt::Visualizer::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Gui3DQt::Visualizer::redraw2D(QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
