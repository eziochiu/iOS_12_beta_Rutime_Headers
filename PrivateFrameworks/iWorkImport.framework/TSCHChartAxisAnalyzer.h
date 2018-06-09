/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisAnalyzer : NSObject {
    TSCHChartAxis * mAxis;
    bool  mDidCalculateMedian;
    bool  mFirstValue;
    double  mMax;
    double  mMedian;
    double  mMin;
    unsigned long long  mNumValues;
    bool  mShouldCalculateMedian;
    double  mSumOfValues;
    NSMutableArray * mValues;
}

+ (id)analyzerForAxis:(id)arg1 needsMedian:(bool)arg2;

- (void).cxx_destruct;
- (void)addGridValue:(id)arg1 forSeries:(id)arg2;
- (double)average;
- (id)initForAxis:(id)arg1 needsMedian:(bool)arg2;
- (double)max;
- (double)median;
- (double)min;
- (bool)p_hasMedianReferenceLine;

@end
