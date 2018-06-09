/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraTransientAssetsDataSource : PUAssetsDataSource {
    NSArray * __assetUUIDs;
    NSDictionary * __assetsByUUID;
    NSDictionary * __representativeAssetsByBurstIdentifier;
    <PUDisplayAssetCollection> * __transientAssetCollection;
}

@property (nonatomic, readonly) NSArray *_assetUUIDs;
@property (nonatomic, readonly) NSDictionary *_assetsByUUID;
@property (nonatomic, readonly) NSDictionary *_representativeAssetsByBurstIdentifier;
@property (nonatomic, readonly) <PUDisplayAssetCollection> *_transientAssetCollection;

- (void).cxx_destruct;
- (id)_assetUUIDs;
- (id)_assetsByUUID;
- (id)_representativeAssetsByBurstIdentifier;
- (id)_transientAssetCollection;
- (id)_uuidAtIndexPath:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithUUIDs:(id)arg1 mapping:(id)arg2 representativeMapping:(id)arg3 inAssetCollection:(id)arg4;
- (bool)isEmpty;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)startingAssetReference;

@end
