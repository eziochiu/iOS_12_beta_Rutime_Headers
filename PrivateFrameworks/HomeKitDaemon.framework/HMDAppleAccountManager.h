/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFTimerDelegate, IDSServiceDelegate> {
    HMDAccount * _account;
    HMFExponentialBackoffTimer * _accountChangeBackoffTimer;
    HMDAppleAccountContext * _accountContext;
    ACAccountStore * _accountStore;
    HMDBackingStore * _backingStore;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMFTimer * _devicesChangeBackoffTimer;
    bool  _monitoring;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _resolved;
    IDSService * _service;
}

@property (retain) HMDAccount *account;
@property (nonatomic, readonly) HMFExponentialBackoffTimer *accountChangeBackoffTimer;
@property (readonly) HMDAppleAccountContext *accountContext;
@property (readonly) ACAccountStore *accountStore;
@property (nonatomic, retain) HMDBackingStore *backingStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (nonatomic, readonly) HMFTimer *devicesChangeBackoffTimer;
@property (readonly) unsigned long long hash;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isResolved, nonatomic) bool resolved;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;

+ (id)cloudOptions;
+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)__deviceAddedToCurrentAccount:(id)arg1;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;
- (id)account;
- (id)accountChangeBackoffTimer;
- (id)accountContext;
- (id)accountStore;
- (id)backingStore;
- (id)clientQueue;
- (id)device;
- (id)devicesChangeBackoffTimer;
- (id)init;
- (id)initWithIDSService:(id)arg1;
- (bool)isModelCurrentAccount:(id)arg1;
- (bool)isMonitoring;
- (bool)isResolved;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (id)propertyQueue;
- (id)service;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setAccountContext:(id)arg1;
- (void)setBackingStore:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setResolved:(bool)arg1;
- (bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (bool)shouldCacheAccount:(id)arg1;
- (bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (bool)shouldSyncAccount:(id)arg1;
- (bool)shouldSyncDevice:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;
- (void)updateAccountContext;

@end
