/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface SBIconProgressView : UIView {
    _SBIconProgressFractionTransition * _activeFractionTransition;
    _SBIconProgressPausedTransition * _activePausedTransition;
    _SBInstallProgressStateTransition * _activeStateTransition;
    double  _backgroundAlpha;
    bool  _canAnimate;
    double  _circleRadiusFraction;
    <SBIconProgressViewDelegate> * _delegate;
    CADisplayLink * _displayLink;
    double  _displayedFraction;
    long long  _displayedState;
    bool  _displayingPaused;
    double  _foregroundAlpha;
    double  _lastUpdate;
    UIImage * _maskImage;
    double  _modelFraction;
    bool  _modelPaused;
    long long  _modelState;
    UIImage * _overlayImage;
    double  _pauseRadiusFraction;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic) bool canAnimate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } circleBoundingRect;
@property (nonatomic) double circleRadiusFraction;
@property (nonatomic) <SBIconProgressViewDelegate> *delegate;
@property (nonatomic) double displayedFraction;
@property (nonatomic) long long displayedState;
@property (nonatomic) bool displayingPaused;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic, retain) UIImage *overlayImage;
@property (nonatomic) double pauseRadiusFraction;

+ (id)_pieImageAtFraction:(double)arg1;
+ (id)_pieImagesMemoryPool;

- (void)_clearDisplayLink;
- (void)_clearTransitionIfComplete:(id*)arg1;
- (void)_drawIncomingCircleWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_drawOutgoingCircleWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_drawPauseUIWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_drawPieWithCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_ensureDisplayLink;
- (bool)_hasActiveTransitions;
- (id)_maskImage;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateFractionTransitionAnimated:(bool)arg1;
- (void)_updatePausedTransitionAnimated:(bool)arg1;
- (void)_updateStateTransitionAnimated:(bool)arg1;
- (void)_updateTransitionsAnimated:(bool)arg1;
- (double)backgroundAlpha;
- (bool)canAnimate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleBoundingRect;
- (double)circleRadiusFraction;
- (void)dealloc;
- (id)delegate;
- (double)displayedFraction;
- (long long)displayedState;
- (bool)displayingPaused;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)foregroundAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overlayImage;
- (double)pauseRadiusFraction;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCanAnimate:(bool)arg1;
- (void)setCircleRadiusFraction:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedFraction:(double)arg1;
- (void)setDisplayedState:(long long)arg1;
- (void)setDisplayingPaused:(bool)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setPauseRadiusFraction:(double)arg1;
- (void)setState:(long long)arg1 paused:(bool)arg2 fractionLoaded:(double)arg3 animated:(bool)arg4;

@end
