/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSearchListSource : CFPrefsSource {
    struct __CFSet { } * _cloudKeys;
    struct __CFArray { } * _cloudPrefixKeys;
    CFPrefsCloudSource * _cloudSetTarget;
    struct __CFString { } * _identifier;
    bool  _isRebuildingCache;
    struct __CFDictionary { } * _keysToSources;
    struct __CFArray { } * _sourceList;
    CFPrefsPlistSource * _standardSetTarget;
    bool  initialized;
}

+ (void)preloadDomainsForIdentifiers:(const struct __CFString {}**)arg1 containers:(const struct __CFString {}**)arg2 cloudConfigurationURLs:(const struct __CFURL {}**)arg3 count:(long long)arg4 containingPreferences:(id)arg5;

- (struct __CFArray { }*)_getPendingNotifications;
- (void)addCloudSourceForIdentifier:(struct __CFString { }*)arg1 configurationPath:(struct __CFString { }*)arg2 storeName:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4;
- (void)addCompatibilitySource;
- (void)addManagedSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1;
- (void)addPreferencesObserver:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 container:(struct __CFString { }*)arg4;
- (void)addSuiteSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (struct __CFDictionary { }*)alreadylocked_copyManagedDictionary;
- (void*)alreadylocked_copyManagedValueForKey:(struct __CFString { }*)arg1;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long long)alreadylocked_generationCountFromListOfSources:(id*)arg1 count:(long long)arg2;
- (bool)alreadylocked_hasCloudValueForKey:(struct __CFString { }*)arg1;
- (bool)alreadylocked_hasNonRegisteredValueForKey:(struct __CFString { }*)arg1;
- (void)alreadylocked_reloadCacheIfStale;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setObservingContents:(bool)arg1;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (bool)alreadylocked_useCloudForKey:(struct __CFString { }*)arg1;
- (struct __CFString { }*)copyCloudConfigurationWithURL:(struct __CFURL { }*)arg1 outConfigFileSource:(id*)arg2 outStoreName:(const struct __CFString {}**)arg3;
- (struct __CFString { }*)copyOSLogDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)dealloc;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary { }*)arg1 toDictionary:(struct __CFDictionary { }*)arg2;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString { }*)arg1 fromValue:(void*)arg2 toValue:(void*)arg3;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (void)freeze;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)arg1;
- (long long)generationCount;
- (void)handleRemoteChangeNotificationForDomainIdentifier:(struct __CFString { }*)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithIdentifier:(struct __CFString { }*)arg1 containingPreferences:(id)arg2;
- (void)lock;
- (void)removePreferencesObserver:(id)arg1;
- (void)removeSource:(id)arg1;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (void)setCloudEnabled:(bool)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setCloudEnabled:(bool)arg1 forKeyPrefix:(struct __CFString { }*)arg2;
- (bool)synchronize;
- (void)unlock;

@end
