/* made by EzioChiu.
 */

@protocol INPayBillIntentExport <NSObject, JSExport>

@required

- (INBillPayee *)billPayee;
- (long long)billType;
- (INDateComponentsRange *)dueDate;
- (INPaymentAccount *)fromAccount;
- (id)init;
- (void)setBillPayee:(INBillPayee *)arg1;
- (void)setBillType:(long long)arg1;
- (void)setDueDate:(INDateComponentsRange *)arg1;
- (void)setFromAccount:(INPaymentAccount *)arg1;
- (void)setTransactionAmount:(INPaymentAmount *)arg1;
- (void)setTransactionNote:(NSString *)arg1;
- (void)setTransactionScheduledDate:(INDateComponentsRange *)arg1;
- (INPaymentAmount *)transactionAmount;
- (NSString *)transactionNote;
- (INDateComponentsRange *)transactionScheduledDate;

@end
