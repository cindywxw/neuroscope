/****************************************************************************
** Meta object code from reading C++ file 'neuroscopedoc.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/neuroscopedoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'neuroscopedoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NeuroscopeDoc[] = {

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
      48,   15,   14,   14, 0x05,
     322,   90,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     533,  468,   14,   14, 0x0a,
     693,  609,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NeuroscopeDoc[] = {
    "NeuroscopeDoc\0\0channelDefaultOffsets,skipStatus\0"
    "noSession(QMap<int,int>&,QMap<int,bool>&)\0"
    "channelsToDisplay,verticalLines,raster,waveforms,showLabels,multipleCo"
    "lumns,greyMode,autocenterChannels,offsets,channelGains,selectedChannel"
    "s,skipStatus,startTime,duration,tabLabel,positionView,rasterHeight,sho"
    "wEventsInPositionView\0"
    "loadFirstDisplay(QList<int>*,bool,bool,bool,bool,bool,bool,bool,QList<"
    "int>,QList<int>,QList<int>,QMap<int,bool>&,long,long,QString,bool,int,"
    "bool)\0"
    "providerName,oldNewEventIds,newOldEventIds,eventDescriptionAdded\0"
    "slotNewEventDescriptionCreated(QString,QMap<int,int>,QMap<int,int>,QSt"
    "ring)\0"
    "providerName,oldNewEventIds,newOldEventIds,eventIdToRemove,eventDescri"
    "ptionToRemove\0"
    "slotEventDescriptionRemoved(QString,QMap<int,int>,QMap<int,int>,int,QS"
    "tring)\0"
};

void NeuroscopeDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NeuroscopeDoc *_t = static_cast<NeuroscopeDoc *>(_o);
        switch (_id) {
        case 0: _t->noSession((*reinterpret_cast< QMap<int,int>(*)>(_a[1])),(*reinterpret_cast< QMap<int,bool>(*)>(_a[2]))); break;
        case 1: _t->loadFirstDisplay((*reinterpret_cast< QList<int>*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< QList<int>(*)>(_a[9])),(*reinterpret_cast< QList<int>(*)>(_a[10])),(*reinterpret_cast< QList<int>(*)>(_a[11])),(*reinterpret_cast< QMap<int,bool>(*)>(_a[12])),(*reinterpret_cast< long(*)>(_a[13])),(*reinterpret_cast< long(*)>(_a[14])),(*reinterpret_cast< QString(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16])),(*reinterpret_cast< int(*)>(_a[17])),(*reinterpret_cast< bool(*)>(_a[18]))); break;
        case 2: _t->slotNewEventDescriptionCreated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QMap<int,int>(*)>(_a[2])),(*reinterpret_cast< QMap<int,int>(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: _t->slotEventDescriptionRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QMap<int,int>(*)>(_a[2])),(*reinterpret_cast< QMap<int,int>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NeuroscopeDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NeuroscopeDoc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NeuroscopeDoc,
      qt_meta_data_NeuroscopeDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NeuroscopeDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NeuroscopeDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NeuroscopeDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NeuroscopeDoc))
        return static_cast<void*>(const_cast< NeuroscopeDoc*>(this));
    return QObject::qt_metacast(_clname);
}

int NeuroscopeDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void NeuroscopeDoc::noSession(QMap<int,int> & _t1, QMap<int,bool> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NeuroscopeDoc::loadFirstDisplay(QList<int> * _t1, bool _t2, bool _t3, bool _t4, bool _t5, bool _t6, bool _t7, bool _t8, QList<int> _t9, QList<int> _t10, QList<int> _t11, QMap<int,bool> & _t12, long _t13, long _t14, QString _t15, bool _t16, int _t17, bool _t18)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
