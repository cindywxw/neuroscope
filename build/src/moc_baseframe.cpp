/****************************************************************************
** Meta object code from reading C++ file 'baseframe.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/baseframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baseframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BaseFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   10,   10,   10, 0x0a,
      70,   10,   10,   10, 0x0a,
      94,   88,   10,   10, 0x0a,
     137,  124,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BaseFrame[] = {
    "BaseFrame\0\0viewWidget\0"
    "parentDockBeingClosed(QWidget*)\0"
    "updateDrawing()\0dockBeingClosed()\0"
    "color\0changeBackgroundColor(QColor)\0"
    "selectedMode\0setMode(BaseFrame::Mode)\0"
};

void BaseFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseFrame *_t = static_cast<BaseFrame *>(_o);
        switch (_id) {
        case 0: _t->parentDockBeingClosed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->updateDrawing(); break;
        case 2: _t->dockBeingClosed(); break;
        case 3: _t->changeBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->setMode((*reinterpret_cast< BaseFrame::Mode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BaseFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BaseFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_BaseFrame,
      qt_meta_data_BaseFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BaseFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BaseFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BaseFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BaseFrame))
        return static_cast<void*>(const_cast< BaseFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int BaseFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BaseFrame::parentDockBeingClosed(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
