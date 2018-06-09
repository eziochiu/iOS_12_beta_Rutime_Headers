/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetSearchResult : PLSearchResult {
    NSDate * _sortDate;
}

@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) NSDate *sortDate;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)assetUUIDs;
- (id)keyAssetUUID;
- (id)sortDate;
- (unsigned long long)type;

@end
