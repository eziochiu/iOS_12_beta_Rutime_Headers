/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingViewModelChange : PUViewModelChange {
    bool  _assetsDataSourceDidChange;
    bool  _browsingSpeedRegimeDidChange;
    bool  _chromeVisibilityDidChange;
    bool  _currentAssetDidChange;
    bool  _currentAssetTransitionProgressDidChange;
    bool  _isAnimatingAnyTransitionDidChange;
    bool  _isScrollingDidChange;
    bool  _isScrubbingDidChange;
    NSMapTable * _mutableSharedViewModelChangesByAsset;
    NSMutableDictionary * _mutableViewModelChangesByAssetReference;
    bool  _presentingOverOneUpDidChange;
    bool  _reviewScreenBarsModelDidChange;
    bool  _secondScreenSizeDidChange;
    bool  _transitionDriverIdentifierDidChange;
}

@property (nonatomic, readonly) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property (nonatomic, readonly) NSMutableDictionary *_mutableViewModelChangesByAssetReference;
@property (nonatomic, readonly) NSMapTable *assetSharedViewModelChangesByAsset;
@property (nonatomic, readonly) NSDictionary *assetViewModelChangesByAssetReference;
@property (setter=_setAssetsDataSourceDidChange:, nonatomic) bool assetsDataSourceDidChange;
@property (setter=_setBrowsingSpeedRegimeDidChange:, nonatomic) bool browsingSpeedRegimeDidChange;
@property (setter=_setChromeVisibilityDidChange:, nonatomic) bool chromeVisibilityDidChange;
@property (setter=_setCurrentAssetDidChange:, nonatomic) bool currentAssetDidChange;
@property (setter=_setCurrentAssetTransitionProgressDidChange:, nonatomic) bool currentAssetTransitionProgressDidChange;
@property (setter=_setAnimatingAnyTransitionDidChange:, nonatomic) bool isAnimatingAnyTransitionDidChange;
@property (setter=_setIsScrollingDidChange:, nonatomic) bool isScrollingDidChange;
@property (setter=_setIsScrubbingDidChange:, nonatomic) bool isScrubbingDidChange;
@property (setter=_setPresentingOverOneUpDidChange:, nonatomic) bool presentingOverOneUpDidChange;
@property (setter=_setReviewScreenBarsModelDidChange:, nonatomic) bool reviewScreenBarsModelDidChange;
@property (setter=_setSecondScreenSizeDidChange:, nonatomic) bool secondScreenSizeDidChange;
@property (setter=_setTransitionDriverIdentifierDidChange:, nonatomic) bool transitionDriverIdentifierDidChange;

- (void).cxx_destruct;
- (id)_mutableSharedViewModelChangesByAsset;
- (id)_mutableViewModelChangesByAssetReference;
- (void)_setAnimatingAnyTransitionDidChange:(bool)arg1;
- (void)_setAssetsDataSourceDidChange:(bool)arg1;
- (void)_setBrowsingSpeedRegimeDidChange:(bool)arg1;
- (void)_setChromeVisibilityDidChange:(bool)arg1;
- (void)_setCurrentAssetDidChange:(bool)arg1;
- (void)_setCurrentAssetTransitionProgressDidChange:(bool)arg1;
- (void)_setIsScrollingDidChange:(bool)arg1;
- (void)_setIsScrubbingDidChange:(bool)arg1;
- (void)_setPresentingOverOneUpDidChange:(bool)arg1;
- (void)_setReviewScreenBarsModelDidChange:(bool)arg1;
- (void)_setSecondScreenSizeDidChange:(bool)arg1;
- (void)_setTransitionDriverIdentifierDidChange:(bool)arg1;
- (id)assetSharedViewModelChangesByAsset;
- (id)assetViewModelChangesByAssetReference;
- (bool)assetsDataSourceDidChange;
- (bool)browsingSpeedRegimeDidChange;
- (bool)chromeVisibilityDidChange;
- (bool)currentAssetDidChange;
- (bool)currentAssetTransitionProgressDidChange;
- (bool)hasChanges;
- (bool)isAnimatingAnyTransitionDidChange;
- (bool)isScrollingDidChange;
- (bool)isScrubbingDidChange;
- (bool)presentingOverOneUpDidChange;
- (bool)reviewScreenBarsModelDidChange;
- (bool)secondScreenSizeDidChange;
- (bool)transitionDriverIdentifierDidChange;

@end
