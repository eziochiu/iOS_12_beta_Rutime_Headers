/* made by EzioChiu.
 */

@protocol HKQueryDelegate <NSObject>

@required

- (void)closeTransactionForType:(HKObjectType *)arg1 anchor:(NSNumber *)arg2 ackTime:(NSNumber *)arg3 query:(HKQuery *)arg4;
- (void)queryDidFinishExecuting:(HKQuery *)arg1;

@end
