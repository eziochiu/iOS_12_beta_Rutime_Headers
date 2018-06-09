/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetsDataSource : PXSectionedDataSource

- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (bool)hasCurationForAssetCollection:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForAssetReference:(id)arg1;
- (bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)keyAssetsForAssetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)metadataAssetAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (Class)objectReferenceClassForItem;
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (id)photosGraphSuggestedContributions;
- (id)startingAssetReference;

@end
