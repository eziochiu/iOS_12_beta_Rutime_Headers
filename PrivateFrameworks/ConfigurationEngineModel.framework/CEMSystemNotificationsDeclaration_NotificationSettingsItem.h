/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemNotificationsDeclaration_NotificationSettingsItem : CEMPayloadBase {
    NSNumber * _payloadAlertType;
    NSNumber * _payloadBadgesEnabled;
    NSString * _payloadBundleIdentifier;
    NSNumber * _payloadEmergencyEnabled;
    NSNumber * _payloadNotificationsEnabled;
    NSNumber * _payloadShowInCarPlay;
    NSNumber * _payloadShowInLockScreen;
    NSNumber * _payloadShowInNotificationCenter;
    NSNumber * _payloadSoundsEnabled;
}

@property (nonatomic, copy) NSNumber *payloadAlertType;
@property (nonatomic, copy) NSNumber *payloadBadgesEnabled;
@property (nonatomic, copy) NSString *payloadBundleIdentifier;
@property (nonatomic, copy) NSNumber *payloadEmergencyEnabled;
@property (nonatomic, copy) NSNumber *payloadNotificationsEnabled;
@property (nonatomic, copy) NSNumber *payloadShowInCarPlay;
@property (nonatomic, copy) NSNumber *payloadShowInLockScreen;
@property (nonatomic, copy) NSNumber *payloadShowInNotificationCenter;
@property (nonatomic, copy) NSNumber *payloadSoundsEnabled;

+ (id)allowedPayloadKeys;
+ (id)buildWithBundleIdentifier:(id)arg1 withNotificationsEnabled:(id)arg2 withShowInNotificationCenter:(id)arg3 withShowInLockScreen:(id)arg4 withAlertType:(id)arg5 withBadgesEnabled:(id)arg6 withSoundsEnabled:(id)arg7 withShowInCarPlay:(id)arg8 withEmergencyEnabled:(id)arg9;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAlertType;
- (id)payloadBadgesEnabled;
- (id)payloadBundleIdentifier;
- (id)payloadEmergencyEnabled;
- (id)payloadNotificationsEnabled;
- (id)payloadShowInCarPlay;
- (id)payloadShowInLockScreen;
- (id)payloadShowInNotificationCenter;
- (id)payloadSoundsEnabled;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAlertType:(id)arg1;
- (void)setPayloadBadgesEnabled:(id)arg1;
- (void)setPayloadBundleIdentifier:(id)arg1;
- (void)setPayloadEmergencyEnabled:(id)arg1;
- (void)setPayloadNotificationsEnabled:(id)arg1;
- (void)setPayloadShowInCarPlay:(id)arg1;
- (void)setPayloadShowInLockScreen:(id)arg1;
- (void)setPayloadShowInNotificationCenter:(id)arg1;
- (void)setPayloadSoundsEnabled:(id)arg1;

@end
