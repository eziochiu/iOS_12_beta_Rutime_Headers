/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam {
    NSData * _nonceData;
    PKWrappedPayment * _wrappedPayment;
}

@property (nonatomic, retain) NSData *nonceData;
@property (nonatomic, retain) PKWrappedPayment *wrappedPayment;

+ (id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)nonceData;
- (void)setNonceData:(id)arg1;
- (void)setWrappedPayment:(id)arg1;
- (id)wrappedPayment;

@end
