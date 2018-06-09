/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest {
    NSData * _applicationData;
    PKPaymentPass * _pass;
    PKWrappedPayment * _wrappedPayment;
}

@property (nonatomic, copy) NSData *applicationData;
@property (nonatomic, readonly) NSString *endpointName;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKWrappedPayment *wrappedPayment;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceData:(id)arg2 account:(id)arg3;
- (id)applicationData;
- (id)bodyDictionaryWithDeviceData:(id)arg1;
- (id)endpointName;
- (id)initWithWrappedPayment:(id)arg1 paymentPass:(id)arg2;
- (id)pass;
- (void)setApplicationData:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setWrappedPayment:(id)arg1;
- (id)wrappedPayment;

@end
