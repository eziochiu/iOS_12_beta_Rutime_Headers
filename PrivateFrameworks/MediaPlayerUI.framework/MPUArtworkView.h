/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUArtworkView : UIImageView {
    NSLayoutConstraint * _aspectConstraint;
    bool  _automaticallyApplyAspectConstraints;
    bool  _dimsWhenHighlighted;
    bool  _displayingPlaceholder;
    UIImage * _externalImage;
    bool  _forcesAnimatedUnhighlighting;
    UIView * _highlightView;
    bool  _isDeallocating;
    UIImage * _placeholderImage;
}

@property (nonatomic, readonly) UIImage *_externalImage;
@property (getter=_aspectConstraintMultiplier, setter=_setAspectConstraintMultiplier:, nonatomic) double aspectConstraintMultiplier;
@property (nonatomic) bool automaticallyApplyAspectConstraints;
@property (nonatomic) bool dimsWhenHighlighted;
@property (getter=isDisplayingPlaceholder, nonatomic) bool displayingPlaceholder;
@property (nonatomic) bool forcesAnimatedUnhighlighting;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, readonly) bool shouldDisplayPlaceholder;

- (void).cxx_destruct;
- (double)_aspectConstraintMultiplier;
- (id)_externalImage;
- (void)_imageDidChange;
- (void)_setAspectConstraintMultiplier:(double)arg1;
- (void)_setPlaceholderHidden:(bool)arg1;
- (bool)_shouldShowHighlightView;
- (void)_updateHighlightViewAnimated:(bool)arg1;
- (bool)automaticallyApplyAspectConstraints;
- (void)dealloc;
- (bool)dimsWhenHighlighted;
- (bool)forcesAnimatedUnhighlighting;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (bool)isDisplayingPlaceholder;
- (id)placeholderImage;
- (void)setAutomaticallyApplyAspectConstraints:(bool)arg1;
- (void)setDimsWhenHighlighted:(bool)arg1;
- (void)setDisplayingPlaceholder:(bool)arg1;
- (void)setForcesAnimatedUnhighlighting:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (bool)shouldDisplayPlaceholder;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateConstraints;

@end
