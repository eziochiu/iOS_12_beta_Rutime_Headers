/* made by EzioChiu.
 */

@protocol HDActivityCacheManagerObserver <NSObject>

@required

- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedTodayActivityCache:(HKActivityCache *)arg2;

@optional

- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedHeartRateSummary:(HKHeartRateSummary *)arg2 isToday:(bool)arg3;
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedYesterdayActivityCache:(HKActivityCache *)arg2;

@end
