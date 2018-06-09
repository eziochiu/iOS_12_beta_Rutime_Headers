/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVVolumeButtonControl : UIControl <AVPlaybackControlsViewItem> {
    bool  _collapsed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cumulativeTranslationSincePanningBegan;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    UIViewPropertyAnimator * _highlightAnimator;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hitRectInsets;
    bool  _included;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPreciseLocationOfTouch;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationOfTouchInWindow;
    bool  _longPressEnabled;
    NSTimer * _longPressTimer;
    AVMicaPackage * _micaPackage;
    NSString * _micaPackageStateName;
    bool  _showsHighlightedAppearance;
    long long  _trackingState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationOfPanFromPreviousTouch;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic) struct CGPoint { double x1; double x2; } cumulativeTranslationSincePanningBegan;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPreciseLocationOfTouch;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationOfTouchInWindow;
@property (getter=isLongPressEnabled, nonatomic) bool longPressEnabled;
@property (nonatomic) NSTimer *longPressTimer;
@property (nonatomic, retain) AVMicaPackage *micaPackage;
@property (nonatomic, retain) NSString *micaPackageStateName;
@property (nonatomic) bool showsHighlightedAppearance;
@property (readonly) Class superclass;
@property (nonatomic) long long trackingState;
@property (nonatomic) struct CGPoint { double x1; double x2; } translationOfPanFromPreviousTouch;

- (void).cxx_destruct;
- (void)_updateMicaPackage:(id)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })cumulativeTranslationSincePanningBegan;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (id)feedbackGenerator;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)highlightAnimator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })initialPreciseLocationOfTouch;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (bool)isLongPressEnabled;
- (struct CGPoint { double x1; double x2; })locationOfTouchInWindow;
- (id)longPressTimer;
- (id)micaPackage;
- (id)micaPackageStateName;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setCumulativeTranslationSincePanningBegan:(struct CGPoint { double x1; double x2; })arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setHighlightAnimator:(id)arg1;
- (void)setHitRectInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIncluded:(bool)arg1;
- (void)setInitialPreciseLocationOfTouch:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocationOfTouchInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLongPressEnabled:(bool)arg1;
- (void)setLongPressTimer:(id)arg1;
- (void)setMicaPackage:(id)arg1;
- (void)setMicaPackageStateName:(id)arg1;
- (void)setShowsHighlightedAppearance:(bool)arg1;
- (void)setTrackingState:(long long)arg1;
- (void)setTranslationOfPanFromPreviousTouch:(struct CGPoint { double x1; double x2; })arg1;
- (bool)showsHighlightedAppearance;
- (long long)trackingState;
- (struct CGPoint { double x1; double x2; })translationOfPanFromPreviousTouch;
- (void)triggerSelectionChangedFeedback;
- (void)willMoveToWindow:(id)arg1;

@end
