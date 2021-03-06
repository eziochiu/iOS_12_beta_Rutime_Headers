/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemPolicyForApp : NSObject {
    NSString * _bundleIdentifier;
    bool  _forcePolicyOptions;
    unsigned long long  _policyOptions;
}

@property (nonatomic, copy) NSString *bundleIdentifier;

+ (bool)isServiceRestricted:(id)arg1;

- (void).cxx_destruct;
- (bool)_isBackgroundAppRefreshAllowed;
- (bool)_isLocationServicesRestricted;
- (bool)_isWirelessDataRestricted;
- (id)_privacyAccessForService:(struct __CFString { }*)arg1;
- (id)_sectionInfo;
- (bool)_supportsBackgroundAppRefresh;
- (id)assistantAndSearchSpecifiers;
- (id)authLevelStringForStatus:(int)arg1;
- (id)backgroundAppRefreshSpecifier;
- (id)bundleIdentifier;
- (struct __CFBundle { }*)copyTCCBundleForService:(struct __CFString { }*)arg1;
- (id)dataUsageWorkspaceInfo;
- (id)documentSource:(id)arg1;
- (id)documentsSpecifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (bool)isCellularBundleID:(id)arg1;
- (id)locationServicesSpecifier;
- (id)locationStatus:(id)arg1;
- (id)notificationSpecifier;
- (id)photosAuthDescriptionForAppBundle:(struct __CFBundle { }*)arg1;
- (Class)photosDetailClass;
- (id)photosLocalizedStringForAuthType:(id)arg1;
- (id)photosServicesSpecifier;
- (id)photosStatus:(id)arg1;
- (id)privacyAccessForSpecifier:(id)arg1;
- (id)privacySpecifierForService:(struct __CFString { }*)arg1;
- (id)privacySpecifiers;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(bool)arg2;
- (id)wirelessDataSpecifierWithAppName:(id)arg1;

@end
