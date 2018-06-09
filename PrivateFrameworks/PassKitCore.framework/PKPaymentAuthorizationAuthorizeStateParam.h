/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam {
    NSData * _credential;
    PKAuthenticatorEvaluationResponse * _evaluationResponse;
    NSData * _nonceData;
}

@property (nonatomic, retain) NSData *credential;
@property (nonatomic, retain) PKAuthenticatorEvaluationResponse *evaluationResponse;
@property (nonatomic, retain) NSData *nonceData;

+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithCredential:(id)arg1;
+ (id)paramWithNonceParam:(id)arg1 nonce:(id)arg2;

- (void).cxx_destruct;
- (id)credential;
- (id)description;
- (id)evaluationResponse;
- (id)nonceData;
- (void)setCredential:(id)arg1;
- (void)setEvaluationResponse:(id)arg1;
- (void)setNonceData:(id)arg1;

@end