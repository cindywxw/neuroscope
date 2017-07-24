/****************************************************************************
** Meta object code from reading C++ file 'channeliconview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/channeliconview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'channeliconview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChannelIconView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x05,
      81,   63,   16,   16, 0x05,
     150,  121,   16,   16, 0x05,
     237,  201,   16,   16, 0x05,
     269,  264,   16,   16, 0x05,
     341,  290,   16,   16, 0x05,
     391,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     413,  404,   16,   16, 0x0a,
     434,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChannelIconView[] = {
    "ChannelIconView\0\0item\0"
    "mousePressMiddleButton(QListWidgetItem*)\0"
    "targetGroup,after\0"
    "channelsMoved(QString,QListWidgetItem*)\0"
    "channelIds,sourceGroup,after\0"
    "channelsMoved(QList<int>,QString,QListWidgetItem*)\0"
    "sourceId,targetId,start,destination\0"
    "dropLabel(int,int,int,int)\0name\0"
    "removeGroup(QString)\0"
    "listId,sourceGroupName,destGroupName,index,moveAll\0"
    "moveListItem(QList<int>,QString,QString,int,bool)\0"
    "rowInsered()\0dragDrop\0setDragAndDrop(bool)\0"
    "slotRowInsered()\0"
};

void ChannelIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChannelIconView *_t = static_cast<ChannelIconView *>(_o);
        switch (_id) {
        case 0: _t->mousePressMiddleButton((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->channelsMoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->channelsMoved((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[3]))); break;
        case 3: _t->dropLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->removeGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->moveListItem((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 6: _t->rowInsered(); break;
        case 7: _t->setDragAndDrop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotRowInsered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChannelIconView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChannelIconView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_ChannelIconView,
      qt_meta_data_ChannelIconView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChannelIconView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChannelIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChannelIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelIconView))
        return static_cast<void*>(const_cast< ChannelIconView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int ChannelIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ChannelIconView::mousePressMiddleButton(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChannelIconView::channelsMoved(const QString & _t1, QListWidgetItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChannelIconView::channelsMoved(const QList<int> & _t1, const QString & _t2, QListWidgetItem * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChannelIconView::dropLabel(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChannelIconView::removeGroup(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChannelIconView::moveListItem(const QList<int> & _t1, const QString & _t2, const QString & _t3, int _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChannelIconView::rowInsered()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
