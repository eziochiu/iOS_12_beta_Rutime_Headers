/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryRankerParameters : _QPParameters {
    NSString * _aggregationFunction;
    NSNumber * _diffWeekPeriodWeight;
    NSNumber * _durationWeight;
    NSNumber * _engagementWeight;
    NSNumber * _eventWindow;
    NSNumber * _minimumTermFrequency;
    NSString * _modelName;
    NSNumber * _offset;
    NSDate * _referenceDate;
    NSNumber * _renderWeight;
    NSNumber * _resultLimit;
    NSNumber * _sameWeekPeriodWeight;
    NSNumber * _scoreThreshold;
    NSNumber * _timeHalfLife;
    NSNumber * _timeOfDayHalfLife;
    NSNumber * _timeOfDayWeight;
    NSNumber * _timeOfWeekHalfLife;
    NSNumber * _timeOfWeekWeight;
    NSNumber * _timeWeight;
}

@property (readonly) NSString *aggregationFunction;
@property (readonly) NSNumber *diffWeekPeriodWeight;
@property (readonly) NSNumber *durationWeight;
@property (readonly) NSNumber *engagementWeight;
@property (readonly) NSNumber *eventWindow;
@property (retain) NSNumber *minimumTermFrequency;
@property (readonly) NSString *modelName;
@property (readonly) NSNumber *offset;
@property (readonly) NSDate *referenceDate;
@property (readonly) NSNumber *renderWeight;
@property (retain) NSNumber *resultLimit;
@property (readonly) NSNumber *sameWeekPeriodWeight;
@property (readonly) NSNumber *scoreThreshold;
@property (readonly) NSNumber *timeHalfLife;
@property (readonly) NSNumber *timeOfDayHalfLife;
@property (readonly) NSNumber *timeOfDayWeight;
@property (readonly) NSNumber *timeOfWeekHalfLife;
@property (readonly) NSNumber *timeOfWeekWeight;
@property (readonly) NSNumber *timeWeight;

+ (id)parametersForModel:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)aggregationFunction;
- (id)defaultValues;
- (id)diffWeekPeriodWeight;
- (id)durationWeight;
- (id)engagementWeight;
- (id)eventWindow;
- (id)minimumTermFrequency;
- (id)modelName;
- (id)offset;
- (id)referenceDate;
- (id)renderWeight;
- (id)resultLimit;
- (id)sameWeekPeriodWeight;
- (id)scoreThreshold;
- (void)setMinimumTermFrequency:(id)arg1;
- (void)setResultLimit:(id)arg1;
- (id)timeHalfLife;
- (id)timeOfDayHalfLife;
- (id)timeOfDayWeight;
- (id)timeOfWeekHalfLife;
- (id)timeOfWeekWeight;
- (id)timeWeight;

@end
