/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {
    NSString * _applicationIdentifier;
    long long  _cardType;
    long long  _eligibilityStatus;
    NSString * _identifier;
    NSURL * _learnMoreURL;
    NSString * _nonce;
    NSString * _region;
    NSString * _termsID;
    NSURL * _termsURL;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly) long long eligibilityStatus;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSURL *learnMoreURL;
@property (nonatomic, readonly, copy) NSString *nonce;
@property (nonatomic, readonly, copy) NSString *region;
@property (nonatomic, readonly, copy) NSString *termsID;
@property (nonatomic, readonly, copy) NSURL *termsURL;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (long long)cardType;
- (long long)eligibilityStatus;
- (id)identifier;
- (id)initWithData:(id)arg1;
- (id)learnMoreURL;
- (id)nonce;
- (id)region;
- (id)termsID;
- (id)termsURL;

@end
