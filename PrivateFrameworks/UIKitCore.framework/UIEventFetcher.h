/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIEventFetcher : NSObject {
    id /* block */  _addToFilteredEventsBlock;
    struct __CFRunLoop { } * _cfRunLoop;
    double  _commitTimeForTouchEvents;
    long long  _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    bool  _didDispatchOneMoveEventSinceLastDisplayLinkCallback;
    CADisplayLink * _displayLink;
    <UIEventFetcherSink> * _eventFetcherSink;
    NSMutableArray * _eventFilters;
    id /* block */  _gameControllerEventFilterGenerator;
    NSMutableArray * _incomingHIDEvents;
    NSMutableArray * _incomingHIDEventsFiltered;
    double  _lastImportantEventTimestamp;
    double  _latestMoveDragEventResendTimestamp;
    double  _latestMoveDragEventTimestamp;
    NSMutableDictionary * _latestMoveDragEventsBySessionID;
    id /* block */  _receiveBlock;
    bool  _shouldSignalOnDisplayLink;
    struct __CFRunLoopSource { } * _triggerHandOffEventsRunLoopSource;
    id /* block */  _watchSystemAppFilter;
}

@property (nonatomic) double commitTimeForTouchEvents;
@property (nonatomic, retain) <UIEventFetcherSink> *eventFetcherSink;
@property (nonatomic) double latestMoveDragEventResendTimestamp;
@property (nonatomic) double latestMoveDragEventTimestamp;
@property (nonatomic, retain) NSMutableDictionary *latestMoveDragEventsBySessionID;
@property (nonatomic) bool shouldSignalOnDisplayLink;

- (void).cxx_destruct;
- (void)_addHIDEventFilter:(id /* block */)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent { }*)arg1;
- (void)_removeHIDEventFilter:(id /* block */)arg1;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDGameControllerEventObserver:(id /* block */)arg1 onQueue:(id)arg2;
- (void)_setupFilterChain;
- (double)commitTimeForTouchEvents;
- (void)displayLinkDidFire:(id)arg1;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (id)eventFetcherSink;
- (void)filterEvents;
- (id)init;
- (double)latestMoveDragEventResendTimestamp;
- (double)latestMoveDragEventTimestamp;
- (id)latestMoveDragEventsBySessionID;
- (void)setCommitTimeForTouchEvents:(double)arg1;
- (void)setEventFetcherSink:(id)arg1;
- (void)setLatestMoveDragEventResendTimestamp:(double)arg1;
- (void)setLatestMoveDragEventTimestamp:(double)arg1;
- (void)setLatestMoveDragEventsBySessionID:(id)arg1;
- (void)setShouldSignalOnDisplayLink:(bool)arg1;
- (void)setupForRunLoop:(id)arg1;
- (void)setupThreadAndRun;
- (bool)shouldSignalOnDisplayLink;
- (void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(long long)arg2;
- (void)threadMain;

@end
