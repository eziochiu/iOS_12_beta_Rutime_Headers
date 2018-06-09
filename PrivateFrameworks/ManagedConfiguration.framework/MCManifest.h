/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCManifest : NSObject {
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSString * _systemFilePath;
    NSMutableDictionary * _systemManifest;
    NSString * _userFilePath;
    NSMutableDictionary * _userManifest;
}

+ (void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2;
+ (id)installedProfileDataWithIdentifier:(id)arg1;
+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)installedSystemProfileDataWithIdentifier:(id)arg1;
+ (id)installedSystemProfileWithIdentifier:(id)arg1;
+ (id)installedUserProfileDataWithIdentifier:(id)arg1;
+ (id)installedUserProfileWithIdentifier:(id)arg1;
+ (id)sharedManifest;

- (void).cxx_destruct;
- (void)_setSystemManifest:(id)arg1 userManifest:(id)arg2;
- (id)_systemManifest;
- (id)_userManifest;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (id)allInstalledProfileIdentifiers;
- (id)allInstalledSystemProfileIdentifiers;
- (id)allInstalledUserProfileIdentifiers;
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1;
- (void)dealloc;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (id)init;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedSystemProfileWithIdentifier:(id)arg1;
- (id)installedUserProfileWithIdentifier:(id)arg1;
- (void)invalidateCache;
- (void)removeIdentifierFromSystemManifest:(id)arg1;
- (void)removeIdentifierFromUserManifest:(id)arg1;
- (id)systemManifest;
- (id)userManifest;

@end
