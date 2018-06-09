/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitSession : PXCMMSession {
    PHAsset * _anchorAsset;
    PHMomentShare * _momentShare;
    PHSuggestion * _suggestion;
}

@property (nonatomic) PHAsset *anchorAsset;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)anchorAsset;
- (id)assetsProgressListenerWithPresentationStyle:(long long)arg1;
- (id)description;
- (id)diagnosticDictionary;
- (id)initWithContext:(id)arg1;
- (id)initWithPhotoKitContext:(id)arg1;
- (id)momentShare;
- (void)setAnchorAsset:(id)arg1;
- (id)suggestion;

@end
