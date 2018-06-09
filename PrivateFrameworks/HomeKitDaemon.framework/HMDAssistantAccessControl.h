/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssistantAccessControl : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging, HMFObject, NSSecureCoding> {
    NSMutableSet * _accessories;
    unsigned long long  _cachedHash;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _enabled;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDUser * _user;
}

@property (readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) unsigned long long cachedHash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMDAssistantAccessControlModel *model;
@property (readonly, copy) NSUUID *modelID;
@property unsigned long long options;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property HMDUser *user;

+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 error:(id*)arg3;
+ (bool)isAccessorySupported:(id)arg1;
+ (id)logCategory;
+ (id)modelIDNamespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessories;
- (void)addAccessory:(id)arg1;
- (unsigned long long)cachedHash;
- (id)clientQueue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 model:(id)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)model;
- (id)modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;
- (unsigned long long)options;
- (id)propertyDescription;
- (id)propertyQueue;
- (void)removeAccessoriesAddedByOldController:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUser:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)user;

@end
