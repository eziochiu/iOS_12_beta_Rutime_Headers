/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource {
    NSArray * __collectionListBySection;
    NSArray * __collectionsFetchResultBySection;
    NSDictionary * __collectionsIndexPathsByCollection;
    NSDictionary * __keyAssetsFetchResultsByCollection;
    NSArray * __virtualCollections;
    PXPhotoKitCollectionsDataSourceManagerConfiguration * _configuration;
    NSDictionary * _itemFetchResultByCollection;
}

@property (nonatomic, readonly) NSArray *_collectionListBySection;
@property (nonatomic, readonly) NSArray *_collectionsFetchResultBySection;
@property (nonatomic, readonly) NSDictionary *_collectionsIndexPathsByCollection;
@property (nonatomic, readonly) NSDictionary *_keyAssetsFetchResultsByCollection;
@property (nonatomic, readonly) NSArray *_virtualCollections;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration;
@property (nonatomic, readonly) NSDictionary *itemFetchResultByCollection;

+ (long long)estimatedCountForAssetCollection:(id)arg1 withConfiguration:(id)arg2;

- (void).cxx_destruct;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionListBySection;
- (id)_collectionsFetchResultBySection;
- (id)_collectionsIndexPathsByCollection;
- (id)_keyAssetsFetchResultsByCollection;
- (id)_virtualCollections;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)configuration;
- (long long)countForCollection:(id)arg1;
- (void)enumerateCollectionsUsingBlock:(id /* block */)arg1;
- (id)indexPathForCollection:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)init;
- (id)initWithCollectionListBySection:(id)arg1 collectionsFetchResultBySection:(id)arg2 keyAssetsFetchResultsByCollection:(id)arg3 collectionsIndexPathsByCollection:(id)arg4 itemFetchResultByCollection:(id)arg5 virtualCollections:(id)arg6 dataSourceConfiguration:(id)arg7;
- (id)itemFetchResultByCollection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

@end
