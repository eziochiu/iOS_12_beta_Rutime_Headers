/* made by EzioChiu.
 */

@protocol PLSearchableAssetCollection <NSObject>

@required

- (NSArray *)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (NSDate *)keyAssetCreationDate;
- (NSString *)keyAssetUUID;
- (unsigned long long)numberOfAssets;
- (unsigned long long)searchIndexCategory;
- (NSString *)searchIndexContents;
- (NSDate *)searchableEndDate;
- (NSDate *)searchableStartDate;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)uuid;

@end
