/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFUserSettings : NSObject {
    WFWhitelistSiteBuffer * _contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer * _contentFilterOverriddenWhiteListedSitesBuffer;
    NSString * _userName;
    NSDictionary * _userSettings;
    WFWhitelistSiteBuffer * _whiteListedSitesBuffer;
}

@property (nonatomic, readonly) bool canEditContentFilterOverriddenBlackListedSites;
@property (nonatomic, readonly) bool canEditContentFilterOverriddenWhiteListedSites;
@property (nonatomic, readonly) bool canEditOverridesAllowed;
@property (nonatomic, readonly) bool canEditRestrictionType;
@property (nonatomic, readonly) bool canEditWhiteListAllowedSites;
@property (nonatomic, retain) NSArray *contentFilterOverriddenBlackListedSites;
@property (nonatomic, retain) NSArray *contentFilterOverriddenWhiteListedSites;
@property (nonatomic) bool overridesAllowed;
@property (nonatomic) long long restrictionType;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, retain) NSArray *whiteListAllowedSites;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;

- (bool)_addManagedDefaults:(id)arg1;
- (id)_managedDefaultsPath;
- (bool)_setManagedDefaults:(id)arg1;
- (id)_userSettingsForUser:(id)arg1;
- (bool)alwaysAllowHTTPS;
- (bool)autoWhitelistContainsURL:(id)arg1;
- (bool)canEditAlwaysAllowHTTPS;
- (bool)canEditContentFilterOverriddenBlackListedSites;
- (bool)canEditContentFilterOverriddenWhiteListedSites;
- (bool)canEditOverridesAllowed;
- (bool)canEditRestrictionType;
- (bool)canEditWhiteListAllowedSites;
- (bool)contentFilterEnabled;
- (bool)contentFilterListsAllowURL:(id)arg1;
- (bool)contentFilterOverriddenBlackListContainsURL:(id)arg1;
- (id)contentFilterOverriddenBlackListedSites;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (bool)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2;
- (id)contentFilterOverriddenSites;
- (bool)contentFilterOverriddenWhiteListContainsURL:(id)arg1;
- (id)contentFilterOverriddenWhiteListedSites;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (bool)contentFilterOverridesEnabled;
- (void)dealloc;
- (id)initWithUserName:(id)arg1;
- (bool)overridesAllowed;
- (bool)restrictWebEnabled;
- (long long)restrictionType;
- (void)setAlwaysAllowHTTPS:(bool)arg1;
- (void)setContentFilterEnabled:(bool)arg1;
- (void)setContentFilterOverriddenBlackListedSites:(id)arg1;
- (void)setContentFilterOverriddenWhiteListedSites:(id)arg1;
- (void)setContentFilterOverridesEnabled:(bool)arg1;
- (void)setOverridesAllowed:(bool)arg1;
- (void)setRestrictWebEnabled:(bool)arg1;
- (void)setRestrictionType:(long long)arg1;
- (void)setUserName:(id)arg1;
- (void)setWhiteListAllowedSites:(id)arg1;
- (void)setWhiteListEnabled:(bool)arg1;
- (id)userName;
- (id)whiteListAllowedSites;
- (bool)whiteListContainsURL:(id)arg1;
- (bool)whiteListEnabled;
- (id)whiteListedSitesBuffer;

@end
