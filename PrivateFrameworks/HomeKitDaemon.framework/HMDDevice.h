/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDevice : HMFObject <HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging, HMFMerging, HMFObject, NSSecureCoding> {
    HMDAccount * _account;
    HMDDeviceCapabilities * _capabilities;
    bool  _cloudTracked;
    bool  _dirty;
    NSSet * _handles;
    NSUUID * _identifier;
    NSUUID * _idsIdentifierHash;
    bool  _locallyTracked;
    NSUUID * _modelIdentifier;
    NSString * _name;
    HMFProductInfo * _productInfo;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDHomeKitVersion * _version;
}

@property HMDAccount *account;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) HMDDeviceCapabilities *capabilities;
@property (getter=isCloudTracked) bool cloudTracked;
@property (getter=isCurrentDevice, readonly) bool currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirty) bool dirty;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSArray *identities;
@property (readonly, copy) NSUUID *idsIdentifier;
@property (setter=setIDSIdentifierHash:, copy) NSUUID *idsIdentifierHash;
@property (getter=isLocallyTracked) bool locallyTracked;
@property (nonatomic, readonly) NSUUID *modelIdentifier;
@property (nonatomic, readonly) NSUUID *modelParentIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (copy) HMFProductInfo *productInfo;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) HMDHomeKitVersion *version;

+ (id)currentDeviceWithIDSService:(id)arg1;
+ (id)destinationForDevice:(id)arg1 service:(id)arg2;
+ (id)deviceWithDestination:(id)arg1;
+ (id)deviceWithHandle:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__updateDeviceWithActions:(id)arg1;
- (id)account;
- (id)attributeDescriptions;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)capabilities;
- (id)destination;
- (id)deviceForIDSService:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)globalHandles;
- (id)handles;
- (unsigned long long)hash;
- (id)identifier;
- (id)identities;
- (id)idsIdentifier;
- (id)idsIdentifierHash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 name:(id)arg3 productInfo:(id)arg4 version:(id)arg5 capabilities:(id)arg6;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (bool)isBackingStorageEqual:(id)arg1;
- (bool)isCloudTracked;
- (bool)isCurrentDevice;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isLocallyTracked;
- (bool)isRelatedToDevice:(id)arg1;
- (id)localHandles;
- (id)logIdentifier;
- (bool)mergeObject:(id)arg1;
- (id)modelBackedObjects;
- (id)modelIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelParentIdentifier;
- (id)name;
- (id)productInfo;
- (id)propertyQueue;
- (void)setAccount:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setCloudTracked:(bool)arg1;
- (void)setDirty:(bool)arg1;
- (void)setHandles:(id)arg1;
- (void)setIDSIdentifierHash:(id)arg1;
- (void)setLocallyTracked:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setProductInfo:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateVersion:(id)arg1;
- (void)updateWithDevice:(id)arg1;
- (id)version;

@end
