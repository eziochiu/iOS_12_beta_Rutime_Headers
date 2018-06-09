/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCUserNotificationsUIKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool _shouldEnableDarkNotifications;
@property (nonatomic) bool _shouldEnableInlineSettings;
@property (nonatomic) bool _shouldEnableNotificationCoalescing;
@property (nonatomic) bool _shouldEnableNotificationsFakeSummaries;
@property (nonatomic) bool _shouldEnableNotificationsPeaceFeatures;
@property (nonatomic) bool _shouldForceAppSettingsLink;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;
- (bool)shouldEnableDarkNotifications;
- (bool)shouldEnableInlineSettings;
- (bool)shouldEnableNotificationCoalescing;
- (bool)shouldEnableNotificationsFakeSummaries;
- (bool)shouldForceAppSettingsLink;

@end
