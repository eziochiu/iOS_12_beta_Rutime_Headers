/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIWallpaperPreviewView : UIView <SBFIrisWallpaperViewDelegate> {
    SBFLockScreenDateView * _dateView;
    _UILegibilityLabel * _irisInstructionsLabel1;
    _UILegibilityLabel * _irisInstructionsLabel2;
    bool  _irisPossible;
    bool  _observingParallaxChanges;
    SBSUIEffectsSegmentedControl * _segmentedControl;
    bool  _usingSegmentedControl;
    SBFWallpaperView * _wallpaperView;
}

@property (nonatomic, retain) SBFLockScreenDateView *dateView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilityLabel *irisInstructionsLabel1;
@property (nonatomic, retain) _UILegibilityLabel *irisInstructionsLabel2;
@property (nonatomic, retain) SBSUIEffectsSegmentedControl *segmentedControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBFWallpaperView *wallpaperView;

+ (bool)shouldEnableParallaxForEffect:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_effectChanged:(id)arg1;
- (void)_layoutDateView;
- (void)_layoutIrisInstructionLabels;
- (void)_layoutSegmentedControl;
- (void)_layoutWallpaperView;
- (double)_segmentedControlInset;
- (void)_toggleMotion;
- (void)_updateSegmentedControl;
- (id)dateView;
- (void)dealloc;
- (void)fadeOutIrisInstructions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperView:(id)arg2;
- (id)irisInstructionsLabel1;
- (id)irisInstructionsLabel2;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)segmentedControl;
- (unsigned long long)selectedEffect;
- (void)setDateView:(id)arg1;
- (void)setIrisInstructionsLabel1:(id)arg1;
- (void)setIrisInstructionsLabel2:(id)arg1;
- (void)setIrisInstructionsVisible:(bool)arg1 animated:(bool)arg2;
- (void)setSegmentedControl:(id)arg1;
- (bool)shouldEnableParallax;
- (id)wallpaperView;

@end
