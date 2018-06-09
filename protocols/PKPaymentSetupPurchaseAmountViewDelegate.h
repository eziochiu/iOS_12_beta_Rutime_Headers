/* made by EzioChiu.
 */

@protocol PKPaymentSetupPurchaseAmountViewDelegate <NSObject>

@required

- (void)didUpdateAmount:(NSDecimalNumber *)arg1 isValid:(bool)arg2;
- (void)shakeCard;
- (void)transferBalanceFromExistingCard;

@end
