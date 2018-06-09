/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIdentityRegistry : HMFObject <HMFDumpState, HMFLogging> {
    NSRecursiveLock * _lock;
    NSMutableArray * _registeredIdentities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSRecursiveLock *lock;
@property (readonly) NSArray *registeredIdentities;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)accountForIdentity:(id)arg1;
- (id)attributeDescriptions;
- (void)deregisterIdentity:(id)arg1 object:(id)arg2;
- (id)dumpState;
- (id)identitiesForAccount:(id)arg1;
- (id)identitiesForDevice:(id)arg1;
- (id)identityForIdentifier:(id)arg1;
- (id)init;
- (id)lock;
- (void)registerIdentity:(id)arg1 account:(id)arg2 object:(id)arg3;
- (void)registerIdentity:(id)arg1 device:(id)arg2 object:(id)arg3;
- (id)registeredIdentities;
- (void)reset;

@end
