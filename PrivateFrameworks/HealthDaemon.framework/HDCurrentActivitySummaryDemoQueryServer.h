/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCurrentActivitySummaryDemoQueryServer : HDQueryServer

+ (Class)queryClass;

- (id)_activitySummary;
- (void)_queue_start;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;

@end
