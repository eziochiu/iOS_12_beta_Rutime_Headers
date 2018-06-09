/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUJoiningAssetsDataSource : PUAssetsDataSource {
    NSDictionary * __containedDataSourceInfoByIdentifier;
    NSArray * __containedDataSourceInfos;
    NSArray * __dataSources;
    long long  __totalNumberOfSections;
}

@property (nonatomic, readonly) NSDictionary *_containedDataSourceInfoByIdentifier;
@property (nonatomic, readonly) NSArray *_containedDataSourceInfos;
@property (nonatomic, readonly) NSArray *_dataSources;
@property (nonatomic, readonly) long long _totalNumberOfSections;

- (void).cxx_destruct;
- (id)_assetsDataSourceForExternalIndexPath:(id)arg1 outDataSourceIndex:(out long long*)arg2 outLocalIndexPath:(out id*)arg3;
- (id)_containedDataSourceInfoByIdentifier;
- (id)_containedDataSourceInfos;
- (id)_dataSources;
- (id)_externalIndexPathForLocalIndexPath:(id)arg1 inAssetsDataSource:(id)arg2;
- (long long)_totalNumberOfSections;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)containedAssetsDataSourceAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithDataSources:(id)arg1;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)startingAssetReference;

@end
