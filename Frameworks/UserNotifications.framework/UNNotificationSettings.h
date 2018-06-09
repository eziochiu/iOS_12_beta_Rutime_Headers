/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationSettings : NSObject <NSCopying, NSSecureCoding> {
    long long  _alertSetting;
    long long  _alertStyle;
    long long  _authorizationStatus;
    long long  _badgeSetting;
    long long  _carPlaySetting;
    long long  _criticalAlertSetting;
    long long  _lockScreenSetting;
    long long  _notificationCenterSetting;
    bool  _providesAppNotificationSettings;
    long long  _showPreviewsSetting;
    long long  _soundSetting;
    NSDictionary * _topicsSettings;
}

@property (nonatomic, readonly) long long alertSetting;
@property (nonatomic, readonly) long long alertStyle;
@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) long long badgeSetting;
@property (nonatomic, readonly) long long carPlaySetting;
@property (nonatomic, readonly) long long criticalAlertSetting;
@property (nonatomic, readonly) long long lockScreenSetting;
@property (nonatomic, readonly) long long notificationCenterSetting;
@property (nonatomic, readonly) bool providesAppNotificationSettings;
@property (nonatomic, readonly) long long showPreviewsSetting;
@property (nonatomic, readonly) long long soundSetting;
@property (nonatomic, readonly) NSDictionary *topicsSettings;

+ (id)emptySettings;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10 providesAppNotificationSettings:(bool)arg11;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10 providesAppNotificationSettings:(bool)arg11 topicsSettings:(id)arg12;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)alertSetting;
- (long long)alertStyle;
- (long long)authorizationStatus;
- (long long)badgeSetting;
- (long long)carPlaySetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)criticalAlertSetting;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEnabledSettings;
- (unsigned long long)hash;
- (id)initWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10 providesAppNotificationSettings:(bool)arg11 topicsSettings:(id)arg12;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)lockScreenSetting;
- (long long)notificationCenterSetting;
- (bool)providesAppNotificationSettings;
- (long long)showPreviewsSetting;
- (long long)soundSetting;
- (id)topicsSettings;

@end
