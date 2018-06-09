/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKChartPointRangeBuilder : NSObject {
    double  _maximumMax;
    double  _minimumMin;
    long long  _numChartPoints;
    double  _uMax;
    double  _uMin;
    double  _vMax;
    double  _vMin;
}

@property (nonatomic) double maximumMax;
@property (nonatomic) double minimumMin;
@property (nonatomic) long long numChartPoints;
@property (nonatomic, readonly) HKValueRange *suggestedValueRange;
@property (nonatomic) double uMax;
@property (nonatomic) double uMin;
@property (nonatomic) double vMax;
@property (nonatomic) double vMin;

- (id)init;
- (double)maximumMax;
- (double)minimumMin;
- (long long)numChartPoints;
- (void)setMaximumMax:(double)arg1;
- (void)setMinimumMin:(double)arg1;
- (void)setNumChartPoints:(long long)arg1;
- (void)setUMax:(double)arg1;
- (void)setUMin:(double)arg1;
- (void)setVMax:(double)arg1;
- (void)setVMin:(double)arg1;
- (id)suggestedValueRange;
- (double)uMax;
- (double)uMin;
- (double)vMax;
- (double)vMin;
- (void)visitChartPoint:(id)arg1;

@end
