/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {
    NSMutableArray * _assetSearchResults;
}

@property (nonatomic, retain) NSMutableArray *assetSearchResults;

- (void).cxx_destruct;
- (void)addAssetSearchResult:(id)arg1 isMainSearchResult:(bool)arg2;
- (unsigned long long)assetCount;
- (id)assetSearchResults;
- (id)assetUUIDs;
- (unsigned long long)categoryMask;
- (id)groupDescription;
- (id)initWithAssetSearchResult:(id)arg1;
- (void)setAssetSearchResults:(id)arg1;

@end
