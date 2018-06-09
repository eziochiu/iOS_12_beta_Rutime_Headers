/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDSettingsService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
    NSHashTable * _settingsUpdateListeners;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handleLostXPCConnection;
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)_queue_registerForSettingsUpdatesIfRequired;
- (bool)addSettingsUpdateListener:(id)arg1 error:(id*)arg2;
- (id)behaviorSettingsReturningError:(id*)arg1;
- (id)clientIdentifier;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (id)phoneCallBypassSettingsReturningError:(id*)arg1;
- (void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (bool)removeSettingsUpdateListener:(id)arg1 error:(id*)arg2;
- (id)scheduleSettingsReturningError:(id*)arg1;
- (bool)setBehaviorSettings:(id)arg1 returningError:(id*)arg2;
- (bool)setPhoneCallBypassSettings:(id)arg1 returningError:(id*)arg2;
- (bool)setScheduleSettings:(id)arg1 returningError:(id*)arg2;

@end
