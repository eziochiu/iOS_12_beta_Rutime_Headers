/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (nonatomic, retain) SAUIAddViews *alternativePunchOut;
@property (nonatomic) bool appAvailableInStorefront;
@property (nonatomic, copy) NSString *appDisplayName;
@property (nonatomic, retain) SAUIImageResource *appIcon;
@property (nonatomic, copy) NSDictionary *appIconMap;
@property (nonatomic) bool appInstalled;
@property (nonatomic, copy) NSURL *appStoreUri;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSArray *launchOptions;
@property (nonatomic) bool launchOverSiri;
@property (nonatomic, copy) NSString *predefinedButtonType;
@property (nonatomic, copy) NSString *providerId;
@property (nonatomic, copy) NSString *punchOutName;
@property (nonatomic, copy) NSURL *punchOutUri;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *themeIcons;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)appPunchOut;
+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;

- (id)alternativePunchOut;
- (bool)appAvailableInStorefront;
- (id)appDisplayName;
- (id)appIcon;
- (id)appIconMap;
- (bool)appInstalled;
- (id)appStoreUri;
- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)launchOptions;
- (bool)launchOverSiri;
- (bool)mutatingCommand;
- (id)predefinedButtonType;
- (id)providerId;
- (id)punchOutName;
- (id)punchOutUri;
- (bool)requiresResponse;
- (void)setAlternativePunchOut:(id)arg1;
- (void)setAppAvailableInStorefront:(bool)arg1;
- (void)setAppDisplayName:(id)arg1;
- (void)setAppIcon:(id)arg1;
- (void)setAppIconMap:(id)arg1;
- (void)setAppInstalled:(bool)arg1;
- (void)setAppStoreUri:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setLaunchOptions:(id)arg1;
- (void)setLaunchOverSiri:(bool)arg1;
- (void)setPredefinedButtonType:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setPunchOutName:(id)arg1;
- (void)setPunchOutUri:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThemeIcons:(id)arg1;
- (id)subtitle;
- (id)themeIcons;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)_afui_installAppPunchout;
- (long long)_afui_usefulUserResultType;
- (void)afui_getInstallAppPunchoutWithCompletion:(id /* block */)arg1;
- (void)afui_populateStoreServicesData:(id /* block */)arg1;
- (id)afui_punchOutAppNotAvailableViews;
- (id)afui_punchOutFailureViews;

@end
