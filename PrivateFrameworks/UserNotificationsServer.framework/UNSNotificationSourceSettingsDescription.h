/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationSourceSettingsDescription : NSObject {
    bool  _alwaysShowPreviews;
    bool  _modalAlertStyle;
    bool  _providesAppNotificationSettings;
    bool  _supportsAlerts;
    bool  _supportsBadges;
    bool  _supportsCarPlay;
    bool  _supportsSounds;
}

@property (nonatomic) bool alwaysShowPreviews;
@property (nonatomic) bool modalAlertStyle;
@property (nonatomic) bool providesAppNotificationSettings;
@property (nonatomic) bool supportsAlerts;
@property (nonatomic) bool supportsBadges;
@property (nonatomic) bool supportsCarPlay;
@property (nonatomic) bool supportsSounds;

+ (id)notificationSourceSettingsDescriptionFromDictionary:(id)arg1;

- (bool)alwaysShowPreviews;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)modalAlertStyle;
- (bool)providesAppNotificationSettings;
- (void)setAlwaysShowPreviews:(bool)arg1;
- (void)setModalAlertStyle:(bool)arg1;
- (void)setProvidesAppNotificationSettings:(bool)arg1;
- (void)setSupportsAlerts:(bool)arg1;
- (void)setSupportsBadges:(bool)arg1;
- (void)setSupportsCarPlay:(bool)arg1;
- (void)setSupportsSounds:(bool)arg1;
- (bool)supportsAlerts;
- (bool)supportsBadges;
- (bool)supportsCarPlay;
- (bool)supportsSounds;

@end
