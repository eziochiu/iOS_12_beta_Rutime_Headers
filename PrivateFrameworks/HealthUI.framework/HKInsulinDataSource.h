/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_combineBasalStatistics:(id)arg1 withTotalStatistics:(id)arg2 filterInterval:(id)arg3;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (id /* block */)userInfoCreationBlock;

@end
