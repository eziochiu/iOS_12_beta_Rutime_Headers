/* made by EzioChiu.
 */

@protocol PKPeerPaymentPerformActionView <PKPerformActionView>

@required

- (PKPeerPaymentAccount *)account;
- (void)amountTextFieldShouldAcceptTouches:(bool)arg1;
- (void)setAccount:(PKPeerPaymentAccount *)arg1;

@end
