/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVButton : UIButton {
    bool  _collapsed;
    bool  _disablesHighlightWhenLongPressed;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    double  _force;
    double  _forceThreshold;
    NSString * _fullScreenAlternateImageName;
    NSString * _fullScreenImageName;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    UIViewPropertyAnimator * _highlightAnimator;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hitRectInsets;
    double  _horizontalTranslationOfLongPress;
    NSString * _imageName;
    bool  _included;
    NSString * _inlineAlternateImageName;
    NSString * _inlineImageName;
    NSTimer * _longPressTimer;
    double  _maximumForceSinceTrackingBegan;
    AVMicaPackage * _micaPackage;
    bool  _multipleTouchesEndsTracking;
    NSNumber * _previousHorizontalPositionOfLongPress;
    double  _trackingStartTime;
    bool  _treatsForcePressAsLongPress;
    AVUserInteractionObserverGestureRecognizer * _userInteractionGestureRecognizer;
    bool  _wasForcePressTriggered;
    bool  _wasLongPressed;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic) bool disablesHighlightWhenLongPressed;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) double force;
@property (nonatomic) double forceThreshold;
@property (nonatomic, copy) NSString *fullScreenAlternateImageName;
@property (nonatomic, copy) NSString *fullScreenImageName;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (nonatomic) double horizontalTranslationOfLongPress;
@property (nonatomic, copy) NSString *imageName;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, copy) NSString *inlineAlternateImageName;
@property (nonatomic, copy) NSString *inlineImageName;
@property (nonatomic) NSTimer *longPressTimer;
@property (nonatomic) double maximumForceSinceTrackingBegan;
@property (nonatomic, retain) AVMicaPackage *micaPackage;
@property (nonatomic) bool multipleTouchesEndsTracking;
@property (nonatomic, retain) NSNumber *previousHorizontalPositionOfLongPress;
@property (nonatomic) double trackingStartTime;
@property (nonatomic) bool treatsForcePressAsLongPress;
@property (nonatomic, retain) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer;
@property (nonatomic) bool wasForcePressTriggered;
@property (nonatomic) bool wasLongPressed;

+ (id)buttonWithAccessibilityIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handleUserInteractionGestureRecognizer:(id)arg1;
- (id)_preferredImageName;
- (struct CGSize { double x1; double x2; })_preferredLayoutSize;
- (void)_resetTrackedState;
- (void)_updateImageIfNeeded;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)disablesHighlightWhenLongPressed;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (double)force;
- (double)forceThreshold;
- (id)fullScreenAlternateImageName;
- (id)fullScreenImageName;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)highlightAnimator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (double)horizontalTranslationOfLongPress;
- (id)imageName;
- (id)inlineAlternateImageName;
- (id)inlineImageName;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (id)longPressTimer;
- (double)maximumForceSinceTrackingBegan;
- (id)micaPackage;
- (bool)multipleTouchesEndsTracking;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)previousHorizontalPositionOfLongPress;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setDisablesHighlightWhenLongPressed:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setForce:(double)arg1;
- (void)setForceThreshold:(double)arg1;
- (void)setFullScreenAlternateImageName:(id)arg1;
- (void)setFullScreenImageName:(id)arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setHighlightAnimator:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHitRectInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalTranslationOfLongPress:(double)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImageName:(id)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setInlineAlternateImageName:(id)arg1;
- (void)setInlineImageName:(id)arg1;
- (void)setLongPressTimer:(id)arg1;
- (void)setMaximumForceSinceTrackingBegan:(double)arg1;
- (void)setMicaPackage:(id)arg1;
- (void)setMultipleTouchesEndsTracking:(bool)arg1;
- (void)setPreviousHorizontalPositionOfLongPress:(id)arg1;
- (void)setTrackingStartTime:(double)arg1;
- (void)setTreatsForcePressAsLongPress:(bool)arg1;
- (void)setUserInteractionGestureRecognizer:(id)arg1;
- (void)setWasForcePressTriggered:(bool)arg1;
- (void)setWasLongPressed:(bool)arg1;
- (double)trackingStartTime;
- (bool)treatsForcePressAsLongPress;
- (id)userInteractionGestureRecognizer;
- (bool)wasForcePressTriggered;
- (bool)wasLongPressed;
- (void)willMoveToWindow:(id)arg1;

@end
