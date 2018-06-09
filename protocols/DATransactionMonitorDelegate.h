/* made by EzioChiu.
 */

@protocol DATransactionMonitorDelegate <NSObject>

@required

- (void)didFinishAllXPCTransactions;

@end
