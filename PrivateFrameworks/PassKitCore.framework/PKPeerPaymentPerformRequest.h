/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest {
    NSDictionary * _certificates;
    NSData * _paymentData;
    NSString * _pushToken;
    NSString * _quoteIdentifier;
    NSString * _recipientPhoneOrEmail;
    NSData * _signedEnrollmentDataSignature;
}

@property (nonatomic, copy) NSDictionary *certificates;
@property (nonatomic, copy) NSData *paymentData;
@property (nonatomic, copy) NSString *pushToken;
@property (nonatomic, copy) NSString *quoteIdentifier;
@property (nonatomic, copy) NSString *recipientPhoneOrEmail;
@property (nonatomic, copy) NSData *signedEnrollmentDataSignature;

+ (id)requestWithAuthorizedPeerPaymentQuote:(id)arg1;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;
- (id)certificates;
- (id)paymentData;
- (id)pushToken;
- (id)quoteIdentifier;
- (id)recipientPhoneOrEmail;
- (void)setCertificates:(id)arg1;
- (void)setPaymentData:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setQuoteIdentifier:(id)arg1;
- (void)setRecipientPhoneOrEmail:(id)arg1;
- (void)setSignedEnrollmentDataSignature:(id)arg1;
- (id)signedEnrollmentDataSignature;

@end
