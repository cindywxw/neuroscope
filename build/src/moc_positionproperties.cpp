/****************************************************************************
** Meta object code from reading C++ file 'positionproperties.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/positionproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'positionproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PositionProperties[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   20,   19,   19, 0x0a,
      43,   19,   19,   19, 0x08,
      73,   67,   19,   19, 0x08,
     104,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PositionProperties[] = {
    "PositionProperties\0\0state\0setEnabled(bool)\0"
    "updateBackgroundImage()\0image\0"
    "updateBackgroundImage(QString)\0"
    "updateDisplayedImage()\0"
};

void PositionProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PositionProperties *_t = static_cast<PositionProperties *>(_o);
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateBackgroundImage(); break;
        case 2: _t->updateBackgroundImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateDisplayedImage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PositionProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PositionProperties::staticMetaObject = {
    { &PositionPropertiesLayout::staticMetaObject, qt_meta_stringdata_PositionProperties,
      qt_meta_data_PositionProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PositionProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PositionProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PositionProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PositionProperties))
        return static_cast<void*>(const_cast< PositionProperties*>(this));
    return PositionPropertiesLayout::qt_metacast(_clname);
}

int PositionProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PositionPropertiesLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
