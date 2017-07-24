/****************************************************************************
** Meta object code from reading C++ file 'imagecreator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/imagecreator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagecreator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageCreator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ImageCreator[] = {
    "ImageCreator\0\0data,initiator\0"
    "dataAvailable(Array<dataType>&,QObject*)\0"
};

void ImageCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageCreator *_t = static_cast<ImageCreator *>(_o);
        switch (_id) {
        case 0: _t->dataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageCreator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageCreator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageCreator,
      qt_meta_data_ImageCreator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageCreator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageCreator))
        return static_cast<void*>(const_cast< ImageCreator*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImageCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
