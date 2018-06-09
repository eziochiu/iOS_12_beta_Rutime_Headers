/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTriggerUserConfirmationSession : HMDEventTriggerSession <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, HMFTimerDelegate> {
    HMDEventTriggerExecutionSession * _executionSession;
    HomeKitEventTriggerUserConfirmationReceiverSessionEvent * _metricEvent;
    NSMutableArray * _metricSendEvents;
    HMDEventTriggerDevice * _requestingDevice;
    HMDTriggerConfirmationTimer * _userResponseTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HMDEventTriggerExecutionSession *executionSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HomeKitEventTriggerUserConfirmationReceiverSessionEvent *metricEvent;
@property (nonatomic, retain) NSMutableArray *metricSendEvents;
@property (nonatomic, readonly) HMDEventTriggerDevice *requestingDevice;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDTriggerConfirmationTimer *userResponseTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_askForUserPermissionFromDevice:(id)arg1 executionSessionID:(id)arg2;
- (void)_createBulletinNotification;
- (void)_handleUserPermissionRemoteResponse:(id)arg1;
- (void)_handleUserPermissionRemoveDialogRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_removeUserDialog:(id)arg1;
- (void)_sessionComplete;
- (void)_userResponse:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)askForUserPermission:(id)arg1;
- (void)createBulletinNotification;
- (void)dealloc;
- (id)executionSession;
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 requestingDevice:(id)arg5;
- (id)metricEvent;
- (id)metricSendEvents;
- (id)requestingDevice;
- (void)setExecutionSession:(id)arg1;
- (void)setMetricEvent:(id)arg1;
- (void)setMetricSendEvents:(id)arg1;
- (void)setUserResponseTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)userDidConfirmExecute:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)userResponseTimer;

@end
