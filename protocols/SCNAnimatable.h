/* made by EzioChiu.
 */

@protocol SCNAnimatable <NSObject>

@required

- (void)addAnimation:(id <SCNAnimation>)arg1 forKey:(NSString *)arg2;
- (void)addAnimationPlayer:(SCNAnimationPlayer *)arg1 forKey:(NSString *)arg2;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (SCNAnimationPlayer *)animationPlayerForKey:(NSString *)arg1;
- (bool)isAnimationForKeyPaused:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAnimationForKey:(NSString *)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(NSString *)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(NSString *)arg2;

@end
