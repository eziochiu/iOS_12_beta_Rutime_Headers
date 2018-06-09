/* made by EzioChiu.
 */

@protocol SBKTransactionControllerDelegate <NSObject>

@required

- (void)transactionController:(SBKTransactionController *)arg1 transactionDidCancel:(SBKTransaction *)arg2 error:(SBKStoreError *)arg3;
- (bool)transactionController:(SBKTransactionController *)arg1 transactionDidFail:(SBKTransaction *)arg2 error:(SBKStoreError *)arg3;
- (void)transactionController:(SBKTransactionController *)arg1 transactionDidFinish:(SBKTransaction *)arg2;

@optional

- (bool)transactionController:(SBKTransactionController *)arg1 shouldScheduleTransaction:(SBKTransaction *)arg2;

@end
