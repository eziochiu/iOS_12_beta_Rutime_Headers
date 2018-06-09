/* made by EzioChiu.
 */

@protocol BCApplePayManagerProtocol

@required

- (long long)applePayStatus;
- (<BCApplePayManagerDelegate> *)delegate;
- (id)initWithMessage:(BCMessage *)arg1 delegate:(id <BCApplePayManagerDelegate>)arg2;
- (BCMessage *)message;
- (void)presentApplePay;
- (void)setDelegate:(id <BCApplePayManagerDelegate>)arg1;

@end
