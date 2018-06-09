/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)_quantityValueFromStatistics:(id)arg1 statisticsInterval:(id)arg2 date:(id)arg3;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
