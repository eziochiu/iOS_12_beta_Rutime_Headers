/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUILocationServicesListController : PSListController <FMFSessionDelegate> {
    ACAccountStore * _accountStore;
    NSMutableDictionary * _coalesceAppKeys;
    NSMutableArray * _coalescedSystemServices;
    bool  _deferredRefreshDueToConfirm;
    NSArray * _ignoredLocationEntities;
    NSNumber * _isLocationServicesEnabled;
    NSDictionary * _locationEntitiesDetails;
    bool  _locationNotificationsEnabled;
    FMFDevice * _locationSharingDevice;
    NSNumber * _locationSharingEnabled;
    NSOperationQueue * _locationSharingOperationQueue;
    FMFSession * _locationSharingSession;
    ACAccount * _primaryAccount;
    NSDate * _twentyFourHoursAgo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isCoreRoutineAuthorized;
+ (bool)isLocationRestricted;
+ (void)setCoreRoutineAuthorized:(bool)arg1;

- (void).cxx_destruct;
- (void)_cancelConfirmDisableForSpecifier:(id)arg1;
- (void)_handleAuthenticationForSpecifier:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (bool)_isBundleBlacklisted:(id)arg1;
- (bool)_isFindMyDeviceSpecifier:(id)arg1;
- (void)_locationSharingSpecifierWasTapped:(id)arg1;
- (void)_pushCoreRoutineViewController;
- (void)_setEntityAuthorized:(bool)arg1 specifier:(id)arg2;
- (void)_setLocationServicesEnabled:(bool)arg1;
- (bool)_shouldEnableLocationSharingSpecifier;
- (id)accountStore;
- (void)connectionError:(id)arg1;
- (void)dealloc;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateHidingStatus:(bool)arg1;
- (void)disableAfterLoginConfirmation:(id)arg1;
- (id)hiddenBundleIdentifiers;
- (id)init;
- (id)isEntityAuthorized:(id)arg1;
- (id)isLocationServicesEnabled:(id)arg1;
- (bool)isLocationSharingEnabled;
- (bool)isLocationSharingModificationAllowed;
- (id)localizedDisplayNameForBundleID:(id)arg1;
- (id)locationDetailSpecifiers;
- (id)locationSharingDevice;
- (id)locationSharingOperationQueue;
- (id)locationSharingSession;
- (id)locationSharingSpecifiers;
- (unsigned long long)locationSharingTimeout;
- (int)locationUsageBasedOnDetails:(id)arg1;
- (int)locationUsageForEntity:(id)arg1;
- (void)mainThreadConnectionError:(id)arg1;
- (void)mainThreadDidChangeActiveLocationSharingDevice:(id)arg1;
- (void)mainThreadDidUpdateHidingStatus:(bool)arg1;
- (id)primaryAccount;
- (void)profileNotification:(id)arg1;
- (void)refreshLinkStatusInParent;
- (void)setAuthLevel:(unsigned long long)arg1 forCell:(id)arg2;
- (void)setEntityAuthorized:(id)arg1 specifier:(id)arg2;
- (void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2;
- (void)setUsage:(int)arg1 forCell:(id)arg2;
- (void)showLocationPrivacyPage;
- (id)specifiers;
- (void)startLocationStatusUpdates;
- (void)stopLocationStatusUpdates;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateFindMyFriendsStateBasedOnRestriction;
- (void)updateForApplicationDidBecomeActive:(id)arg1;
- (void)updateLocationSharingSpecifiersWithReload:(bool)arg1;
- (void)updateLocationUsage;
- (void)updateMutableStateBasedOnRestriction;
- (void)updateMutableStateForLocationSharing;
- (void)updateRecentlyUsedDate;
- (void)updateSpecifiersForImposedSettings;
- (void)updateSpecifiersForImposedSettingsWithReload:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willBecomeActive;

@end
