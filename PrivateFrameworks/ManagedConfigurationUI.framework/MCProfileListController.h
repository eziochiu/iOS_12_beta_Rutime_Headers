/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {
    NSArray * _blockedApplications;
    NSArray * _configurationProfilesInfoList;
    NSArray * _developerAppSigners;
    NSArray * _enterpriseAppSigners;
    bool  _hasFailedFetchingProfilesInfo;
    bool  _hasFetchedProfilesInfo;
    MCProfileInfo * _mdmProfileInfo;
    NSSManager * _nssManager;
    NSMutableArray * _profileInfo;
    UIImage * _profileListIcon;
    int  _provisioningProfileInstalledToken;
    int  _provisioningProfileRemovedToken;
}

@property (nonatomic, retain) NSArray *blockedApplications;
@property (nonatomic, retain) NSArray *configurationProfilesInfoList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *developerAppSigners;
@property (nonatomic, retain) NSArray *enterpriseAppSigners;
@property (nonatomic) bool hasFailedFetchingProfilesInfo;
@property (nonatomic) bool hasFetchedProfilesInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCProfileInfo *mdmProfileInfo;
@property (nonatomic, retain) NSSManager *nssManager;
@property (nonatomic, retain) NSMutableArray *profileInfo;
@property (nonatomic, retain) UIImage *profileListIcon;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (readonly) Class superclass;

+ (id)specifiersForBlockedApps:(id)arg1;

- (void).cxx_destruct;
- (void)_appSignerApplicationsChanged:(id)arg1;
- (void)_blockedAppsChanged:(id)arg1;
- (void)_hideProgressIndicatorAndShowBackButton:(bool)arg1;
- (void)_installedApplicationsChanged:(id)arg1;
- (void)_profileListChanged:(id)arg1;
- (void)_showProgressIndicator;
- (id)blockedApplications;
- (id)configurationProfilesInfoList;
- (void)dealloc;
- (id)developerAppSigners;
- (id)enterpriseAppSigners;
- (void)fetchRemoteProfileList;
- (void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2;
- (bool)hasFailedFetchingProfilesInfo;
- (bool)hasFetchedProfilesInfo;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)mdmProfileInfo;
- (id)nssManager;
- (id)profileInfo;
- (id)profileListIcon;
- (int)provisioningProfileInstalledToken;
- (int)provisioningProfileRemovedToken;
- (void)setBlockedApplications:(id)arg1;
- (void)setConfigurationProfilesInfoList:(id)arg1;
- (void)setDeveloperAppSigners:(id)arg1;
- (void)setEnterpriseAppSigners:(id)arg1;
- (void)setHasFailedFetchingProfilesInfo:(bool)arg1;
- (void)setHasFetchedProfilesInfo:(bool)arg1;
- (void)setMdmProfileInfo:(id)arg1;
- (void)setNssManager:(id)arg1;
- (void)setProfileInfo:(id)arg1;
- (void)setProfileListIcon:(id)arg1;
- (void)setProvisioningProfileInstalledToken:(int)arg1;
- (void)setProvisioningProfileRemovedToken:(int)arg1;
- (id)specifiers;
- (id)specifiersForMDMProfileInfo:(id)arg1 configurationProfilesInfo:(id)arg2 enterpriseAppSigners:(id)arg3 developerAppSigners:(id)arg4 blockedApps:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end
