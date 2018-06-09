/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVPersonDeduperProfile : NSObject <NSCopying> {
    double  _fuzzyMaximumDistance;
    double  _normalMaximumDistance;
    bool  _shouldRelaxThreshold;
    double  _strictMaximumDistance;
}

@property (nonatomic) double fuzzyMaximumDistance;
@property (nonatomic) double normalMaximumDistance;
@property (nonatomic) bool shouldRelaxThreshold;
@property (nonatomic) double strictMaximumDistance;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)fuzzyMaximumDistance;
- (id)init;
- (double)normalMaximumDistance;
- (void)setFuzzyMaximumDistance:(double)arg1;
- (void)setNormalMaximumDistance:(double)arg1;
- (void)setShouldRelaxThreshold:(bool)arg1;
- (void)setStrictMaximumDistance:(double)arg1;
- (bool)shouldRelaxThreshold;
- (double)strictMaximumDistance;

@end
