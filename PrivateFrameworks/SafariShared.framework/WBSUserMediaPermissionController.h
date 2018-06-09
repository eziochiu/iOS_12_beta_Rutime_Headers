/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager <WBSCoalescedAsynchronousWriterDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {
    NSMutableDictionary * _cachedSettings;
    WBSPerSitePreference * _cameraMediaCapturePreference;
    NSObject<OS_dispatch_queue> * _loadPermissionsSynchronizationQueue;
    WBSPerSitePreference * _microphoneMediaCapturePreference;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
    WBSCoalescedAsynchronousWriter * _saveUserMediaPermissionsWriter;
    struct atomic<LoadingStatus> { 
        int __a_; 
    }  _savedStateLoadStatus;
    NSURL * _userMediaPermissionsFileURL;
}

@property (nonatomic, readonly) WBSPerSitePreference *cameraMediaCapturePreference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreference *microphoneMediaCapturePreference;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

+ (id)localizedStringForPerSitePreferenceValue:(id)arg1;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)_cachedSettingsDidChange;
- (bool)_captureDevicesAreAllDefaultsGivenPermission:(unsigned long long)arg1;
- (unsigned long long)_defaultUserMediaPermission;
- (id)_dictionaryRepresentation;
- (id)_init;
- (void)_invalidateAllPermissionsForDomain:(id)arg1;
- (void)_invalidateCachedSettingsForOriginHash:(id)arg1;
- (bool)_isPreferenceValid:(id)arg1;
- (void)_loadSavedPermissions;
- (void)_loadSavedPermissionsIfNecessary;
- (long long)_mediaCaptureSettingForMediaCaptureType:(long long)arg1 userMediaPermission:(unsigned long long)arg2;
- (unsigned long long)_permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (id)_policyForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (id)_standardizedURLForDomain:(id)arg1;
- (unsigned long long)_userMediaPermissionForMediaCaptureType:(long long)arg1 mediaCaptureSetting:(long long)arg2;
- (void)_waitUntilPermissionsHaveLoaded;
- (id)cameraMediaCapturePreference;
- (void)checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(unsigned long long)arg3 decisionHandler:(id /* block */)arg4;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)arg1;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(id /* block */)arg4;
- (bool)hasPolicyEntryForTopLevelOrigin:(id)arg1;
- (id)init;
- (id)initWithUserMediaPermissionsFileURL:(id)arg1 perSitePreferencesStore:(id)arg2;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)microphoneMediaCapturePreference;
- (id)perSitePreferencesStore;
- (void)performDelayedLaunchOperations;
- (unsigned long long)permissionForDomain:(id)arg1;
- (unsigned long long)permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (id)preferences;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (void)reloadPreferences;
- (void)removeAllOriginsAddedAfterDate:(id)arg1;
- (void)removePolicyEntries:(id)arg1;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetOriginPermissions;
- (id)saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;
- (void)savePendingChangesBeforeTermination;
- (void)savePendingChangesWithCompletionHandler:(id /* block */)arg1;
- (void)setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;
- (void)setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forPolicyEntry:(id)arg3;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)sortedPolicies;
- (unsigned long long)userMediaPermissionForDefaultPreferenceValues;
- (id)valuesForPreference:(id)arg1;

@end
