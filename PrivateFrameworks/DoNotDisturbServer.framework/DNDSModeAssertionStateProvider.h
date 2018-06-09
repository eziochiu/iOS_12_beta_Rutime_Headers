/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSModeAssertionStateProvider : NSObject <BBObserverDelegate, DNDSStateProvider> {
    unsigned long long  _bbState;
    DNDSState * _currentState;
    <DNDSModeAssertionStateProviderDataSource> * _dataSource;
    BBObserver * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _stateUpdateListeners;
}

@property (nonatomic) <DNDSModeAssertionStateProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_queue_recalculateState;
- (void)addUpdateListener:(id)arg1;
- (id)currentStateWithError:(id*)arg1;
- (id)dataSource;
- (id)init;
- (void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned long long)arg2;
- (void)recalculateState;
- (void)removeUpdateListener:(id)arg1;
- (void)setDataSource:(id)arg1;

@end
