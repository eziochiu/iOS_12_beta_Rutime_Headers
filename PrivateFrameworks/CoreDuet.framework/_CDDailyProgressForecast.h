/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDDailyProgressForecast : NSObject {
    double  _averageVar;
    NSArray * _mean;
    double  _temporalResolution;
    NSArray * _var;
}

@property double averageVar;
@property (retain) NSArray *mean;
@property double temporalResolution;
@property (retain) NSArray *var;

- (void).cxx_destruct;
- (double)averageProgressVariance;
- (double)averageVar;
- (id)description;
- (id)initWithMean:(id)arg1 andVariance:(id)arg2;
- (id)mean;
- (double)predictedProgressForTimeOfDay:(id)arg1;
- (double)predictedProgressVarianceForTimeOfDay:(id)arg1;
- (void)setAverageVar:(double)arg1;
- (void)setMean:(id)arg1;
- (void)setTemporalResolution:(double)arg1;
- (void)setVar:(id)arg1;
- (double)temporalResolution;
- (id)var;

@end
