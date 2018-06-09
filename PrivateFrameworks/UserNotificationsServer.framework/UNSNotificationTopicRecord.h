/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationTopicRecord : NSObject {
    NSString * _displayName;
    NSString * _displayNameLocalizationKey;
    NSString * _identifier;
    bool  _modalAlertStyle;
    bool  _supportsAlerts;
    bool  _supportsBadges;
    bool  _supportsCarPlay;
    bool  _supportsCriticalAlerts;
    bool  _supportsSounds;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool modalAlertStyle;
@property (nonatomic) bool supportsAlerts;
@property (nonatomic) bool supportsBadges;
@property (nonatomic) bool supportsCarPlay;
@property (nonatomic) bool supportsCriticalAlerts;
@property (nonatomic) bool supportsSounds;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)displayNameLocalizationKey;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)modalAlertStyle;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModalAlertStyle:(bool)arg1;
- (void)setSupportsAlerts:(bool)arg1;
- (void)setSupportsBadges:(bool)arg1;
- (void)setSupportsCarPlay:(bool)arg1;
- (void)setSupportsCriticalAlerts:(bool)arg1;
- (void)setSupportsSounds:(bool)arg1;
- (bool)supportsAlerts;
- (bool)supportsBadges;
- (bool)supportsCarPlay;
- (bool)supportsCriticalAlerts;
- (bool)supportsSounds;

@end
