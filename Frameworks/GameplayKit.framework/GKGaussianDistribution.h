/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKGaussianDistribution : GKRandomDistribution {
    float  _deviation;
    float  _mean;
}

@property (nonatomic, readonly) float deviation;
@property (nonatomic, readonly) float mean;

- (float)deviation;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (id)initWithRandomSource:(id)arg1 mean:(float)arg2 deviation:(float)arg3;
- (float)mean;
- (long long)nextInt;

@end
