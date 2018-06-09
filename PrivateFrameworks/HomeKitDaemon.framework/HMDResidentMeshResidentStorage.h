/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentMeshResidentStorage : HMFObject <HMFTimerDelegate> {
    NSMutableDictionary * _accessoryListWithLinkQuality;
    NSMutableSet * _accessoryUUIDs;
    NSSet * _lastSentAccessoryUUIDs;
    HMDResidentMesh * _owner;
    HMDDevice * _resident;
    HMFTimer * _transmitTimer;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryListWithLinkQuality;
@property (nonatomic, retain) NSMutableSet *accessoryUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *lastSentAccessoryUUIDs;
@property (nonatomic) HMDResidentMesh *owner;
@property (nonatomic) HMDDevice *resident;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *transmitTimer;

- (void).cxx_destruct;
- (void)_addAccessory:(id)arg1 activateTimer:(bool)arg2;
- (bool)_addAccessoryWithLinkQuality:(id)arg1 toList:(id)arg2 completion:(id /* block */)arg3;
- (id)_buildPayload;
- (void)_removeAccessory:(id)arg1 activateTimer:(bool)arg2;
- (void)_transmitAfter:(double)arg1;
- (void)_transmitStatus:(bool)arg1;
- (id)accessoryListWithLinkQuality;
- (id)accessoryUUIDs;
- (id)initWithResident:(id)arg1 owner:(id)arg2;
- (id)lastSentAccessoryUUIDs;
- (id)owner;
- (id)resident;
- (void)setAccessoryListWithLinkQuality:(id)arg1;
- (void)setAccessoryUUIDs:(id)arg1;
- (void)setLastSentAccessoryUUIDs:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setResident:(id)arg1;
- (void)setTransmitTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)transmitTimer;

@end
