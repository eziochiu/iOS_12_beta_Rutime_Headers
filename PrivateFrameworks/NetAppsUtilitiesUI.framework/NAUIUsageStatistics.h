/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

@interface NAUIUsageStatistics : NSObject {
    NSMutableDictionary * _nextAllowedUsageEventType;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _usageStatisticsDomain;
}

@property (nonatomic, readonly) NSString *usageStatisticsDomain;

+ (id)sharedUsageStatisticsForDomain:(id)arg1;
+ (id)voiceMemoUsageStatistics;

- (void).cxx_destruct;
- (id)_eventKeyForUsageStatisticName:(id)arg1 groupingKey:(id)arg2;
- (void)_incrementUsageCountForEventWithUsageStatisticName:(id)arg1 statisticType:(long long)arg2;
- (void)_pushDistributionStatisticNamed:(id)arg1 value:(double)arg2;
- (void)incrementUsageStatisticNamed:(id)arg1 statisticType:(long long)arg2;
- (id)initWithUsageStatisticsDomain:(id)arg1;
- (void)pushDistributionStatisticNamed:(id)arg1 value:(double)arg2;
- (id)usageStatisticsDomain;

@end
