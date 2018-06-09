/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUICallToActionLabel : UIView <CAAnimationDelegate> {
    NSMutableArray * _animationCompletionBlocks;
    NSTimer * _animationTimer;
    bool  _disablesGradientFadeInAnimation;
    CAGradientLayer * _gradientLayer;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
    unsigned long long  _state;
    NSString * _text;
}

@property (nonatomic, retain) NSMutableArray *animationCompletionBlocks;
@property (nonatomic, retain) NSTimer *animationTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBUILegibilityLabel *label;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_actuallyRunGradientAnimation;
- (void)_addAnimationCompletionBlockIfNecessary:(id /* block */)arg1;
- (id)_callToActionFont;
- (void)_createGradientLayer;
- (void)_createLabel;
- (void)_executePostAnimationCompletionBlocks;
- (id)_fontWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 withMaximumFontSizeCategory:(id)arg3;
- (void)_invalidateGradientAnimationTimer;
- (void)_preferredTextSizeChanged:(id)arg1;
- (void)_resetGradientAndLabelBefore:(bool)arg1;
- (void)_runFadeAnimationForFadingOut:(bool)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)_runGradientAnimation:(bool)arg1;
- (void)_timerTriggered;
- (void)_updateLabelTextWithLanguage:(id)arg1;
- (id)animationCompletionBlocks;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)animationTimer;
- (double)baselineOffset;
- (void)cancelFadeInTimerIfNecessary;
- (id)description;
- (void)didMoveToSuperview;
- (void)fadeIn;
- (void)fadeInImmediately:(bool)arg1;
- (void)fadeInImmediately:(bool)arg1 completion:(id /* block */)arg2;
- (void)fadeOut;
- (void)fadeOutWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setAnimationCompletionBlocks:(id)arg1;
- (void)setAnimationTimer:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 forLanguage:(id)arg2 animated:(bool)arg3;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (unsigned long long)state;
- (id)text;

@end
