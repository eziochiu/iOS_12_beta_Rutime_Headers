/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMRemoteLoginHandler : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    HMRemoteLoginAnisetteDataProvider * _anisetteDataProvider;
    _HMContext * _context;
    NSString * _currentSessionID;
    ACAccount * _loggedInAccount;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider;
@property (nonatomic, retain) _HMContext *context;
@property (getter=isControllable, readonly) bool controllable;
@property (nonatomic, retain) NSString *currentSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACAccount *loggedInAccount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isSessionInProgress, nonatomic, readonly) bool sessionInProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callAccountUpdateDelegate:(id)arg1;
- (void)_companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_configureWithContext:(id)arg1;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryProxiedDevice:(id /* block */)arg1;
- (void)_signout:(id /* block */)arg1;
- (id)accessory;
- (id)anisetteDataProvider;
- (id)clientQueue;
- (void)companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)context;
- (id)currentSessionID;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isControllable;
- (bool)isSessionInProgress;
- (id)loggedInAccount;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)queryProxiedDevice:(id /* block */)arg1;
- (void)registerForMessages;
- (void)setContext:(id)arg1;
- (void)setCurrentSessionID:(id)arg1;
- (void)setLoggedInAccount:(id)arg1;
- (void)signout:(id /* block */)arg1;
- (id)uniqueIdentifier;
- (void)updateLoggedInAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_appleMusicInAppAuthenticationContext;

@end
