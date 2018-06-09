/* made by EzioChiu.
 */

@protocol ISBiometricSessionDelegate <NSObject>

@optional

- (void)sender:(id)arg1 didFallbackToPassword:(bool)arg2;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(bool)arg2;
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3 isPayment:(bool)arg4 additionalHeaders:(NSDictionary *)arg5;

@end
