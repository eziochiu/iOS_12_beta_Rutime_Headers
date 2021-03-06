/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration> {
    HMDAppleAccountManager * _appleAccountManager;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDRemoteAccountManager * _remoteAccountManager;
}

@property (nonatomic, readonly) NSArray *accounts;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)__handleAddedRemoteAccount:(id)arg1;
- (void)__handleAppleAccountUpdate:(id)arg1;
- (void)__handleRemovedRemoteAccount:(id)arg1;
- (void)_resolveAccountForHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)accountExistsForHandle:(id)arg1;
- (id)accountForHandle:(id)arg1;
- (id)accountForHandle:(id)arg1 exists:(bool*)arg2;
- (id)accounts;
- (id)appleAccountManager;
- (id)attributeDescriptions;
- (id)clientQueue;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)deviceExistsForDevice:(id)arg1;
- (bool)deviceExistsForHandle:(id)arg1;
- (id)deviceForDevice:(id)arg1;
- (id)deviceForDevice:(id)arg1 exists:(bool*)arg2;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForHandle:(id)arg1 exists:(bool*)arg2;
- (id)init;
- (id)initWithAppleAccountManager:(id)arg1 remoteAccountManager:(id)arg2;
- (id)remoteAccountManager;

@end
