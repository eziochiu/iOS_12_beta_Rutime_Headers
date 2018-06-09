/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDMonitorManager : NSObject {
    id /* block */  _generalHistoricalHandler;
    id /* block */  _generalInstantHandler;
    NSMutableDictionary * _historicalHandlerMap;
    NSMutableDictionary * _instantHandlerMap;
    NSMutableSet * _lazyMonitorNames;
    NSArray * _monitorManagers;
    NSObject<OS_dispatch_queue> * _monitorWorkQueue;
    NSMutableDictionary * _monitors;
}

+ (id)monitorManagerForEventStreams:(id)arg1;

- (void).cxx_destruct;
- (void)_addMonitor:(id)arg1 forStreamName:(id)arg2;
- (id)_allMonitors;
- (id)_allStreamNames;
- (id)_createMonitorManagers;
- (id)_currentEventForStreamName:(id)arg1;
- (bool)_hasMonitorForStreamName:(id)arg1;
- (id)_lastUpdateForStreamName:(id)arg1;
- (id)_monitorForStreamName:(id)arg1;
- (void)_removeMonitorForStreamName:(id)arg1;
- (void)_setHistoricalHandler:(id /* block */)arg1 forStreamName:(id)arg2;
- (void)_setInstantHandler:(id /* block */)arg1 forStreamName:(id)arg2;
- (void)_startMonitorForStreamName:(id)arg1;
- (void)_stopMonitorForStreamName:(id)arg1;
- (void)_updateForStreamName:(id)arg1;
- (void)addMonitor:(id)arg1;
- (id)currentEvent;
- (id)currentEventForStream:(id)arg1;
- (void)deliverNotificationEvent:(id)arg1;
- (bool)hasMonitor:(id)arg1;
- (id)init;
- (id)initWithEventStreams:(id)arg1;
- (id)lastUpdate;
- (id)lastUpdateForStream:(id)arg1;
- (void)populateCurrentValueForStreamName:(id)arg1;
- (void)removeMonitor:(id)arg1;
- (void)setHistoricalHandler:(id /* block */)arg1;
- (void)setHistoricalHandler:(id /* block */)arg1 forStream:(id)arg2;
- (void)setInstantHandler:(id /* block */)arg1;
- (void)setInstantHandler:(id /* block */)arg1 forStream:(id)arg2;
- (void)start;
- (void)startMonitorForStream:(id)arg1;
- (void)stop;
- (void)stopMonitorForStream:(id)arg1;
- (void)update;
- (void)updateForStream:(id)arg1;

@end