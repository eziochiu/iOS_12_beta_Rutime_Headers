/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPExpertParameters : _QPParameters {
    NSNumber * _basePointsForConnections;
    NSNumber * _basePointsForHistorical;
    NSNumber * _basePointsForRoutine;
    NSNumber * _candidateLimitForConnections;
    NSNumber * _candidateLimitForHistorical;
    NSNumber * _candidateLimitForRoutine;
    NSNumber * _contributesWithForegroundAppConnections;
    NSNumber * _contributesWithForegroundAppHistorical;
    NSNumber * _contributesWithForegroundAppRoutine;
}

@property (nonatomic, readonly) NSNumber *basePointsForConnections;
@property (nonatomic, readonly) NSNumber *basePointsForHistorical;
@property (nonatomic, readonly) NSNumber *basePointsForRoutine;
@property (nonatomic, readonly) NSNumber *candidateLimitForConnections;
@property (nonatomic, readonly) NSNumber *candidateLimitForHistorical;
@property (nonatomic, readonly) NSNumber *candidateLimitForRoutine;
@property (nonatomic, readonly) NSNumber *contributesWithForegroundAppConnections;
@property (nonatomic, readonly) NSNumber *contributesWithForegroundAppHistorical;
@property (nonatomic, readonly) NSNumber *contributesWithForegroundAppRoutine;

- (void).cxx_destruct;
- (id)basePointsForConnections;
- (id)basePointsForHistorical;
- (id)basePointsForRoutine;
- (id)candidateLimitForConnections;
- (id)candidateLimitForHistorical;
- (id)candidateLimitForRoutine;
- (id)contributesWithForegroundAppConnections;
- (id)contributesWithForegroundAppHistorical;
- (id)contributesWithForegroundAppRoutine;
- (id)defaultValues;

@end
