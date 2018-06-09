/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {
    NSDictionary * __enablingAnimationImages;
    UIImageView * __imageView;
}

@property (setter=_setEnablingAnimationImages:, nonatomic, copy) NSDictionary *_enablingAnimationImages;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long livePhotoMode;
@property (readonly) Class superclass;

+ (double)enablingAnimationDuration;

- (void).cxx_destruct;
- (id)_actuallyLoadEnablingAnimationImagesForScale:(double)arg1;
- (id)_availableModes;
- (id)_currentBaseImage;
- (id)_enablingAnimationImages;
- (void)_ensureEnablingAnimationImages;
- (id)_imageView;
- (void)_setEnablingAnimationImages:(id)arg1;
- (bool)_shouldLoadEnablingAnimationImages;
- (id)_tintColorForMode:(long long)arg1;
- (void)_updateAnimationImages;
- (void)_updateBaseImage;
- (void)finishExpansionAnimated:(bool)arg1;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (long long)indexForMode:(long long)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)interruptEnablingAnimation;
- (long long)livePhotoMode;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)performEnablingAnimation;
- (void)preloadEnablingAnimation;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)setLivePhotoMode:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end
