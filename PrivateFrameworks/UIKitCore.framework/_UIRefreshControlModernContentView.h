/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {
    bool  _animationsAreValid;
    bool  _areAnimationsValid;
    double  _currentPopStiffness;
    bool  _hasFinishedRevealing;
    double  _impactIntensity;
    UIView * _replicatorContainer;
    _UIRefreshControlModernReplicatorView * _replicatorView;
    bool  _scrollViewVerticalFeedbackGeneratorEnabled;
    UIView * _seed;
    UILabel * _textLabel;
}

@property (nonatomic) bool areAnimationsValid;
@property (nonatomic) double currentPopStiffness;
@property (nonatomic) double impactIntensity;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_bloom;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_bloomedSeedTransform;
- (void)_cleanUpAfterRevealing;
- (double)_currentTimeOffset;
- (id)_effectiveTintColor;
- (id)_effectiveTintColorWithAlpha:(double)arg1;
- (void)_goAway;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;
- (double)_percentageShowing;
- (void)_removeAllAnimations;
- (void)_resetToRevealingState;
- (void)_reveal;
- (void)_setBloomedAppearance;
- (void)_setSpunAppearance;
- (void)_setUnbloomedAppearance;
- (void)_snappingMagic;
- (void)_spin;
- (void)_tick;
- (void)_tickDueToProgrammaticRefresh;
- (void)_unbloom;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_unbloomedSeedTransform;
- (void)_updateTimeOffsetOfRelevantLayers;
- (bool)areAnimationsValid;
- (id)attributedTitle;
- (double)currentPopStiffness;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (double)impactIntensity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maximumSnappingHeight;
- (void)setAreAnimationsValid:(bool)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setCurrentPopStiffness:(double)arg1;
- (void)setImpactIntensity:(double)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)textLabel;
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;

@end
