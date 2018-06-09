/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaApplicationBannerTestStore : ICMediaApplicationBannerStore {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _bannerCache;
    NSMutableDictionary * _propertyCache;
}

- (void).cxx_destruct;
- (bool)addBanner:(id)arg1 error:(id*)arg2;
- (id)allBannersWithResult:(id*)arg1;
- (id)bannerStorePropertyForKey:(id)arg1;
- (id)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)removeAllBannersWithResult:(id*)arg1;
- (bool)removeBannerWithGUID:(id)arg1 error:(id*)arg2;
- (bool)setBannerStoreProperty:(id)arg1 forKey:(id)arg2;

@end
