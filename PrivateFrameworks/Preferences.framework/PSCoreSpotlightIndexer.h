/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCoreSpotlightIndexer : NSObject {
    CSSearchableIndex * _prefsSearchableIndex;
    NSObject<OS_dispatch_queue> * _spotlightIndexQueue;
}

@property (nonatomic, readonly) NSDate *lastIndexDate;
@property (nonatomic, readonly) bool needsIndex;
@property (nonatomic, retain) CSSearchableIndex *prefsSearchableIndex;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *spotlightIndexQueue;

+ (id)searchIndexIdentifier;
+ (id)sharedInstance;
+ (char *)spotlightIndexQueueIdentifier;

- (void).cxx_destruct;
- (id)_bundleForSpecifier:(id)arg1 parentBundle:(id)arg2;
- (id)_childSpecifiersForSpecifier:(id)arg1 bundle:(id)arg2 childBundleToUpdate:(id*)arg3;
- (void)_deleteSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 completion:(id /* block */)arg6;
- (id)_descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2;
- (id)_indexItemForSpecifier:(id)arg1 category:(id)arg2 keywords:(id)arg3 url:(id)arg4 description:(id)arg5;
- (id)_indexItemsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (void)_indexSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_indexSpecifierForURL:(id)arg1 specifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(bool)arg5 completion:(id /* block */)arg6;
- (id)_indexSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6 completion:(id /* block */)arg7;
- (id)_keyValueDictionaryForURL:(id)arg1;
- (id)_rankingHintScoreForURL:(id)arg1;
- (void)_reIndexNonRootSpecifier:(id)arg1 parentSpecifiers:(id)arg2 bundle:(id)arg3 category:(id)arg4 baseURL:(id)arg5 withURLPrefix:(id)arg6 waitForCompletion:(bool)arg7 completion:(id /* block */)arg8;
- (void)_reIndexRootSpecifier:(id)arg1 childSpecifiers:(id)arg2 parentSpecifierNames:(id)arg3 bundle:(id)arg4 childBundle:(id)arg5 category:(id)arg6 baseURL:(id)arg7 withURLPrefix:(id)arg8 waitForCompletion:(bool)arg9 completion:(id /* block */)arg10;
- (id)_specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_urlForSpecifier:(id)arg1 identifier:(id)arg2 category:(id)arg3 childCategory:(id*)arg4 prefix:(id)arg5 path:(id*)arg6 baseURL:(id)arg7 shouldLinkToRow:(bool)arg8;
- (id)_urlsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)blacklistedControllers;
- (bool)controllerIsBlacklisted:(id)arg1;
- (void)deleteIndexWithCompletionBlock:(id /* block */)arg1;
- (void)deleteSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 completion:(id /* block */)arg5;
- (id)descriptionForCSSearchableItem:(id)arg1;
- (id)descriptionForCSSearchableItems:(id)arg1;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 completion:(id /* block */)arg5;
- (void)indexSpecifiersWithURLs:(id)arg1 topLevelSpecifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(bool)arg5 completion:(id /* block */)arg6;
- (id)lastIndexBuild;
- (id)lastIndexDate;
- (id)lastIndexLanguage;
- (bool)needsIndex;
- (id)prefsSearchableIndex;
- (void)reindexSpecifiersIfNeeded:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 setHasIndexed:(bool)arg5 completion:(id /* block */)arg6;
- (id)searchableItemAttributeSetClassIdenfitier;
- (id)searchableItemClassIdentifier;
- (void)setLastIndexBuild:(id)arg1;
- (void)setLastIndexDate:(id)arg1;
- (void)setLastIndexLanguage:(id)arg1;
- (void)setNeedsIndex;
- (void)setNeedsIndex:(bool)arg1;
- (void)setPrefsSearchableIndex:(id)arg1;
- (void)setSpotlightIndexQueue:(id)arg1;
- (id)spotlightIndexQueue;

@end
