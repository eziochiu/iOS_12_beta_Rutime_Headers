/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTriggerSession : HMFObject <HMDHomeMessageReceiver, HMFDumpState, HMFLogging> {
    HMDDevice * _currentDevice;
    HMDEventTrigger * _eventTrigger;
    NSUUID * _eventTriggerUUID;
    NSString * _logString;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _sessionID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HMDEventTrigger *eventTrigger;
@property (nonatomic, readonly) NSUUID *eventTriggerUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logString;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_registerForMessages;
- (id)currentDevice;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (id)eventTrigger;
- (id)eventTriggerUUID;
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
- (id)logIdentifier;
- (id)logString;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (bool)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 responseHandler:(id /* block */)arg4;
- (bool)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 target:(id)arg4 responseHandler:(id /* block */)arg5;
- (bool)sendResidentMessage:(id)arg1 payload:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)sessionID;
- (void)setEventTrigger:(id)arg1;
- (id)workQueue;

@end
