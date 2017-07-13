/****************************************************************************
** Meta object code from reading C++ file 'neuroscopeview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/neuroscopeview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'neuroscopeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NeuroscopeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      78,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      63,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      32,   26,   15,   15, 0x05,
      62,   15,   15,   15, 0x05,
      88,   79,   15,   15, 0x05,
     114,  104,   15,   15, 0x05,
     151,  144,   15,   15, 0x05,
     184,  178,   15,   15, 0x05,
     224,  218,   15,   15, 0x05,
     262,  250,   15,   15, 0x05,
     311,  291,   15,   15, 0x05,
     358,  343,   15,   15, 0x05,
     400,  383,   15,   15, 0x05,
     444,  429,   15,   15, 0x05,
     471,   15,   15,   15, 0x05,
     494,   15,   15,   15, 0x05,
     517,  250,   15,   15, 0x05,
     547,  250,   15,   15, 0x05,
     598,  577,   15,   15, 0x05,
     619,   15,   15,   15, 0x05,
     635,   15,   15,   15, 0x05,
     664,  250,   15,   15, 0x05,
     727,  697,   15,   15, 0x05,
     779,  762,   15,   15, 0x05,
     809,   15,   15,   15, 0x05,
     822,   15,   15,   15, 0x05,
     837,  830,   15,   15, 0x05,
     874,  869,   15,   15, 0x05,
     903,  891,   15,   15, 0x05,
    1082,  933,   15,   15, 0x05,
    1230, 1214,   15,   15, 0x05,
    1269, 1257,   15,   15, 0x05,
    1326, 1306,   15,   15, 0x05,
    1387, 1359,   15,   15, 0x05,
    1432,   15,   15,   15, 0x05,
    1446,   15,   15,   15, 0x05,
    1515, 1464,   15,   15, 0x05,
    1618, 1553,   15,   15, 0x05,
    1721, 1700,   15,   15, 0x05,
    1779, 1761,   15,   15, 0x05,
    1837, 1811,   15,   15, 0x05,
    1880,   15,   15,   15, 0x05,
    1892,   15,   15,   15, 0x05,
    1950, 1908,   15,   15, 0x05,
    2024, 1991,   15,   15, 0x05,
    2065,   15,   15,   15, 0x05,
    2115, 2081,   15,   15, 0x05,
    2173, 2148,   15,   15, 0x05,
    2228, 2207,   15,   15, 0x05,
    2304, 2264,   15,   15, 0x05,
    2372, 2339,   15,   15, 0x05,
    2449, 2411,   15,   15, 0x05,
    2541, 2490,   15,   15, 0x05,
    2609, 2594,   15,   15, 0x05,
    2632,   15,   15,   15, 0x05,
    2660, 2653,   15,   15, 0x05,
    2722, 2689,   15,   15, 0x05,
    2804, 2773,   15,   15, 0x05,
    2869, 2853,   15,   15, 0x05,
    2899,   15,   15,   15, 0x05,
    2925,   15,   15,   15, 0x05,
    2951,   15,   15,   15, 0x05,
    2978, 2972,   15,   15, 0x05,
    3038, 3010,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
    3078,   15,   15,   15, 0x08,
    3099,   15,   15,   15, 0x0a,
    3106,   15,   15,   15, 0x0a,
    3113,   15,   15,   15, 0x0a,
    3126,   15,   15,   15, 0x0a,
    3139,  250,   15,   15, 0x0a,
    3172, 2594,   15,   15, 0x0a,
    3203, 1908,   15,   15, 0x0a,
    3248, 2081,   15,   15, 0x0a,
    3285, 2264,   15,   15, 0x0a,
    3324, 2411,   15,   15, 0x0a,
    3364, 2490,   15,   15, 0x0a,
    3421, 3416,   15,   15, 0x0a,
    3450, 2972,   15,   15, 0x0a,
    3480, 3010,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NeuroscopeView[] = {
    "NeuroscopeView\0\0stopped()\0color\0"
    "changeBackgroundColor(QColor)\0"
    "updateContents()\0geyScale\0greyScale(bool)\0"
    "waveforms\0clusterWaveformsDisplay(bool)\0"
    "raster\0clusterRasterDisplay(bool)\0"
    "lines\0clusterVerticalLinesDisplay(bool)\0"
    "multi\0multiColumnsDisplay(bool)\0"
    "selectedIds\0channelsSelected(QList<int>)\0"
    "selectedMode,active\0modeToSet(BaseFrame::Mode,bool)\0"
    "channelsToShow\0showChannels(QList<int>)\0"
    "channelId,active\0channelColorUpdate(int,bool)\0"
    "groupId,active\0groupColorUpdate(int,bool)\0"
    "increaseAllAmplitude()\0decreaseAllAmplitude()\0"
    "increaseAmplitude(QList<int>)\0"
    "decreaseAmplitude(QList<int>)\0"
    "gain,acquisitionGain\0updateGains(int,int)\0"
    "updateDrawing()\0groupsHaveBeenModified(bool)\0"
    "channelsToBeSelected(QList<int>)\0"
    "selectedChannelDefaultOffsets\0"
    "resetChannelOffsets(QMap<int,int>)\0"
    "selectedChannels\0resetChannelGains(QList<int>)\0"
    "drawTraces()\0reset()\0status\0"
    "autocenterChannelsChanged(bool)\0show\0"
    "showLabels(bool)\0show,active\0"
    "displayCalibration(bool,bool)\0"
    "clustersProvider,name,clusterColors,active,clustersToShow,displayGroup"
    "sClusterFile,channelsSpikeGroups,nbSamplesBefore,nbSamplesAfter,cluste"
    "rsToSkip\0"
    "newClusterProvider(ClustersProvider*,QString,ItemColors*,bool,QList<in"
    "t>&,QMap<int,QList<int> >*,QMap<int,int>*,int,int,QList<int>)\0"
    "recordingLength\0newSamplingRate(qlonglong)\0"
    "name,active\0clusterProviderRemoved(QString,bool)\0"
    "name,clustersToShow\0"
    "showClusters(QString,QList<int>)\0"
    "color,name,clusterId,active\0"
    "clusterColorUpdated(QColor,QString,int,bool)\0"
    "nextCluster()\0previousCluster()\0"
    "printPainter,width,height,filePath,whiteBackground\0"
    "print(QPainter&,int,int,QString,bool)\0"
    "eventsProvider,name,eventColors,active,eventsToShow,eventsToSkip\0"
    "newEventProvider(EventsProvider*,QString,ItemColors*,bool,QList<int>&,"
    "QList<int>)\0"
    "name,active,lastFile\0"
    "eventProviderRemoved(QString,bool,bool)\0"
    "name,eventsToShow\0showEvents(QString,QList<int>&)\0"
    "color,name,eventId,active\0"
    "eventColorUpdated(QColor,QString,int,bool)\0"
    "nextEvent()\0previousEvent()\0"
    "providerName,selectedEventId,time,newTime\0"
    "eventModified(QString,int,double,double)\0"
    "active,providerName,time,newTime\0"
    "updateEvents(bool,QString,double,double)\0"
    "eventToRemove()\0providerName,selectedEventId,time\0"
    "eventRemoved(QString,int,double)\0"
    "active,providerName,time\0"
    "updateEvents(bool,QString,double)\0"
    "providerName,eventId\0"
    "newEventProperties(QString,QString)\0"
    "providerName,addedEventDescription,time\0"
    "eventAdded(QString,QString,double)\0"
    "providerName,eventsToShow,active\0"
    "updateEvents(QString,QList<int>&,bool)\0"
    "nbSamplesBefore,nbSamplesAfter,active\0"
    "waveformInformationUpdated(int,int,bool)\0"
    "width,height,backgroundImage,newOrientation,active\0"
    "positionInformationUpdated(int,int,QImage,bool,bool)\0"
    "start,duration\0timeChanged(long,long)\0"
    "positionViewClosed()\0active\0"
    "clusterProviderUpdated(bool)\0"
    "providerName,clustersToNotBrowse\0"
    "noneBrowsingClusterListUpdated(QString,QList<int>)\0"
    "providerName,eventsToNotBrowse\0"
    "noneBrowsingEventListUpdated(QString,QList<int>)\0"
    "skippedChannels\0skipStatusChanged(QList<int>)\0"
    "decreaseTheRasterHeight()\0"
    "increaseTheRasterHeight()\0"
    "updateEventDisplay()\0shown\0"
    "eventsShownInPositionView(bool)\0"
    "traceBackgroundImage,active\0"
    "traceBackgroundImageUpdate(QImage,bool)\0"
    "traceWidgetStopped()\0page()\0stop()\0"
    "accelerate()\0decelerate()\0"
    "slotChannelsSelected(QList<int>)\0"
    "setStartAndDuration(long,long)\0"
    "slotEventModified(QString,int,double,double)\0"
    "slotEventRemoved(QString,int,double)\0"
    "slotEventAdded(QString,QString,double)\0"
    "updateWaveformInformation(int,int,bool)\0"
    "updatePositionInformation(int,int,QImage,bool,bool)\0"
    "view\0positionDockClosed(QWidget*)\0"
    "setEventsInPositionView(bool)\0"
    "updateTraceBackgroundImage(QImage,bool)\0"
};

void NeuroscopeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NeuroscopeView *_t = static_cast<NeuroscopeView *>(_o);
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->changeBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->updateContents(); break;
        case 3: _t->greyScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->clusterWaveformsDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->clusterRasterDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->clusterVerticalLinesDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->multiColumnsDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->channelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 9: _t->modeToSet((*reinterpret_cast< BaseFrame::Mode(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->showChannels((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 11: _t->channelColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->groupColorUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->increaseAllAmplitude(); break;
        case 14: _t->decreaseAllAmplitude(); break;
        case 15: _t->increaseAmplitude((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 16: _t->decreaseAmplitude((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 17: _t->updateGains((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->updateDrawing(); break;
        case 19: _t->groupsHaveBeenModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->channelsToBeSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 21: _t->resetChannelOffsets((*reinterpret_cast< const QMap<int,int>(*)>(_a[1]))); break;
        case 22: _t->resetChannelGains((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 23: _t->drawTraces(); break;
        case 24: _t->reset(); break;
        case 25: _t->autocenterChannelsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->showLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->displayCalibration((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->newClusterProvider((*reinterpret_cast< ClustersProvider*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< ItemColors*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QList<int>(*)>(_a[5])),(*reinterpret_cast< QMap<int,QList<int> >*(*)>(_a[6])),(*reinterpret_cast< QMap<int,int>*(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< const QList<int>(*)>(_a[10]))); break;
        case 29: _t->newSamplingRate((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 30: _t->clusterProviderRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->showClusters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 32: _t->clusterColorUpdated((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 33: _t->nextCluster(); break;
        case 34: _t->previousCluster(); break;
        case 35: _t->print((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 36: _t->newEventProvider((*reinterpret_cast< EventsProvider*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< ItemColors*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QList<int>(*)>(_a[5])),(*reinterpret_cast< const QList<int>(*)>(_a[6]))); break;
        case 37: _t->eventProviderRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 38: _t->showEvents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 39: _t->eventColorUpdated((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 40: _t->nextEvent(); break;
        case 41: _t->previousEvent(); break;
        case 42: _t->eventModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 43: _t->updateEvents((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 44: _t->eventToRemove(); break;
        case 45: _t->eventRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 46: _t->updateEvents((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 47: _t->newEventProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 48: _t->eventAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 49: _t->updateEvents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 50: _t->waveformInformationUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 51: _t->positionInformationUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QImage(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 52: _t->timeChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 53: _t->positionViewClosed(); break;
        case 54: _t->clusterProviderUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->noneBrowsingClusterListUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 56: _t->noneBrowsingEventListUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 57: _t->skipStatusChanged((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 58: _t->decreaseTheRasterHeight(); break;
        case 59: _t->increaseTheRasterHeight(); break;
        case 60: _t->updateEventDisplay(); break;
        case 61: _t->eventsShownInPositionView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->traceBackgroundImageUpdate((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 63: _t->traceWidgetStopped(); break;
        case 64: _t->page(); break;
        case 65: _t->stop(); break;
        case 66: _t->accelerate(); break;
        case 67: _t->decelerate(); break;
        case 68: _t->slotChannelsSelected((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 69: _t->setStartAndDuration((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 70: _t->slotEventModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 71: _t->slotEventRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 72: _t->slotEventAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 73: _t->updateWaveformInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 74: _t->updatePositionInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 75: _t->positionDockClosed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 76: _t->setEventsInPositionView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->updateTraceBackgroundImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NeuroscopeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NeuroscopeView::staticMetaObject = {
    { &DockArea::staticMetaObject, qt_meta_stringdata_NeuroscopeView,
      qt_meta_data_NeuroscopeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NeuroscopeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NeuroscopeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NeuroscopeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NeuroscopeView))
        return static_cast<void*>(const_cast< NeuroscopeView*>(this));
    return DockArea::qt_metacast(_clname);
}

int NeuroscopeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 78)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    }
    return _id;
}

// SIGNAL 0
void NeuroscopeView::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NeuroscopeView::changeBackgroundColor(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NeuroscopeView::updateContents()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void NeuroscopeView::greyScale(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NeuroscopeView::clusterWaveformsDisplay(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NeuroscopeView::clusterRasterDisplay(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NeuroscopeView::clusterVerticalLinesDisplay(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NeuroscopeView::multiColumnsDisplay(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NeuroscopeView::channelsSelected(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NeuroscopeView::modeToSet(BaseFrame::Mode _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NeuroscopeView::showChannels(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NeuroscopeView::channelColorUpdate(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void NeuroscopeView::groupColorUpdate(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NeuroscopeView::increaseAllAmplitude()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void NeuroscopeView::decreaseAllAmplitude()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void NeuroscopeView::increaseAmplitude(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void NeuroscopeView::decreaseAmplitude(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void NeuroscopeView::updateGains(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void NeuroscopeView::updateDrawing()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void NeuroscopeView::groupsHaveBeenModified(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void NeuroscopeView::channelsToBeSelected(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void NeuroscopeView::resetChannelOffsets(const QMap<int,int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void NeuroscopeView::resetChannelGains(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void NeuroscopeView::drawTraces()
{
    QMetaObject::activate(this, &staticMetaObject, 23, 0);
}

// SIGNAL 24
void NeuroscopeView::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 24, 0);
}

// SIGNAL 25
void NeuroscopeView::autocenterChannelsChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void NeuroscopeView::showLabels(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void NeuroscopeView::displayCalibration(bool _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void NeuroscopeView::newClusterProvider(ClustersProvider * _t1, QString _t2, ItemColors * _t3, bool _t4, QList<int> & _t5, QMap<int,QList<int> > * _t6, QMap<int,int> * _t7, int _t8, int _t9, const QList<int> & _t10)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void NeuroscopeView::newSamplingRate(qlonglong _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void NeuroscopeView::clusterProviderRemoved(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void NeuroscopeView::showClusters(const QString & _t1, const QList<int> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void NeuroscopeView::clusterColorUpdated(const QColor & _t1, const QString & _t2, int _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void NeuroscopeView::nextCluster()
{
    QMetaObject::activate(this, &staticMetaObject, 33, 0);
}

// SIGNAL 34
void NeuroscopeView::previousCluster()
{
    QMetaObject::activate(this, &staticMetaObject, 34, 0);
}

// SIGNAL 35
void NeuroscopeView::print(QPainter & _t1, int _t2, int _t3, const QString & _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void NeuroscopeView::newEventProvider(EventsProvider * _t1, QString _t2, ItemColors * _t3, bool _t4, QList<int> & _t5, const QList<int> & _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void NeuroscopeView::eventProviderRemoved(const QString & _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void NeuroscopeView::showEvents(const QString & _t1, QList<int> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void NeuroscopeView::eventColorUpdated(const QColor & _t1, const QString & _t2, int _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void NeuroscopeView::nextEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 40, 0);
}

// SIGNAL 41
void NeuroscopeView::previousEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 41, 0);
}

// SIGNAL 42
void NeuroscopeView::eventModified(const QString & _t1, int _t2, double _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void NeuroscopeView::updateEvents(bool _t1, const QString & _t2, double _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void NeuroscopeView::eventToRemove()
{
    QMetaObject::activate(this, &staticMetaObject, 44, 0);
}

// SIGNAL 45
void NeuroscopeView::eventRemoved(const QString & _t1, int _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void NeuroscopeView::updateEvents(bool _t1, const QString & _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void NeuroscopeView::newEventProperties(const QString & _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void NeuroscopeView::eventAdded(const QString & _t1, QString _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void NeuroscopeView::updateEvents(const QString & _t1, QList<int> & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void NeuroscopeView::waveformInformationUpdated(int _t1, int _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void NeuroscopeView::positionInformationUpdated(int _t1, int _t2, QImage _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void NeuroscopeView::timeChanged(long _t1, long _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void NeuroscopeView::positionViewClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 53, 0);
}

// SIGNAL 54
void NeuroscopeView::clusterProviderUpdated(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void NeuroscopeView::noneBrowsingClusterListUpdated(const QString & _t1, const QList<int> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void NeuroscopeView::noneBrowsingEventListUpdated(const QString & _t1, const QList<int> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void NeuroscopeView::skipStatusChanged(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void NeuroscopeView::decreaseTheRasterHeight()
{
    QMetaObject::activate(this, &staticMetaObject, 58, 0);
}

// SIGNAL 59
void NeuroscopeView::increaseTheRasterHeight()
{
    QMetaObject::activate(this, &staticMetaObject, 59, 0);
}

// SIGNAL 60
void NeuroscopeView::updateEventDisplay()
{
    QMetaObject::activate(this, &staticMetaObject, 60, 0);
}

// SIGNAL 61
void NeuroscopeView::eventsShownInPositionView(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void NeuroscopeView::traceBackgroundImageUpdate(const QImage & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}
QT_END_MOC_NAMESPACE
