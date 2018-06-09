/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
 */

@interface PDMeasurement : NSObject {
    PDContainer * _container;
    unsigned long long  _group;
    bool  _largerBetter;
    NSNumber * _maximum;
    NSNumber * _mean;
    NSDictionary * _measurement;
    NSString * _metric;
    NSNumber * _minimum;
    NSNumber * _sampleCount;
    NSNumber * _standardDeviation;
    NSString * _unitString;
    NSNumber * _value;
    NSDictionary * _variables;
}

@property (nonatomic) PDContainer *container;
@property (nonatomic) unsigned long long group;
@property (nonatomic, readonly) unsigned long long histogramBucketCount;
@property (nonatomic) bool largerBetter;
@property (nonatomic, retain) NSNumber *maximum;
@property (nonatomic, retain) NSNumber *mean;
@property (nonatomic, retain) NSDictionary *measurement;
@property (nonatomic, retain) NSString *metric;
@property (nonatomic, retain) NSNumber *minimum;
@property (nonatomic, readonly) unsigned long long percentileCount;
@property (nonatomic, retain) NSNumber *sampleCount;
@property (nonatomic, retain) NSNumber *standardDeviation;
@property (nonatomic, retain) NSString *unitString;
@property (nonatomic, retain) NSNumber *value;
@property (nonatomic, retain) NSDictionary *variables;

- (void).cxx_destruct;
- (id)container;
- (id)description;
- (bool)enumerateHistogramBucketsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (bool)enumeratePercentilesWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)group;
- (unsigned long long)histogramBucketCount;
- (id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id*)arg4;
- (bool)isComparableTo:(id)arg1;
- (bool)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2;
- (bool)isComparableTo:(id)arg1 ignoringVariables:(id)arg2;
- (bool)isLike:(id)arg1;
- (bool)largerBetter;
- (bool)matchesMetricFilter:(id)arg1;
- (id)maximum;
- (id)mean;
- (id)measurement;
- (id)metric;
- (id)metricFilter;
- (id)metricFilterIgnoringNullableVariables:(id)arg1;
- (id)metricFilterIgnoringVariables:(id)arg1;
- (id)minimum;
- (unsigned long long)percentileCount;
- (id)sampleCount;
- (void)setContainer:(id)arg1;
- (void)setGroup:(unsigned long long)arg1;
- (void)setLargerBetter:(bool)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMean:(id)arg1;
- (void)setMeasurement:(id)arg1;
- (void)setMetric:(id)arg1;
- (void)setMinimum:(id)arg1;
- (void)setSampleCount:(id)arg1;
- (void)setStandardDeviation:(id)arg1;
- (void)setUnitString:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setVariables:(id)arg1;
- (id)standardDeviation;
- (id)unitString;
- (id)value;
- (id)variables;

@end
