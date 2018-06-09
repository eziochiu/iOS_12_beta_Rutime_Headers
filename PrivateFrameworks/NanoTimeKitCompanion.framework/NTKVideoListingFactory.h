/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVideoListingFactory : NSObject {
    NSMutableSet * _assetListings;
    NSArray * _butterflyListings;
    CLKDevice * _device;
    NSArray * _flowerListings;
    NSArray * _jellyfishListings;
}

+ (id)sharedInstanceForDevice:(id)arg1;

- (void).cxx_destruct;
- (id)_initLibraryForDevice:(id)arg1;
- (id)_listingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3;
- (id)_listingsWithTheme:(unsigned long long)arg1;
- (id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2;
- (id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3;
- (id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2;
- (id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4;
- (id)anyListingWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3;
- (id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3;
- (id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4;
- (long long)behaviorForTheme:(unsigned long long)arg1;
- (id)defaultListingWithTheme:(unsigned long long)arg1;
- (void)discardAssets;
- (id)posterImageWithTheme:(unsigned long long)arg1;
- (void)setVideoListingHasAssets:(id)arg1;

@end
