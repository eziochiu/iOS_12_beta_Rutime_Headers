/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsQueryServer : HDQueryServer {
    NSDateInterval * _dateInterval;
    unsigned long long  _mergeStrategy;
    unsigned long long  _statisticsOptions;
}

@property (nonatomic, readonly) unsigned long long mergeStrategy;
@property (nonatomic, readonly) unsigned long long statisticsOptions;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (id)_queue_fetchStatisticsWithError:(id*)arg1;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (unsigned long long)mergeStrategy;
- (unsigned long long)statisticsOptions;

@end
