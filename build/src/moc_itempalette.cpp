/****************************************************************************
** Meta object code from reading C++ file 'itempalette.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/itempalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itempalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ItemPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   13,   12,   12, 0x05,
      76,   62,   12,   12, 0x05,
     142,  120,   12,   12, 0x05,
     181,  166,   12,   12, 0x05,
     233,  211,   12,   12, 0x05,
     271,   12,   12,   12, 0x05,
     292,   12,   12,   12, 0x05,
     311,   12,   12,   12, 0x05,
     330,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     364,  347,   12,   12, 0x0a,
     436,  415,   12,   12, 0x09,
     512,  479,   12,   12, 0x09,
     573,  548,   12,   12, 0x29,
     620,  604,   12,   12, 0x29,
     646,   12,   12,   12, 0x09,
     664,   12,   12,   12, 0x09,
     687,  681,   12,   12, 0x09,
     714,  604,   12,   12, 0x09,
     741,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ItemPalette[] = {
    "ItemPalette\0\0item,groupName,\0"
    "colorChanged(int,QString,QColor)\0"
    "selectedItems\0updateShownItems(QMap<QString,QList<int> >)\0"
    "parentWidth,labelSize\0paletteResized(int,int)\0"
    "eventGroupName\0selectedGroupChanged(QString)\0"
    "groupName,itemsToSkip\0"
    "updateItemsToSkip(QString,QList<int>)\0"
    "noClustersToBrowse()\0noEventsToBrowse()\0"
    "clustersToBrowse()\0eventsToBrowse()\0"
    "sourceGroup,item\0"
    "slotMousePressWAltButton(QString,QListWidgetItem*)\0"
    "sourceGroupName,item\0"
    "slotMousePressed(QString,QListWidgetItem*)\0"
    "sourceGroupName,shiftKey,ctrlAlt\0"
    "slotMousePressed(QString,bool,bool)\0"
    "sourceGroupName,shiftKey\0"
    "slotMousePressed(QString,bool)\0"
    "sourceGroupName\0slotMousePressed(QString)\0"
    "slotClickRedraw()\0languageChange()\0"
    "event\0resizeEvent(QResizeEvent*)\0"
    "slotMouseReleased(QString)\0slotRowInsered()\0"
};

void ItemPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ItemPalette *_t = static_cast<ItemPalette *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 1: _t->updateShownItems((*reinterpret_cast< const QMap<QString,QList<int> >(*)>(_a[1]))); break;
        case 2: _t->paletteResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->selectedGroupChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateItemsToSkip((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 5: _t->noClustersToBrowse(); break;
        case 6: _t->noEventsToBrowse(); break;
        case 7: _t->clustersToBrowse(); break;
        case 8: _t->eventsToBrowse(); break;
        case 9: _t->slotMousePressWAltButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 10: _t->slotMousePressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->slotMousePressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->slotMousePressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->slotMousePressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->slotClickRedraw(); break;
        case 15: _t->languageChange(); break;
        case 16: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 17: _t->slotMouseReleased((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->slotRowInsered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ItemPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ItemPalette::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_ItemPalette,
      qt_meta_data_ItemPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ItemPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ItemPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ItemPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ItemPalette))
        return static_cast<void*>(const_cast< ItemPalette*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int ItemPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void ItemPalette::colorChanged(int _t1, const QString & _t2, const QColor & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ItemPalette::updateShownItems(const QMap<QString,QList<int> > & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ItemPalette::paletteResized(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ItemPalette::selectedGroupChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ItemPalette::updateItemsToSkip(const QString & _t1, const QList<int> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ItemPalette::noClustersToBrowse()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ItemPalette::noEventsToBrowse()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ItemPalette::clustersToBrowse()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void ItemPalette::eventsToBrowse()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
static const uint qt_meta_data_GroupNameLabel[] = {

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
      42,   16,   15,   15, 0x05,
      87,   78,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GroupNameLabel[] = {
    "GroupNameLabel\0\0sourceId,shiftKey,ctrlAlt\0"
    "leftClickOnLabel(QString,bool,bool)\0"
    "sourceId\0middleClickOnLabel(QString)\0"
};

void GroupNameLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupNameLabel *_t = static_cast<GroupNameLabel *>(_o);
        switch (_id) {
        case 0: _t->leftClickOnLabel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->middleClickOnLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroupNameLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroupNameLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_GroupNameLabel,
      qt_meta_data_GroupNameLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroupNameLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroupNameLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroupNameLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupNameLabel))
        return static_cast<void*>(const_cast< GroupNameLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int GroupNameLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void GroupNameLabel::leftClickOnLabel(const QString & _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroupNameLabel::middleClickOnLabel(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
