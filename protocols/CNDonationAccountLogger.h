/* made by EzioChiu.
 */

@protocol CNDonationAccountLogger <NSObject>

@required

- (void)accountAdded:(ACAccount *)arg1;
- (void)accountChanged:(ACAccount *)arg1;
- (void)accountRemoved:(ACAccount *)arg1;
- (void)donating:(CNDonationValue *)arg1;
- (void)donationFailedWithError:(NSError *)arg1;
- (void)pluginLoaded;
- (void)pluginUnloaded;
- (void)removalFailedWithError:(NSError *)arg1;
- (void)removing:(NSString *)arg1;

@end