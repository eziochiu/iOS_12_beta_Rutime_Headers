/* made by EzioChiu.
 */

@protocol PKPaymentAuthorizationHostProtocol <NSObject>

@required

- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg1;
- (void)authorizationDidAuthorizePurchase:(PKServiceProviderPurchase *)arg1;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(CNContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationWillStart;

@optional

- (void)authorizationDidPresent;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;

@end
