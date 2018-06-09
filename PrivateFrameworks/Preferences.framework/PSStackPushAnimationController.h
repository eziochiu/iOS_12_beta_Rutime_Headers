/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    long long  _animationPreset;
    NSMutableArray * _animationsToRunAlongsideToVC;
    id /* block */  _completionBlock;
    double  _completionStagger;
    bool  _hasStartedAnimation;
    UINavigationController * _navigationController;
    double  _pushDuration;
    NSArray * _snapshots;
    double  _springDamping;
    double  _startStagger;
    NSArray * _viewControllers;
}

@property (nonatomic) long long animationPreset;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) double completionStagger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic) double pushDuration;
@property (nonatomic) double springDamping;
@property (nonatomic) double startStagger;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewControllers;

+ (id)_animationParametersForPreset:(long long)arg1;
+ (id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3;
+ (id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2;
+ (void)resetDefaultAnimationParameters;
+ (void)setDefaultAnimationPreset:(long long)arg1;

- (void).cxx_destruct;
- (double)_actualDuration;
- (void)_addAnimation:(id /* block */)arg1 forViewAtIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (double)_desiredDuration;
- (void)_loadDefaultValues;
- (bool)_shouldSkipFirstPush;
- (id)_valueForAnimationParameter:(id)arg1;
- (void)animateAlongsideToViewController:(id /* block */)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (long long)animationPreset;
- (id /* block */)completionBlock;
- (double)completionStagger;
- (id)init;
- (id)navigationController;
- (double)pushDuration;
- (void)setAnimationPreset:(long long)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCompletionStagger:(double)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPushDuration:(double)arg1;
- (void)setSpringDamping:(double)arg1;
- (void)setStartStagger:(double)arg1;
- (void)setViewControllers:(id)arg1;
- (double)springDamping;
- (double)startStagger;
- (double)transitionDuration:(id)arg1;
- (id)viewControllers;

@end
