/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPSettings : NSObject {
    NSObject<OS_dispatch_semaphore> * _initializationComplete;
    _PASLock * _lock;
    NSUserDefaults * _portraitDefaults;
    PPKVOObserver * _portraitKVOObserver;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _spotlightDefaults;
    PPKVOObserver * _spotlightKVOObserver;
}

@property (getter=isAppConnectionsLocationsEnabled, nonatomic) bool appConnectionsLocationsEnabled;

+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)arg1;
+ (void)initialize;
+ (bool)isVoiceAssistantEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearTestSettings;
- (id)_cloudKitDisabledBundleIds;
- (void)_disableBundleIdentifier:(id)arg1;
- (id)_donationDisabledBundleIds;
- (void)_invokeChangeHandlersAsync;
- (void)_purgeRecordsForDisabledBundleIdsAsync;
- (void)_refreshCloudKitDisabledBundleIds;
- (void)_refreshDisabledBundleIds;
- (void)_rewriteSyncStateToDisableBundleId:(id)arg1;
- (void)_triggerDelayedBundleIdPurge;
- (void)_triggerDelayedOperationWithCoalescingToken:(void *)arg1 operation:(void *)arg2; // needs 2 arg types, found 3: /* Warning: Unrecognized filer type: '' using 'void*' */ void**, int, id /* block */
- (void)_updateAppConnectionsSettings;
- (bool)bundleIdentifierIsEnabledForCloudKit:(id)arg1;
- (bool)bundleIdentifierIsEnabledForDonation:(id)arg1;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1;
- (id)init;
- (bool)isAppConnectionsLocationsEnabled;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)registerDisabledBundleIdPurgeHandler;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)arg1;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)setAppConnectionsLocationsEnabled:(bool)arg1;
- (bool)showLocationsFoundInApps;
- (void)triggerDelayedCloudSyncRewrite;
- (id)userDefaults;
- (double)weightMultiplier;

@end
