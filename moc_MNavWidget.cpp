/****************************************************************************
** Meta object code from reading C++ file 'MNavWidget.hpp'
**
** Created: Fri Apr 15 22:35:34 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MNavWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MNavWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui3DQt__MNavWidget[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_Gui3DQt__MNavWidget[] = {
    "Gui3DQt::MNavWidget\0"
};

void Gui3DQt::MNavWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui3DQt::MNavWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui3DQt::MNavWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_Gui3DQt__MNavWidget,
      qt_meta_data_Gui3DQt__MNavWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui3DQt::MNavWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui3DQt::MNavWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui3DQt::MNavWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui3DQt__MNavWidget))
        return static_cast<void*>(const_cast< MNavWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int Gui3DQt::MNavWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
