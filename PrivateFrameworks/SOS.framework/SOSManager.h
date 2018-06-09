/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSManager : NSObject <SOSClientProtocol, SOSInternalClientProtocol> {
    NSXPCConnection * _connection;
    int  _connectionRequestNotificationToken;
    NSObject<OS_dispatch_semaphore> * _initialStateSemaphore;
    NSString * _mostRecentSOSActivationReason;
    NSMapTable * _observerToQueue;
    bool  _sendingLocationUpdate;
    long long  _sosInitiationState;
    long long  _sosInteractiveState;
}

@property (getter=isAllowedToMessageSOSContacts, nonatomic) bool allowedToMessageSOSContacts;
@property (getter=isAutomaticCallCountdownEnabled, nonatomic) bool automaticCallCountdownEnabled;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (nonatomic) long long currentSOSInitiationState;
@property (nonatomic) long long currentSOSInteractiveState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *mostRecentSOSActivationReason;
@property (nonatomic, readonly) NSMapTable *observerToQueue;
@property (readonly) Class superclass;

+ (long long)TPInCallUILaunchReasonForSOSTriggerMechanism:(long long)arg1;
+ (void)_beginSOSCallWithCompletion:(id /* block */)arg1 triggerMechanism:(long long)arg2;
+ (void)_triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(id /* block */)arg3;
+ (bool)deviceSupportsSOS;
+ (void)notifySOSTriggerMechanismChanged;
+ (id)sharedInstance;
+ (bool)shouldTriggerSOS;
+ (void)triggerSOS;
+ (void)triggerSOSWithCompletion:(id /* block */)arg1;
+ (void)triggerSOSWithUUID:(id)arg1 completion:(id /* block */)arg2;
+ (void)triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_resetStateWithCompletion:(id /* block */)arg1;
- (void)_waitForInitialState;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)connection;
- (int)connectionRequestNotificationToken;
- (long long)currentSOSInitiationState;
- (long long)currentSOSInteractiveState;
- (void)dealloc;
- (void)didDismissClientSOSBeforeSOSCall:(long long)arg1;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)dismissClientSOSWithCompletion:(id /* block */)arg1;
- (void)dismissSOSWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isAllowedToMessageSOSContacts;
- (bool)isAutomaticCallCountdownEnabled;
- (bool)isSendingLocationUpdate;
- (bool)longPressTriggersEmergencySOS;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)arg1;
- (id)mostRecentSOSActivationReason;
- (id)observerToQueue;
- (id)remoteSOSEngineProxy;
- (void)removeObserver:(id)arg1;
- (void)setAllowedToMessageSOSContacts:(bool)arg1;
- (void)setAutomaticCallCountdownEnabled:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionRequestNotificationToken:(int)arg1;
- (void)setCurrentSOSInitiationState:(long long)arg1;
- (void)setCurrentSOSInteractiveState:(long long)arg1;
- (void)setLongPressTriggersEmergencySOS:(bool)arg1;
- (void)setMostRecentSOSActivationReason:(id)arg1;
- (void)setSendingLocationUpdate:(bool)arg1;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)stopSendingLocationUpdate;
- (void)updateClientCurrentSOSInitiationState:(long long)arg1;
- (void)updateClientCurrentSOSInteractiveState:(long long)arg1;
- (void)willStartSendingLocationUpdate;

@end
