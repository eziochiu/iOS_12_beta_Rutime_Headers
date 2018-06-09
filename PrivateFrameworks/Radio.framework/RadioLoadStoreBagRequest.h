/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioLoadStoreBagRequest : RadioRequest {
    bool  _ignoresRadioDiskCache;
}

@property (nonatomic) bool ignoresRadioDiskCache;

+ (id)_accessQueue;
+ (id)_cachedBagFilenameForActiveAccount;
+ (id)_cachedStoreBagForActiveAccount;
+ (id)_pathForCachedStoreBags;
+ (void)_urlBagDidLoadNotification:(id)arg1;
+ (void)_writeStoreBagToDiskCache:(id)arg1;

- (void)_handleFinishedLoadingBag:(id)arg1 withError:(id)arg2 didLoadFromNonDiskCache:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)ignoresRadioDiskCache;
- (void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setIgnoresRadioDiskCache:(bool)arg1;

@end
