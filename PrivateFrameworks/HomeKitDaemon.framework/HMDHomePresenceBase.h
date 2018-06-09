/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomePresenceBase : HMFObject <HMDHomeMessageReceiver, HMFLogging> {
    HMDHome * _home;
    NSString * _logString;
    HMFMessageDispatcher * _msgDispatcher;
    HMDNotificationRegistration * _notificationRegistration;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSString *logString;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_initialize:(id)arg1;
- (void)_registerForMessages;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (id)home;
- (id)logIdentifier;
- (id)logString;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)notificationRegistration;
- (void)residentChanged;
- (void)setHome:(id)arg1;
- (void)setLogString:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)timerFired:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
