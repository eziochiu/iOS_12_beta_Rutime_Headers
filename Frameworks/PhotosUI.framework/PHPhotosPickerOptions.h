/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHPhotosPickerOptions : NSObject {
    NSArray * _excludedContentModes;
    bool  _hideTabBar;
    NSDictionary * _initialAssetsToSelect;
    PHAsset * _keyAsset;
    PHAssetCollection * _keyAssetCollection;
}

@property (nonatomic, copy) NSArray *excludedContentModes;
@property (nonatomic) bool hideTabBar;
@property (nonatomic, copy) NSDictionary *initialAssetsToSelect;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) PHAssetCollection *keyAssetCollection;

- (void).cxx_destruct;
- (id)excludedContentModes;
- (bool)hideTabBar;
- (id)initialAssetsToSelect;
- (id)keyAsset;
- (id)keyAssetCollection;
- (void)setExcludedContentModes:(id)arg1;
- (void)setHideTabBar:(bool)arg1;
- (void)setInitialAssetsToSelect:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setKeyAssetCollection:(id)arg1;

@end
