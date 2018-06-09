/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewAssetsDataSource : PUAssetsDataSource {
    NSArray * __assetIdentifiers;
    NSDictionary * __assetsByIdentifier;
    <PUDisplayAssetCollection> * __reviewAssetCollection;
}

@property (nonatomic, readonly) NSArray *_assetIdentifiers;
@property (nonatomic, readonly) NSDictionary *_assetsByIdentifier;
@property (nonatomic, readonly) <PUDisplayAssetCollection> *_reviewAssetCollection;

- (void).cxx_destruct;
- (id)_assetIdentifiers;
- (id)_assetsByIdentifier;
- (id)_identifierAtIndexPath:(id)arg1;
- (id)_reviewAssetCollection;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)indexPathForAssetWithIdentifier:(id)arg1;
- (id)initWithAssetsByIdentifier:(id)arg1 usingOrdering:(id)arg2 inAssetCollection:(id)arg3;
- (bool)isEmpty;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)startingAssetReference;

@end
