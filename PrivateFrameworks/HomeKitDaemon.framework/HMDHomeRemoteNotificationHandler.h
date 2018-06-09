/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeRemoteNotificationHandler : HMFObject <HMFLogging> {
    NSString * _logID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)logID;
- (id)logIdentifier;
- (void)sendConfigureBulletinNotification:(id)arg1;
- (void)sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2;
- (id)workQueue;

@end
