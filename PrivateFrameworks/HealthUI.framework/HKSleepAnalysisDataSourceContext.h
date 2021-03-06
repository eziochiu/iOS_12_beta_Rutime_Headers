/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepAnalysisDataSourceContext : NSObject {
    long long  _chartType;
}

@property (nonatomic) long long chartType;

+ (id)sleepAnalysisDataSourceContextWithChartType:(long long)arg1;

- (long long)chartType;
- (void)setChartType:(long long)arg1;

@end
