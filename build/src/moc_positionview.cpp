/****************************************************************************
** Meta object code from reading C++ file 'positionview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/positionview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'positionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PositionView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   14,   13,   13, 0x0a,
     138,  117,   13,   13, 0x0a,
     181,  166,   13,   13, 0x0a,
     286,  222,   13,   13, 0x0a,
     365,  323,   13,   13, 0x2a,
     401,  395,   13,   13, 0x0a,
     499,  431,   13,   13, 0x0a,
     612,   13,   13,   13, 0x0a,
     659,  633,   13,   13, 0x0a,
     701,   13,   13,   13, 0x0a,
     717,   13,   13,   13, 0x0a,
     757,  736,   13,   13, 0x0a,
     802,  796,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PositionView[] = {
    "PositionView\0\0"
    "width,height,backgroundImage,newOrientation,active\0"
    "updatePositionInformation(int,int,QImage,bool,bool)\0"
    "start,timeFrameWidth\0displayTimeFrame(long,long)\0"
    "data,initiator\0dataAvailable(Array<dataType>&,QObject*)\0"
    "printPainter,width,height,whiteBackground,backgroundForPrinting\0"
    "print(QPainter&,int,int,bool,QImage)\0"
    "printPainter,width,height,whiteBackground\0"
    "print(QPainter&,int,int,bool)\0color\0"
    "changeBackgroundColor(QColor)\0"
    "eventsData,selectedEvents,providerItemColors,initiator,samplingRate\0"
    "dataAvailable(QHash<QString,EventData*>&,QMap<QString,QList<int> >&,QH"
    "ash<QString,ItemColors*>&,QObject*,double)\0"
    "updateEventDisplay()\0color,name,eventId,active\0"
    "eventColorUpdate(QColor,QString,int,bool)\0"
    "updateDrawing()\0addEventProvider()\0"
    "name,active,lastFile\0"
    "removeEventProvider(QString,bool,bool)\0"
    "shown\0setEventsInPositionView(bool)\0"
};

void PositionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PositionView *_t = static_cast<PositionView *>(_o);
        switch (_id) {
        case 0: _t->updatePositionInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->displayTimeFrame((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 2: _t->dataAvailable((*reinterpret_cast< Array<dataType>(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 3: _t->print((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const QImage(*)>(_a[5]))); break;
        case 4: _t->print((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->changeBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->dataAvailable((*reinterpret_cast< QHash<QString,EventData*>(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QList<int> >(*)>(_a[2])),(*reinterpret_cast< QHash<QString,ItemColors*>(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 7: _t->updateEventDisplay(); break;
        case 8: _t->eventColorUpdate((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 9: _t->updateDrawing(); break;
        case 10: _t->addEventProvider(); break;
        case 11: _t->removeEventProvider((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->setEventsInPositionView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PositionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PositionView::staticMetaObject = {
    { &BaseFrame::staticMetaObject, qt_meta_stringdata_PositionView,
      qt_meta_data_PositionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PositionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PositionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PositionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PositionView))
        return static_cast<void*>(const_cast< PositionView*>(this));
    return BaseFrame::qt_metacast(_clname);
}

int PositionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
