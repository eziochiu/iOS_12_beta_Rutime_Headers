/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAnimatedLabel : _TVLabel {
    bool  _animating;
    NSArray * _attributedStrings;
    double  _crossfadeDuration;
    bool  _crossfading;
    unsigned long long  _currentAttributedStringIndex;
    __TVAnimatedImageView * _currentMarqueeView;
    double  _marqueeDelay;
    bool  _marqueeNeeded;
    bool  _marqueeing;
    double  _maskCapWidth;
    CALayer * _maskLayer;
    __TVAnimatedImageView * _nextMarqueeView;
    bool  _paused;
    double  _replicationPadding;
    float  _scrollRate;
    double  _underPosterOutset;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, copy) NSArray *attributedStrings;
@property (nonatomic) double crossfadeDuration;
@property (nonatomic, readonly) unsigned long long currentAttributedStringIndex;
@property (nonatomic, readonly) __TVAnimatedImageView *currentMarqueeView;
@property (nonatomic) double marqueeDelay;
@property (nonatomic) double maskCapWidth;
@property (nonatomic, readonly) __TVAnimatedImageView *nextMarqueeView;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) double replicationPadding;
@property (nonatomic) float scrollRate;
@property (nonatomic) double underPosterOutset;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_clearAnimations;
- (void)_clearAttributedStrings;
- (void)_clearLabelTextContents;
- (id)_imageForText:(bool)arg1;
- (void)_nextAttributedString;
- (void)_prepareNextMarquee;
- (bool)_shouldCycle;
- (void)_startMarqueeIfNeeded;
- (id)attributedStrings;
- (double)crossfadeDuration;
- (unsigned long long)currentAttributedStringIndex;
- (id)currentMarqueeView;
- (void)dealloc;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (bool)isPaused;
- (double)marqueeDelay;
- (double)maskCapWidth;
- (id)nextMarqueeView;
- (double)replicationPadding;
- (float)scrollRate;
- (void)setAnimating:(bool)arg1;
- (void)setAttributedStrings:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setCrossfadeDuration:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMarqueeDelay:(double)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMarqueeRunning:(bool)arg1;
- (void)setMaskCapWidth:(double)arg1;
- (void)setNeedsDisplay;
- (void)setPaused:(bool)arg1;
- (void)setReplicationPadding:(double)arg1;
- (void)setScrollRate:(float)arg1;
- (void)setText:(id)arg1;
- (void)setUnderPosterOutset:(double)arg1;
- (void)stopAndResetScrollWithDuration:(double)arg1;
- (void)stopAnimating;
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;
- (double)underPosterOutset;

@end
