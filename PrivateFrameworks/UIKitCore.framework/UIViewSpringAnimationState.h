/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewSpringAnimationState : UIViewAnimationState {
    double  _damping;
    double  _mass;
    double  _stiffness;
    double  _velocity;
}

+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double*)arg6 damping:(double*)arg7;
+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double*)arg6 damping:(double*)arg7 debugging:(id*)arg8;
+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5;

- (id)_defaultAnimationForKey:(id)arg1;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)generateSpringPropertiesForDuration:(double)arg1 damping:(double)arg2 velocity:(double)arg3;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id /* block */)arg7 completion:(id /* block */)arg8;

@end
