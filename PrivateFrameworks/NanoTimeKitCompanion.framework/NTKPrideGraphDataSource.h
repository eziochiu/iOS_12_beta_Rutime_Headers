/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPrideGraphDataSource : NSObject {
    NSDictionary * _allListings;
    CLKDevice * _device;
    NSDictionary * _listingsByTag;
    NSArray * _startListings;
}

- (void).cxx_destruct;
- (void)_loadListings;
- (id)_randomListingFromArray:(id)arg1;
- (void)dealloc;
- (id)initForDevice:(id)arg1;
- (id)listings;
- (id)randomInitialListing;
- (id)randomListingWithTag:(id)arg1;

@end
