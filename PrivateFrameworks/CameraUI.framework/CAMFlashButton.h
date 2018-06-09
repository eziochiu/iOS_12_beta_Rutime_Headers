/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {
    UIImageView * __glyphView;
    UIImageView * __warningIndicatorView;
    bool  _allowsAutomaticFlash;
    bool  _unavailable;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic, readonly) UIImageView *_warningIndicatorView;
@property (nonatomic) bool allowsAutomaticFlash;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long flashMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUnavailable, nonatomic) bool unavailable;

+ (long long)flashModeForTorchMode:(long long)arg1;
+ (long long)torchModeForFlashMode:(long long)arg1;

- (void).cxx_destruct;
- (void)_commonCAMFlashButtonInitialization;
- (id)_currentGlyphImageForAccessibilityHUD:(bool)arg1;
- (id)_glyphView;
- (void)_updateCurrentGlyphImage;
- (id)_warningIndicatorView;
- (bool)allowsAutomaticFlash;
- (double)collapsedSelectedLabelHorizontalMargin;
- (long long)flashMode;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (long long)indexForMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (bool)isUnavailable;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticFlash:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setUnavailable:(bool)arg1;
- (bool)shouldIgnoreMenuInteraction;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (bool)wantsSelectedItemToBeVisible;

@end
