/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    HMDBulletinBoard * _bulletinBoard;
    NSString * _bulletinImagesDirectory;
    NSMutableSet * _characteristicsList;
    NSString * _logID;
    NSMutableSet * _monitoredCharacteristicsList;
    HMFMessageDispatcher * _msgDispatcher;
    HMDNotificationRegistration * _notificationRegistration;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _snapShotNotificationResponseTimers;
    HMDCameraSnapshotManager * _snapshotManager;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) HMDBulletinBoard *bulletinBoard;
@property (nonatomic, readonly) NSString *bulletinImagesDirectory;
@property (nonatomic, readonly) NSMutableSet *characteristicsList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSMutableSet *monitoredCharacteristicsList;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSMutableSet *snapShotNotificationResponseTimers;
@property (nonatomic, readonly) HMDCameraSnapshotManager *snapshotManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_characteristicsUpdated:(id)arg1 modifiedCharacteristics:(id)arg2;
- (void)_enableNotificationForCharacteristics:(id)arg1 newMonitoredCharacteristicsList:(id)arg2;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleRemoteNotification:(id)arg1;
- (void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5;
- (void)_monitorForEventsForServices:(id)arg1;
- (void)_removeBulletins:(id)arg1 sessionID:(id)arg2;
- (void)_sendReleaseSnapshot:(id)arg1;
- (void)_subscribeToNotifications;
- (id)accessory;
- (id)bulletinBoard;
- (id)bulletinImagesDirectory;
- (id)characteristicsList;
- (void)dealloc;
- (void)handleAccessoryReachable:(id)arg1;
- (void)handleRemoteNotificationGenerated:(id)arg1;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)monitorForEventsForServices:(id)arg1;
- (id)monitoredCharacteristicsList;
- (id)msgDispatcher;
- (id)notificationRegistration;
- (void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (void)setSnapShotNotificationResponseTimers:(id)arg1;
- (id)snapShotNotificationResponseTimers;
- (id)snapshotManager;
- (void)timerDidFire:(id)arg1;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
