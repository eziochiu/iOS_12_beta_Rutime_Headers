/* made by EzioChiu.
 */

@protocol PKPaymentSetupDisambiguationViewControllerDelegate <NSObject>

@required

- (void)disambiguationViewController:(PKPaymentSetupDisambiguationViewController *)arg1 didSelectProduct:(PKPaymentSetupProduct *)arg2;
- (void)disambiguationViewControllerSetupLater:(PKPaymentSetupDisambiguationViewController *)arg1;

@end
