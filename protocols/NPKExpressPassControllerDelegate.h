/* made by EzioChiu.
 */

@protocol NPKExpressPassControllerDelegate <NSObject>

@optional

- (void)expressPassController:(NPKExpressPassController *)arg1 didCompleteTransactionForPass:(PKPass *)arg2;
- (void)expressPassController:(NPKExpressPassController *)arg1 didFailTransactionForPass:(PKPass *)arg2;
- (void)expressPassController:(NPKExpressPassController *)arg1 didStartTransactionForPass:(PKPass *)arg2;
- (void)expressPassController:(NPKExpressPassController *)arg1 didUpdateExpressPasses:(NSSet *)arg2 expressPassesInformation:(NSSet *)arg3;

@end
