/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate> {
    HMFTimer * _coalesceTimer;
    bool  _delaySupported;
    HMFTimer * _delayTimer;
    NSString * _destination;
    HMDHome * _home;
    NSUUID * _notificationUpdateIdentifier;
    NSString * _requestIdentifier;
    NSMutableSet * _updatedCharacteristics;
    NSMutableSet * _updatedMediaProperties;
}

@property (nonatomic, retain) HMFTimer *coalesceTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delaySupported;
@property (nonatomic, retain) HMFTimer *delayTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSUUID *notificationUpdateIdentifier;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *updatedCharacteristics;
@property (nonatomic, retain) NSMutableSet *updatedMediaProperties;

- (void).cxx_destruct;
- (id)_beginCoalesce:(bool)arg1;
- (id)_dispatchNotification;
- (id)coalesceTimer;
- (bool)delaySupported;
- (id)delayTimer;
- (id)destination;
- (id)home;
- (id)initWithDestination:(id)arg1 watchDevice:(bool)arg2 withRequestIdentifier:(id)arg3 home:(id)arg4;
- (id)notificationUpdateIdentifier;
- (id)requestIdentifier;
- (id)sendNotificationForCharacteristicChanges:(id)arg1 withRequestIdentifier:(id)arg2;
- (id)sendNotificationForMediaProperties:(id)arg1 withRequestIdentifier:(id)arg2;
- (void)setCoalesceTimer:(id)arg1;
- (void)setDelaySupported:(bool)arg1;
- (void)setDelayTimer:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setNotificationUpdateIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setUpdatedCharacteristics:(id)arg1;
- (void)setUpdatedMediaProperties:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)updatedCharacteristics;
- (id)updatedMediaProperties;

@end
