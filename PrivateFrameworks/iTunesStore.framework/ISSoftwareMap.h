/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSoftwareMap : NSObject {
    NSArray * _applications;
}

@property (nonatomic, readonly) NSArray *applications;

+ (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
+ (void)_startWatchingInstallationNotifications;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2;
+ (id)applicationForPluginBundleIdentifier:(id)arg1;
+ (id)applicationForPluginBundleIdentifier:(id)arg1 extensionType:(id)arg2;
+ (id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3;
+ (id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2;
+ (id)currentMap;
+ (bool)currentMapIsValid;
+ (void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
+ (bool)haveApplicationsOfType:(id)arg1;
+ (void)invalidateCurrentMap;
+ (id)loadedMap;
+ (void)removableSystemApplicationsWithCompletionBlock:(id /* block */)arg1;
+ (void)setCurrentMap:(id)arg1;
+ (void)startObservingNotifications;

- (void)_loadFromMobileInstallation;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)applications;
- (id)copySoftwareUpdatesPropertyList;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end