/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMLPrediction : NSObject <NSCopying> {
    float  _mean;
    float  _pessimistic;
    float  _probability;
    float  _variance;
}

@property (nonatomic, readonly) float mean;
@property (nonatomic, readonly) float pessimistic;
@property (nonatomic, readonly) float probability;
@property (nonatomic, readonly) float variance;

+ (id)predictionWithProbability:(float)arg1 mean:(float)arg2 variance:(float)arg3 pessimistic:(float)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)mean;
- (float)pessimistic;
- (float)probability;
- (float)variance;

@end
