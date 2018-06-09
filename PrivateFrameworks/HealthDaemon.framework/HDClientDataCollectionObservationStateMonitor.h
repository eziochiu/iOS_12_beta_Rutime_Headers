/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver> {
    HDXPCClient * _client;
    <HDClientDataCollectionObservationStateMonitorDelegate> * _delegate;
    bool  _invalidated;
    NSLock * _lock;
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDClientDataCollectionObservationStateMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_componentStateDidChange;
- (id)client;
- (id)currentObserverState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithClient:(id)arg1 profile:(id)arg2 delegate:(id)arg3;
- (void)invalidate;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (id)profile;
- (void)setDelegate:(id)arg1;
- (void)workoutManagerDidChangeState:(id)arg1;

@end
