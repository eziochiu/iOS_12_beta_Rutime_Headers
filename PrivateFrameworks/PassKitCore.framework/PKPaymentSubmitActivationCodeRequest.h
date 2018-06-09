/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest {
    PKPaymentPass * _pass;
    NSString * _verificationCode;
    NSData * _verificationData;
}

@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, copy) NSString *verificationCode;
@property (nonatomic, copy) NSData *verificationData;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (id)pass;
- (void)setPass:(id)arg1;
- (void)setVerificationCode:(id)arg1;
- (void)setVerificationData:(id)arg1;
- (id)verificationCode;
- (id)verificationData;

@end
