/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccount : HMFObject <HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging, HMFMerging, NSFastEnumeration, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableSet * _devices;
    NSSet * _handles;
    HMDAccountIdentifier * _identifier;
    <HMDAccountManager> * _manager;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (getter=isAuthenticated, readonly) bool authenticated;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *contactName;
@property (getter=isCurrentAccount, readonly) bool currentAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *devices;
@property (readonly, copy) NSArray *handles;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMDAccountIdentifier *identifier;
@property (readonly, copy) NSArray *identities;
@property <HMDAccountManager> *manager;
@property (nonatomic, readonly) NSUUID *modelIdentifier;
@property (nonatomic, readonly) NSUUID *modelParentIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) bool shouldCache;
@property (readonly) Class superclass;

+ (id)accountWithAccountContext:(id)arg1 service:(id)arg2;
+ (id)accountWithDestination:(id)arg1;
+ (id)accountWithHandle:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__notifyDelegateUpdatedDevice:(id)arg1;
- (id)accountHandleWithModelIdentifier:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)addHandle:(id)arg1;
- (id)attributeDescriptions;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)clientQueue;
- (id)cloudSyncedModelsForCurrentAccountChange:(id)arg1;
- (id)contact;
- (id)contactName;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)currentDevice;
- (id)destination;
- (id)deviceForHandle:(id)arg1;
- (id)deviceWithModelIdentifier:(id)arg1;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)handles;
- (unsigned long long)hash;
- (id)identifier;
- (id)identities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;
- (id)initWithObjectModel:(id)arg1;
- (bool)isAuthenticated;
- (bool)isCurrentAccount;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccount:(id)arg1;
- (bool)isRelatedToAccount:(id)arg1;
- (id)locallySyncedModelsForCurrentAccountChange:(id)arg1;
- (id)logIdentifier;
- (id)manager;
- (bool)mergeObject:(id)arg1;
- (id)modelBackedObjects;
- (id)modelIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelParentIdentifier;
- (id)propertyQueue;
- (void)removeDevice:(id)arg1;
- (void)removeHandle:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setManager:(id)arg1;
- (id)shortDescription;
- (bool)shouldCache;
- (bool)shouldMergeObject:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end
