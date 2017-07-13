/****************************************************************************
** Meta object code from reading C++ file 'channelgroupview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/channelgroupview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channelgroupview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChannelGroupView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      54,   18,   17,   17, 0x05,
      90,   81,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     136,  114,   17,   17, 0x0a,
     167,  158,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChannelGroupView[] = {
    "ChannelGroupView\0\0sourceId,targetId,start,destination\0"
    "dropLabel(int,int,int,int)\0position\0"
    "dragObjectMoved(QPoint)\0parentWidth,labelSize\0"
    "reAdjustSize(int,int)\0dragDrop\0"
    "setDragAndDrop(bool)\0"
};

void ChannelGroupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChannelGroupView *_t = static_cast<ChannelGroupView *>(_o);
        switch (_id) {
        case 0: _t->dropLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->dragObjectMoved((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->reAdjustSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setDragAndDrop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChannelGroupView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChannelGroupView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChannelGroupView,
      qt_meta_data_ChannelGroupView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChannelGroupView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChannelGroupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChannelGroupView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelGroupView))
        return static_cast<void*>(const_cast< ChannelGroupView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChannelGroupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ChannelGroupView::dropLabel(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChannelGroupView::dragObjectMoved(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
