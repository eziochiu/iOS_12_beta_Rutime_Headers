/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache {
    NSArray * _animationContextCaches;
    NSArray * _animations;
}

@property (nonatomic, readonly) NSArray *animationContextCaches;
@property (nonatomic, readonly) NSArray *animations;

- (id)animationContextCaches;
- (id)animations;
- (id)bestAnimationContextCacheForKeyPath:(id)arg1 atTime:(double)arg2;
- (void)dealloc;
- (id)initWithAnimation:(id)arg1;
- (double)p_groupTimingFactorAtTime:(double)arg1;
- (id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;

@end
