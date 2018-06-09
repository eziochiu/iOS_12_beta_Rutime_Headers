/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, NSCopying, NSSecureCoding> {
    HMDDeviceCapabilitiesModel * _objectModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *modelIdentifier;
@property (nonatomic, retain) NSUUID *modelParentIdentifier;
@property (nonatomic, retain) HMDDeviceCapabilitiesModel *objectModel;
@property (getter=isRemoteGatewayCapable, nonatomic, readonly) bool remoteGatewayCapable;
@property (getter=isResidentCapable, nonatomic, readonly) bool residentCapable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssistantAccessControl;
@property (nonatomic, readonly) bool supportsCloudDataSync;
@property (nonatomic, readonly) bool supportsDeviceSetup;
@property (nonatomic, readonly) bool supportsHomeInvitation;
@property (nonatomic, readonly) bool supportsKeyTransferClient;
@property (nonatomic, readonly) bool supportsKeyTransferServer;
@property (nonatomic, readonly) bool supportsKeychainSync;
@property (nonatomic, readonly) bool supportsStandaloneMode;
@property (nonatomic, readonly) bool supportsTargetControl;
@property (nonatomic, readonly) bool supportsWholeHouseAudio;

+ (id)deviceCapabilities;
+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1;
+ (bool)isAppleMediaAccessory;
+ (bool)supportsCameraSnapshotRequestViaRelay;
+ (bool)supportsCustomerReset;
+ (bool)supportsDismissUserNotificationAndDialog;
+ (bool)supportsHomeApp;
+ (bool)supportsIntentDonation;
+ (bool)supportsLocalization;
+ (bool)supportsReceivingRemoteCameraStream;
+ (bool)supportsRemoteAccess;
+ (bool)supportsSecureCoding;
+ (bool)supportsTargetControllerAutoConfigure;
+ (bool)supportsUserNotifications;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithProductInfo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRemoteGatewayCapable;
- (bool)isResidentCapable;
- (id)modelBackedObjects;
- (id)modelCopyWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
- (id)modelIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelParentIdentifier;
- (id)objectModel;
- (void)setModelParentIdentifier:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (bool)supportsAssistantAccessControl;
- (bool)supportsCloudDataSync;
- (bool)supportsDeviceSetup;
- (bool)supportsHomeInvitation;
- (bool)supportsKeyTransferClient;
- (bool)supportsKeyTransferServer;
- (bool)supportsKeychainSync;
- (bool)supportsStandaloneMode;
- (bool)supportsTargetControl;
- (bool)supportsWholeHouseAudio;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end
