/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKDownloadIndicatorView : UIView {
    float  _currentAnimatedProgress;
    CADisplayLink * _displayLink;
    float  _initialAnimatedProgress;
    bool  _isAnimatingProgress;
    float  _progress;
    NSMutableArray * _progressAnimationCompletionHandlers;
    double  _progressAnimationEndTime;
    double  _progressAnimationStartTime;
    CAMediaTimingFunction * _progressAnimationTimingFunction;
}

@property (nonatomic) float progress;

+ (struct CGSize { double x1; double x2; })_intrinsicDownloadIndicatorViewSize;

- (void).cxx_destruct;
- (void)_handleDisplayLinkDidFire:(id)arg1;
- (void)_stopProgressAnimation;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (float)progress;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
