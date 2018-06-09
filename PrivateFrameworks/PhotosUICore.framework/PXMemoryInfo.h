/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoryInfo : NSObject <NSCopying> {
    PHAssetCollection * _assetCollection;
    PHFetchResult * _keyAssetFetchResult;
    NSString * _localizedDateText;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;
@property (nonatomic, readonly) NSString *localizedDateText;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) PHAsset *primaryAsset;
@property (nonatomic, readonly) double score;

+ (id)fastMemoryInfoWithMemory:(id)arg1;
+ (id)memoryInfoWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2;
+ (id)memoryInfoWithMemory:(id)arg1;

- (void).cxx_destruct;
- (id)assetCollection;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)keyAssetFetchResult;
- (id)localizedDateText;
- (id)localizedTitle;
- (id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg1;
- (id)primaryAsset;
- (double)score;

@end
