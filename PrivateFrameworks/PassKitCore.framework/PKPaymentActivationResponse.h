/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse {
    NSURL * _passURL;
    NSString * _previousStepIdentifier;
    NSDictionary * _requiredVerificationFieldData;
    NSString * _stepIdentifier;
    NSArray * _verificationChannels;
    long long  _verificationStatus;
}

@property (nonatomic, readonly, copy) NSURL *passURL;
@property (nonatomic, readonly, copy) NSString *previousStepIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *requiredVerificationFieldData;
@property (nonatomic, readonly, copy) NSString *stepIdentifier;
@property (nonatomic, copy) NSArray *verificationChannels;
@property (nonatomic) long long verificationStatus;

+ (id)responseWithData:(id)arg1 forPass:(id)arg2;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 forPass:(id)arg2;
- (id)passURL;
- (id)previousStepIdentifier;
- (id)requiredVerificationFieldData;
- (void)setVerificationChannels:(id)arg1;
- (void)setVerificationStatus:(long long)arg1;
- (id)stepIdentifier;
- (id)verificationChannels;
- (long long)verificationStatus;

@end
