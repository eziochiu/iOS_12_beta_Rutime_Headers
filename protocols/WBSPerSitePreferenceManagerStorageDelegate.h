/* made by EzioChiu.
 */

@protocol WBSPerSitePreferenceManagerStorageDelegate <NSObject>

@required

- (WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
- (long long)preferencesStoreKeyForPreference:(WBSPerSitePreference *)arg1;

@end
