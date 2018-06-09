/* made by EzioChiu.
 */

@protocol PKPaymentSetupDelegate <NSObject>

@required

- (void)paymentSetupDidFinish:(PKPaymentSetupNavigationController *)arg1;

@optional

- (void)paymentSetupDidShowEligibilityIssue;
- (void)paymentSetupDidShowError:(NSError *)arg1;

@end
