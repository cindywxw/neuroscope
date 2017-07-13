/****************************************************************************
** Meta object code from reading C++ file 'globaleventsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/globaleventsprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globaleventsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalEventsProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   22,   21,   21, 0x05,
     142,   97,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     296,  241,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalEventsProvider[] = {
    "GlobalEventsProvider\0\0startTime,endTime,initiator\0"
    "getCurrentEventInformation(long,long,QObject*)\0"
    "eventsData,selectedEvents,providerItemColors\0"
    "eventsAvailable(QHash<QString,EventData*>&,QMap<QString,QList<int> >&,"
    "QHash<QString,ItemColors*>&)\0"
    "eventsData,selectedEvents,providerItemColors,initiator\0"
    "eventInformationAvailable(QHash<QString,EventData*>&,QMap<QString,QLis"
    "t<int> >&,QHash<QString,ItemColors*>&,QObject*)\0"
};

void GlobalEventsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlobalEventsProvider *_t = static_cast<GlobalEventsProvider *>(_o);
        switch (_id) {
        case 0: _t->getCurrentEventInformation((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 1: _t->eventsAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3]))); break;
        case 2: _t->eventInformationAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalEventsProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalEventsProvider::staticMetaObject = {
    { &DataProvider::staticMetaObject, qt_meta_stringdata_GlobalEventsProvider,
      qt_meta_data_GlobalEventsProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalEventsProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalEventsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalEventsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalEventsProvider))
        return static_cast<void*>(const_cast< GlobalEventsProvider*>(this));
    return DataProvider::qt_metacast(_clname);
}

int GlobalEventsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GlobalEventsProvider::getCurrentEventInformation(long _t1, long _t2, QObject * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalEventsProvider::eventsAvailable(QHash<QString,EventData*> & _t1, QMap<QString,QList<int> > & _t2, QHash<QString,ItemColors*> & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
