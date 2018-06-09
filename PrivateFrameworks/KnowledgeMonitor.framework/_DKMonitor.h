/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKMonitor : NSObject <_DKHistoricalMonitor, _DKInstantMonitor> {
    NSString * _bootSessionUUID;
    _DKEvent * _currentEvent;
    id /* block */  _eventComparator;
    NSObject<OS_dispatch_queue> * _eventQueue;
    id /* block */  _filter;
    NSMutableDictionary * _historicalState;
    NSMutableDictionary * _instantState;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _references;
    NSDictionary * _state;
    id /* block */  historicalHandler;
    id /* block */  instantHandler;
    NSDate * lastUpdate;
}

@property (nonatomic, readonly, copy) NSSet *classesForSecureStateDecoding;
@property (nonatomic, retain) _DKEvent *currentEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventComparator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, copy) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalHandler;
@property (nonatomic, readonly) NSMutableDictionary *historicalState;
@property (nonatomic, copy) id /* block */ instantHandler;
@property (nonatomic, readonly) NSMutableDictionary *instantState;
@property (nonatomic, retain) NSDate *lastUpdate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long references;
@property (readonly) Class superclass;

+ (id)entitlements;
+ (id)eventStream;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (id)classesForSecureStateDecoding;
- (id)currentEvent;
- (void)dealloc;
- (id /* block */)eventComparator;
- (id)eventQueue;
- (id /* block */)filter;
- (id /* block */)historicalHandler;
- (id)historicalState;
- (id)init;
- (id /* block */)instantHandler;
- (bool)instantMonitorNeedsActivation;
- (bool)instantMonitorNeedsDeactivation;
- (id)instantState;
- (id)lastUpdate;
- (id)loadState;
- (id)queue;
- (long long)references;
- (void)saveState;
- (void)setCurrentEvent:(id)arg1;
- (void)setCurrentEvent:(id)arg1 inferHistoricalState:(bool)arg2;
- (void)setEventComparator:(id /* block */)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setHistoricalHandler:(id /* block */)arg1;
- (void)setInstantHandler:(id /* block */)arg1;
- (void)setLastUpdate:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)update;

@end
