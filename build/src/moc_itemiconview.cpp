/****************************************************************************
** Meta object code from reading C++ file 'itemiconview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/itemiconview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemiconview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ItemIconView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   14,   13,   13, 0x05,
      76,   14,   13,   13, 0x05,
     135,  123,   13,   13, 0x05,
     158,   13,   13,   13, 0x05,
     199,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ItemIconView[] = {
    "ItemIconView\0\0sourceGroup,\0"
    "mousePressMiddleButton(QString,QListWidgetItem*)\0"
    "mousePressWAltButton(QString,QListWidgetItem*)\0"
    "sourceGroup\0mouseReleased(QString)\0"
    "mousePressMiddleButton(QListWidgetItem*)\0"
    "rowInsered()\0"
};

void ItemIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ItemIconView *_t = static_cast<ItemIconView *>(_o);
        switch (_id) {
        case 0: _t->mousePressMiddleButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->mousePressWAltButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mousePressMiddleButton((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->rowInsered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ItemIconView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ItemIconView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_ItemIconView,
      qt_meta_data_ItemIconView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ItemIconView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ItemIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ItemIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ItemIconView))
        return static_cast<void*>(const_cast< ItemIconView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int ItemIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void ItemIconView::mousePressMiddleButton(const QString & _t1, QListWidgetItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ItemIconView::mousePressWAltButton(const QString & _t1, QListWidgetItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ItemIconView::mouseReleased(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ItemIconView::mousePressMiddleButton(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ItemIconView::rowInsered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE