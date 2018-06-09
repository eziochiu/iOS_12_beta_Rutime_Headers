/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate> {
    CAMHDRButton * _HDRButton;
    NSArray * __allowedControls;
    UIView * __backgroundView;
    CAMExpandableMenuButton * __expandedMenuButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __expandedMenuButtonTappableInsets;
    long long  _backgroundStyle;
    PUReviewScreenDoneButton * _doneButton;
    CAMElapsedTimeView * _elapsedTimeView;
    CAMFilterButton * _filterButton;
    CAMFlashButton * _flashButton;
    CAMFlipButton * _flipButton;
    CAMFramerateIndicatorView * _framerateIndicatorView;
    CAMLivePhotoButton * _livePhotoButton;
    long long  _orientation;
    long long  _style;
    CAMTimerButton * _timerButton;
    <CAMControlVisibilityUpdateDelegate> * _visibilityUpdateDelegate;
}

@property (nonatomic, retain) CAMHDRButton *HDRButton;
@property (nonatomic, readonly) NSArray *_allowedControls;
@property (nonatomic, readonly) UIView *_backgroundView;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CAMExpandableMenuButton *_expandedMenuButton;
@property (setter=_setExpandedMenuButtonTappableInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _expandedMenuButtonTappableInsets;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, retain) PUReviewScreenDoneButton *doneButton;
@property (nonatomic, retain) CAMElapsedTimeView *elapsedTimeView;
@property (nonatomic, retain) CAMFilterButton *filterButton;
@property (nonatomic, retain) CAMFlashButton *flashButton;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (getter=isFloating, nonatomic, readonly) bool floating;
@property (nonatomic, retain) CAMFramerateIndicatorView *framerateIndicatorView;
@property (nonatomic, retain) CAMLivePhotoButton *livePhotoButton;
@property (nonatomic) long long orientation;
@property (nonatomic) long long style;
@property (nonatomic, retain) CAMTimerButton *timerButton;
@property (nonatomic) <CAMControlVisibilityUpdateDelegate> *visibilityUpdateDelegate;

- (void).cxx_destruct;
- (id)HDRButton;
- (id)_allowedControls;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForPortraitMode;
- (id)_allowedControlsForSquareMode;
- (id)_allowedControlsForStillImageMode;
- (id)_allowedControlsForTimelapseMode;
- (id)_allowedControlsForVideoMode;
- (double)_backgroundCornerRadiusForStyle:(long long)arg1;
- (bool)_backgroundMasksToBoundsForStyle:(long long)arg1;
- (id)_backgroundView;
- (void)_commonCAMTopBarInitialization;
- (void)_computeHorizontalLayoutForViewsBetweenLeftView:(id)arg1 rightView:(id)arg2 views:(id)arg3 alignmentRects:(id)arg4;
- (id)_expandedMenuButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_expandedMenuButtonTappableInsets;
- (double)_interpolatedFloatingBarHeight;
- (void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(id /* block */)arg2;
- (void)_layoutControls:(id)arg1 apply:(bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)_layoutDefaultStyle;
- (void)_layoutFloatingRecordingStyle;
- (void)_layoutFloatingStyle;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_setExpandedMenuButtonTappableInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldExpandButtonsHorizontally;
- (bool)_shouldHideSubview:(id)arg1;
- (void)_updateControlVisibilityAnimated:(bool)arg1;
- (long long)backgroundStyle;
- (void)collapseMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (void)configureForMode:(long long)arg1;
- (void)configureForMode:(long long)arg1 animated:(bool)arg2;
- (id)doneButton;
- (id)elapsedTimeView;
- (void)expandMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)filterButton;
- (id)flashButton;
- (id)flipButton;
- (id)framerateIndicatorView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFloating;
- (void)layoutSubviews;
- (id)livePhotoButton;
- (long long)orientation;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setDoneButton:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFilterButton:(id)arg1;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setFramerateIndicatorView:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setLivePhotoButton:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)setTimerButton:(id)arg1;
- (void)setVisibilityUpdateDelegate:(id)arg1;
- (bool)shouldHideDoneButtonForGraphConfiguration:(id)arg1;
- (bool)shouldHideElapsedTimeViewForGraphConfiguration:(id)arg1;
- (bool)shouldHideFilterButtonForGraphConfiguration:(id)arg1;
- (bool)shouldHideFlashButtonForGraphConfiguration:(id)arg1;
- (bool)shouldHideFlipButtonForGraphConfiguration:(id)arg1;
- (bool)shouldHideFramerateIndicatorForGraphConfiguration:(id)arg1;
- (bool)shouldHideHDRButtonForGraphConfiguration:(id)arg1;
- (bool)shouldHideLivePhotoButtonForGraphConfiguration:(id)arg1;
- (bool)shouldHideTimerButtonForGraphConfiguration:(id)arg1;
- (long long)style;
- (id)timerButton;
- (id)touchingRecognizersToCancel;
- (id)visibilityUpdateDelegate;

@end