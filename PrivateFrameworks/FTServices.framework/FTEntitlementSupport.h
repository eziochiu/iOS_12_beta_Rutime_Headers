/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTEntitlementSupport : NSObject {
    struct __CTServerConnection { } * _ctServerConnection;
    struct __CFString { } * _entitlementStatus;
}

@property (nonatomic, readonly) bool faceTimeNonWiFiEntitled;
@property (nonatomic, readonly) NSDictionary *registrationState;

+ (id)sharedInstance;

- (void)_cleanupMachInfo;
- (bool)_disconnectCTServerConnection;
- (void)_entitlementStatusChanged;
- (void)_handleCTServiceRequestName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2 contextInfo:(void*)arg3;
- (id)_rawEntitlementValue;
- (bool)_reconnectCTServerConnectionIfNecessary;
- (bool)_registerForCTEntitlementNotifications;
- (bool)_setupCTServerConnection;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { }*)arg1;
- (bool)faceTimeNonWiFiEntitled;
- (id)init;
- (id)registrationState;

@end
