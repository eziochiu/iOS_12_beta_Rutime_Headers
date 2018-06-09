/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionsDataSourceState : NSObject <NSCopying> {
    PHFetchResult * _assetCollections;
    PHAssetCollection * _confidentMatch;
    PXCMMSuggestionsDataSourceContext * _context;
    NSDictionary * _suggestionsByAssetCollectionObjectID;
}

@property (nonatomic, readonly) PHFetchResult *assetCollections;
@property (nonatomic, readonly) PHAssetCollection *confidentMatch;
@property (nonatomic, readonly) PXCMMSuggestionsDataSourceContext *context;
@property (nonatomic, readonly) NSDictionary *suggestionsByAssetCollectionObjectID;

- (void).cxx_destruct;
- (void)_compareSuggestionsUsingContext;
- (id)_confidentMatch;
- (id)_confidentMatchUsingStrategy:(unsigned long long)arg1;
- (id)assetCollections;
- (id)confidentMatch;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAssetCollections:(id)arg1 suggestionsByAssetCollectionObjectID:(id)arg2 context:(id)arg3;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;
- (id)suggestionsByAssetCollectionObjectID;

@end
