/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentVerificationUpdateRequest : PKPaymentWebServiceRequest {
    PKVerificationChannel * _channel;
    PKPaymentPass * _pass;
    NSString * _stepIdentifier;
}

@property (nonatomic, retain) PKVerificationChannel *channel;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, copy) NSString *stepIdentifier;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 deviceData:(id)arg4 webService:(id)arg5 certChain:(id)arg6 devSigned:(bool)arg7 completion:(id /* block */)arg8;
- (id)channel;
- (id)pass;
- (void)setChannel:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (id)stepIdentifier;

@end
