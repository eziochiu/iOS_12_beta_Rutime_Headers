/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingViewSettings : PXSettings {
    bool  _allowPaging;
    bool  _allowPreheating;
    bool  _allowTileReuse;
    bool  _allowsEdgeAntialiasing;
    double  _animationDragCoefficient;
    bool  _carryOverVelocities;
    double  _defaultAnimationDuration;
    double  _interactiveTransitionBackgroundDimming;
    bool  _rotateDisappearingTiles;
    bool  _showSnapshottableTiles;
    bool  _showVisibleRects;
    double  _springAnimationDuration;
    bool  _tintTiles;
    double  _transitionChromeDelay;
    double  _transitionDuration;
    long long  _transitionProgressBehavior;
    bool  _useOvershootingSpringAnimations;
    bool  _useSpringAnimations;
    bool  _useSystemSpringAnimations;
}

@property (nonatomic) bool allowPaging;
@property (nonatomic) bool allowPreheating;
@property (nonatomic) bool allowTileReuse;
@property (nonatomic) bool allowsEdgeAntialiasing;
@property (nonatomic) double animationDragCoefficient;
@property (nonatomic) bool carryOverVelocities;
@property (nonatomic) double defaultAnimationDuration;
@property (nonatomic) double interactiveTransitionBackgroundDimming;
@property (nonatomic) bool rotateDisappearingTiles;
@property (nonatomic) bool showSnapshottableTiles;
@property (nonatomic) bool showVisibleRects;
@property (nonatomic) double springAnimationDuration;
@property (nonatomic) bool tintTiles;
@property (nonatomic) double transitionChromeDelay;
@property (nonatomic) double transitionDuration;
@property (nonatomic) long long transitionProgressBehavior;
@property (nonatomic) bool useOvershootingSpringAnimations;
@property (nonatomic) bool useSpringAnimations;
@property (nonatomic) bool useSystemSpringAnimations;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowPaging;
- (bool)allowPreheating;
- (bool)allowTileReuse;
- (bool)allowsEdgeAntialiasing;
- (double)animationDragCoefficient;
- (bool)carryOverVelocities;
- (double)defaultAnimationDuration;
- (double)interactiveTransitionBackgroundDimming;
- (id)parentSettings;
- (bool)rotateDisappearingTiles;
- (void)setAllowPaging:(bool)arg1;
- (void)setAllowPreheating:(bool)arg1;
- (void)setAllowTileReuse:(bool)arg1;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setAnimationDragCoefficient:(double)arg1;
- (void)setCarryOverVelocities:(bool)arg1;
- (void)setDefaultAnimationDuration:(double)arg1;
- (void)setDefaultValues;
- (void)setInteractiveTransitionBackgroundDimming:(double)arg1;
- (void)setRotateDisappearingTiles:(bool)arg1;
- (void)setShowSnapshottableTiles:(bool)arg1;
- (void)setShowVisibleRects:(bool)arg1;
- (void)setSpringAnimationDuration:(double)arg1;
- (void)setTintTiles:(bool)arg1;
- (void)setTransitionChromeDelay:(double)arg1;
- (void)setTransitionDuration:(double)arg1;
- (void)setTransitionProgressBehavior:(long long)arg1;
- (void)setUseOvershootingSpringAnimations:(bool)arg1;
- (void)setUseSpringAnimations:(bool)arg1;
- (void)setUseSystemSpringAnimations:(bool)arg1;
- (bool)showSnapshottableTiles;
- (bool)showVisibleRects;
- (double)springAnimationDuration;
- (bool)tintTiles;
- (double)transitionChromeDelay;
- (double)transitionDuration;
- (long long)transitionProgressBehavior;
- (bool)useOvershootingSpringAnimations;
- (bool)useSpringAnimations;
- (bool)useSystemSpringAnimations;

@end
