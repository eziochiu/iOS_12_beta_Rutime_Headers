/* made by EzioChiu.
 */

@protocol DNDSAssertionSyncManagerDelegate <NSObject>

@required

- (void)syncManager:(id <DNDSAssertionSyncManager>)arg1 invalidateAllModeAssertionsTakenBeforeDate:(NSDate *)arg2 forReason:(unsigned long long)arg3;

@end
