/* made by EzioChiu.
 */

@protocol DNDSAssertionSyncManager <DNDSObservableModeAssertionProvider>

@required

- (<DNDSAssertionSyncManagerDataSource> *)dataSource;
- (<DNDSAssertionSyncManagerDelegate> *)delegate;
- (void)invalidateAllModeAssertionsTakenBeforeDate:(NSDate *)arg1 forReason:(unsigned long long)arg2;
- (void)resume;
- (void)setDataSource:(id <DNDSAssertionSyncManagerDataSource>)arg1;
- (void)setDelegate:(id <DNDSAssertionSyncManagerDelegate>)arg1;
- (void)update;

@end
