/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMutableAssetExplorerReviewScreenAssetsDataSourceManagerImplementation : NSObject <PUMutableAssetExplorerReviewScreenAssetsDataSourceManager> {
    NSMutableDictionary * _replacementAssetsByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *replacementAssetsByUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithReplacementAssetsByUUID:(id)arg1;
- (void)removeReplacementAssetInDataSourceForUUID:(id)arg1;
- (void)replaceAssetInDataSourceWithAsset:(id)arg1;
- (id)replacementAssetsByUUID;

@end
