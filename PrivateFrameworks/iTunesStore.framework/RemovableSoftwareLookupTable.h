/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface RemovableSoftwareLookupTable : NSObject {
    NSDictionary * _bundleDictionary;
    NSLock * _lock;
}

@property (readonly, copy) NSDictionary *bundleDictionary;

+ (id)_fallbackItemIdentifier:(id)arg1;
+ (id)_urlForBundleIdentifier:(id)arg1;
+ (bool)isRestrictedAppBundleIdentifier:(id)arg1;
+ (id)urlForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_identifierForBundleIdentifier:(id)arg1;
- (void)_invalidateLookupCache:(id)arg1;
- (void)_populateBundleDictionary;
- (id)bundleDictionary;
- (void)dealloc;
- (id)init;
- (id)itemIdentifierForBundleIdentifer:(id)arg1;

@end
