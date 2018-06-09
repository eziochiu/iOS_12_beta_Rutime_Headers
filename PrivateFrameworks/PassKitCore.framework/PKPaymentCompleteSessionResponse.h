/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase {
    NSString * _retryNonce;
}

@property (nonatomic, readonly, copy) NSString *retryNonce;

- (void).cxx_destruct;
- (id)retryNonce;

@end
