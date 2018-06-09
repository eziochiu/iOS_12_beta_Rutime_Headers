/* made by EzioChiu.
 */

@protocol UIIntervalAnimating <NSObject>

@required

- (bool)isStable;
- (void)setVelocity:(id <UIVectorOperatable>)arg1;
- (<UIVectorOperatable> *)stepWithDelta:(double)arg1;
- (<UIVectorOperatable> *)targetValue;
- (<UIVectorOperatable> *)velocity;

@end
