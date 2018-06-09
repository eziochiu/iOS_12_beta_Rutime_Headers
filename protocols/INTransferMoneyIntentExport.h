/* made by EzioChiu.
 */

@protocol INTransferMoneyIntentExport <NSObject, JSExport>

@required

- (INPaymentAccount *)fromAccount;
- (id)init;
- (void)setFromAccount:(INPaymentAccount *)arg1;
- (void)setToAccount:(INPaymentAccount *)arg1;
- (void)setTransactionAmount:(INPaymentAmount *)arg1;
- (void)setTransactionNote:(NSString *)arg1;
- (void)setTransactionScheduledDate:(INDateComponentsRange *)arg1;
- (INPaymentAccount *)toAccount;
- (INPaymentAmount *)transactionAmount;
- (NSString *)transactionNote;
- (INDateComponentsRange *)transactionScheduledDate;

@end
