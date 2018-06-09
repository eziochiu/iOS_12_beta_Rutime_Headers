/* made by EzioChiu.
 */

@protocol DNDSAssertionSyncManagerDataSource <NSObject>

@required

- (NSArray *)activeLocalModeAssertionsForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
- (NSDate *)lastModeAssertionsCompleteInvalidationDateForSyncManager:(id <DNDSAssertionSyncManager>)arg1;

@end
