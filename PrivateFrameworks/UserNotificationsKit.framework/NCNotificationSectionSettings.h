/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _displayName;
    bool  _hasProvisialAuthorization;
    bool  _isDeliveredQuietly;
    NSString * _sectionIdentifier;
    NSDictionary * _settings;
    UIImage * _settingsIcon;
    bool  _showsCustomSettingsLink;
    NSString * _subSectionIdentifier;
    NSSet * _subSectionSettings;
    bool  _userConfigurable;
}

@property (nonatomic, readonly) unsigned long long contentPreviewSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) unsigned long long groupingSetting;
@property (nonatomic, readonly) bool hasProvisionalAuthorization;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeliveredQuietly;
@property (nonatomic, readonly) bool notificationsEnabled;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *settings;
@property (nonatomic, readonly) UIImage *settingsIcon;
@property (nonatomic, readonly) bool showsCustomSettingsLink;
@property (nonatomic, readonly) bool showsInLockScreen;
@property (nonatomic, readonly) bool showsInNotificationCenter;
@property (nonatomic, readonly, copy) NSString *subSectionIdentifier;
@property (nonatomic, readonly) long long subSectionPriority;
@property (nonatomic, readonly, copy) NSSet *subSectionSettings;
@property (readonly) Class superclass;
@property (getter=isUserConfigurable, nonatomic, readonly) bool userConfigurable;

// Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (bool)hasProvisionalAuthorization;
- (unsigned long long)hash;
- (id)initWithNotificationSectionSettings:(id)arg1;
- (bool)isDeliveredQuietly;
- (bool)isEqual:(id)arg1;
- (bool)isUserConfigurable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionIdentifier;
- (id)settings;
- (id)settingsIcon;
- (bool)showsCustomSettingsLink;
- (id)subSectionIdentifier;
- (id)subSectionSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;

- (unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1;
- (unsigned long long)_groupingSettingFromBBGroupingSetting:(long long)arg1;
- (id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1;
- (unsigned long long)contentPreviewSetting;
- (unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1;
- (unsigned long long)groupingSetting;
- (bool)notificationsEnabled;
- (bool)showsInLockScreen;
- (bool)showsInNotificationCenter;
- (long long)subSectionPriority;

@end
