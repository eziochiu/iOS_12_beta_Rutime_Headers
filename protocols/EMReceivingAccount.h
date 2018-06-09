/* made by EzioChiu.
 */

@protocol EMReceivingAccount <EMAccount>

@required

- (<EMDeliveryAcount> *)deliveryAccount;
- (NSString *)smtpIdentifier;

@end
