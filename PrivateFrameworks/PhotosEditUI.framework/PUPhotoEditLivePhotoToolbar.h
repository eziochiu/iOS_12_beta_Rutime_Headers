/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditLivePhotoToolbar : UIView {
    _UIBackdropView * _backdropBackgroundView;
    NSMutableArray * _constraints;
    double  _horizontalControlPadding;
    double  _horizontalPrimaryViewPaddingOffset;
    long long  _layoutType;
    UIButton * _leadingButton;
    UIView * _leadingButtonContainer;
    NSLayoutConstraint * _leadingWidthConstraint;
    UIView * _primaryView;
    double  _primaryViewWidth;
    UIView * _solidBackgroundView;
    UIButton * _trailingButton;
    UIView * _trailingButtonContainer;
    NSLayoutConstraint * _trailingWidthConstraint;
    bool  _useTranslucentBackground;
    double  _verticalButtonOffset;
    NSLayoutConstraint * _viewHeightConstraint;
}

@property (nonatomic) double horizontalControlPadding;
@property (nonatomic) double horizontalPrimaryViewPaddingOffset;
@property (nonatomic) long long layoutType;
@property (nonatomic, retain) UIButton *leadingButton;
@property (nonatomic, readonly) double minimumControlWidth;
@property (nonatomic, retain) UIView *primaryView;
@property (nonatomic) double primaryViewWidth;
@property (nonatomic, retain) UIButton *trailingButton;
@property (nonatomic) bool useTranslucentBackground;
@property (nonatomic) double verticalButtonOffset;

- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (double)horizontalControlPadding;
- (double)horizontalPrimaryViewPaddingOffset;
- (id)initWithLayout:(long long)arg1;
- (long long)layoutType;
- (id)leadingButton;
- (double)minimumControlWidth;
- (id)primaryView;
- (double)primaryViewWidth;
- (void)setHorizontalControlPadding:(double)arg1;
- (void)setHorizontalPrimaryViewPaddingOffset:(double)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setLeadingButton:(id)arg1;
- (void)setPrimaryView:(id)arg1;
- (void)setPrimaryViewWidth:(double)arg1;
- (void)setTrailingButton:(id)arg1;
- (void)setUseTranslucentBackground:(bool)arg1;
- (void)setUseTranslucentBackground:(bool)arg1 animated:(bool)arg2;
- (void)setVerticalButtonOffset:(double)arg1;
- (id)trailingButton;
- (void)updateConstraints;
- (bool)useTranslucentBackground;
- (double)verticalButtonOffset;

@end
