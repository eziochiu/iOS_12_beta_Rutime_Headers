/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayWallpaperBottomBar : UIView {
    _UIBackdropView * _backdropView;
    PLWallpaperButton * _doCancelButton;
    PLWallpaperButton * _doSetBothScreenButton;
    PLWallpaperButton * _doSetButton;
    PLWallpaperButton * _doSetHomeScreenButton;
    PLWallpaperButton * _doSetLockScreenButton;
    double  _maxToggleWidth;
    PLWallpaperButton * _motionToggle;
    bool  _motionToggleHidden;
    UIView * _separatorLine;
    bool  _shouldOnlyShowHomeScreenButton;
    bool  _shouldOnlyShowLockScreenButton;
    _UILegibilityLabel * _titleLabel;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, readonly, retain) PLWallpaperButton *doCancelButton;
@property (nonatomic, readonly, retain) PLWallpaperButton *doSetBothScreenButton;
@property (nonatomic, readonly, retain) PLWallpaperButton *doSetButton;
@property (nonatomic, readonly, retain) PLWallpaperButton *doSetHomeScreenButton;
@property (nonatomic, readonly, retain) PLWallpaperButton *doSetLockScreenButton;
@property (nonatomic) double maxToggleWidth;
@property (nonatomic, readonly, retain) PLWallpaperButton *motionToggle;
@property (nonatomic) bool motionToggleHidden;
@property (nonatomic, retain) UIView *separatorLine;
@property (nonatomic) bool shouldOnlyShowHomeScreenButton;
@property (nonatomic) bool shouldOnlyShowLockScreenButton;
@property (nonatomic, retain) _UILegibilityLabel *titleLabel;

- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
- (void)_layoutSubviewsPad;
- (void)_layoutSubviewsPhone;
- (struct CGSize { double x1; double x2; })_sizeForString:(id)arg1;
- (id)backdropView;
- (void)dealloc;
- (id)doCancelButton;
- (id)doSetBothScreenButton;
- (id)doSetButton;
- (id)doSetHomeScreenButton;
- (id)doSetLockScreenButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxToggleWidth;
- (id)motionToggle;
- (bool)motionToggleHidden;
- (id)separatorLine;
- (void)setBackdropView:(id)arg1;
- (void)setMaxToggleWidth:(double)arg1;
- (void)setMotionToggleHidden:(bool)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void)setShouldOnlyShowHomeScreenButton:(bool)arg1;
- (void)setShouldOnlyShowLockScreenButton:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldOnlyShowHomeScreenButton;
- (bool)shouldOnlyShowLockScreenButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)updateForChangedSettings:(id)arg1;
- (double)widthForToggleText;

@end
