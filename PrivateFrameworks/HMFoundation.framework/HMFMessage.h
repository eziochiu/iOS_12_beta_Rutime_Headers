/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMessage : HMFObject <NSCopying, NSMutableCopying> {
    HMFMessageInternal * _internal;
}

@property (nonatomic, readonly) HMFActivity *activity;
@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifier;
@property (getter=isAuthorizedForHomeDataAccess, nonatomic, readonly) bool authorizedForHomeDataAccess;
@property (getter=isAuthorizedForLocationAccess, nonatomic, readonly) bool authorizedForLocationAccess;
@property (getter=isAuthorizedForMicrophoneAccess, nonatomic, readonly) bool authorizedForMicrophoneAccess;
@property (getter=isBackground, nonatomic, readonly) bool background;
@property (readonly) NSString *clientName;
@property (nonatomic, readonly, copy) NSString *companionAppBundleIdentifier;
@property (nonatomic, retain) HMFMessageDestination *destination;
@property (nonatomic, readonly, copy) NSString *effectiveLocationBundleIdentifier;
@property (getter=isEntitledForAPIAccess, nonatomic, readonly) bool entitledForAPIAccess;
@property (getter=isEntitledForBackgroundMode, nonatomic, readonly) bool entitledForBackgroundMode;
@property (getter=isEntitledForSPIAccess, nonatomic, readonly) bool entitledForSPIAccess;
@property (nonatomic, readonly, copy) NSDictionary *headers;
@property (nonatomic, copy) NSUUID *identifier;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (nonatomic, readonly) HMFMessageInternal *internal;
@property (getter=isLocationAuthorized, nonatomic, readonly) bool locationAuthorized;
@property (nonatomic, copy) NSDictionary *messagePayload;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) HMDConnectionProxy *proxyConnection;
@property (nonatomic, readonly) long long qualityOfService;
@property (getter=isRemote, nonatomic, readonly) bool remote;
@property (nonatomic, readonly) unsigned long long remoteRestriction;
@property (nonatomic, readonly) HMDDevice *remoteSourceDevice;
@property (nonatomic, readonly) NSString *remoteSourceID;
@property (nonatomic, readonly) HAPPairingIdentity *remoteUserPairingIdentity;
@property (nonatomic, readonly) bool requiresNoSPIEntitlement;
@property (nonatomic, readonly) bool requiresSPIEntitlement;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (getter=isSecureRemote, nonatomic, readonly) bool secureRemote;
@property (nonatomic, readonly) int sourcePid;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;
@property (nonatomic, readonly) HMFMessageTransport *transport;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)activityNameWithMessageName:(id)arg1;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)messageWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)messageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__initWithInternalMessage:(id)arg1;
- (id)activity;
- (id)arrayForKey:(id)arg1;
- (id)arrayOfDateComponentsForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (id)calendarForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)destination;
- (id)dictionaryForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)headers;
- (id)identifier;
- (id)init;
- (id)initWithInternalMessage:(id)arg1;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
- (id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;
- (id)internal;
- (id)locationForKey:(id)arg1;
- (id)messagePayload;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)predicateForKey:(id)arg1;
- (long long)qualityOfService;
- (id /* block */)responseHandler;
- (void)setDestination:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessagePayload:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (id)shortDescription;
- (id)stringForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)transport;
- (id)userInfo;
- (id)uuidForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)locationAuthorizedMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)nonSPIEntitledMessageWithName:(id)arg1 messagePayload:(id)arg2;

- (bool)_supportsFeature:(unsigned long long)arg1 forCapabilitiesKey:(id)arg2;
- (id)applicationBundleIdentifier;
- (id)clientName;
- (id)companionAppBundleIdentifier;
- (id)effectiveLocationBundleIdentifier;
- (id)hmd_safeUserInfo;
- (bool)isAuthorizedForHomeDataAccess;
- (bool)isAuthorizedForLocationAccess;
- (bool)isAuthorizedForMicrophoneAccess;
- (bool)isBackground;
- (bool)isEntitledForAPIAccess;
- (bool)isEntitledForBackgroundMode;
- (bool)isEntitledForSPIAccess;
- (bool)isInternal;
- (bool)isLocationAuthorized;
- (bool)isRemote;
- (bool)isSecureRemote;
- (id)proxyConnection;
- (unsigned long long)remoteRestriction;
- (id)remoteSourceDevice;
- (id)remoteSourceID;
- (id)remoteUserPairingIdentity;
- (bool)requiresNoSPIEntitlement;
- (bool)requiresSPIEntitlement;
- (int)sourcePid;
- (bool)supportsRequestedFeature:(unsigned long long)arg1;
- (bool)supportsRequiredFeature:(unsigned long long)arg1;
- (id)teamIdentifier;
- (id)transactionResult;

@end
