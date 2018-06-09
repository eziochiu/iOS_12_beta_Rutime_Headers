/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKShuffledDistribution : GKRandomDistribution {
    long long  _delta;
    long long  _lastInt;
    long long * _nextInts;
    long long  _nextIntsCapacity;
    long long  _nextIntsCount;
    float  _uniformDistance;
}

- (void)dealloc;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 delta:(long long)arg4;
- (long long)nextInt;
- (void)setUniformDistance:(float)arg1;
- (float)uniformDistance;

@end
