/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMRoom : NSObject <HFPrettyDescription, HFReorderableHomeKitObject, HFStateDumpSerializable, HFWallaperHost, HMFMessageReceiver, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    HMApplicationData * _applicationData;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *hf_allCameraProfiles;
@property (nonatomic, readonly) NSArray *hf_allServices;
@property (nonatomic, readonly) NSSet *hf_allVisibleServices;
@property (nonatomic, readonly) NSArray *hf_allZones;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) NSArray *hf_unpairedHomePods;
@property (nonatomic, readonly) UIImage *hf_wallpaperImage;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5;
- (void)_handleRoomRenamedNotification:(id)arg1;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRoomName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accessories;
- (id)applicationData;
- (id)clientQueue;
- (void)dealloc;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)propertyQueue;
- (void)setApplicationData:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_allCameraProfiles;
- (id)hf_allServices;
- (id)hf_allVisibleServices;
- (id)hf_allZones;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_unpairedHomePods;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateWallpaperImage:(id)arg1;
- (id)hf_wallpaperImage;

@end