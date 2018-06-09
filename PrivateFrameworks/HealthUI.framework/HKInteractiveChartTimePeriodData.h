/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData> {
    long long  _recordCount;
    NSDateComponents * _statisticsInterval;
    double  _timePeriod;
    NSString * _timePeriodPrefix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long recordCount;
@property (nonatomic, retain) NSDateComponents *statisticsInterval;
@property (readonly) Class superclass;
@property (nonatomic) double timePeriod;
@property (nonatomic, retain) NSString *timePeriodPrefix;

- (void).cxx_destruct;
- (long long)recordCount;
- (void)setRecordCount:(long long)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (void)setTimePeriod:(double)arg1;
- (void)setTimePeriodPrefix:(id)arg1;
- (id)statisticsInterval;
- (double)timePeriod;
- (id)timePeriodPrefix;

@end
