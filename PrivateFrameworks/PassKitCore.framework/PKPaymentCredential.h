/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCredential : NSObject {
    long long  _credentialType;
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSString * _expiration;
    NSString * _longDescription;
    PKPaymentRequirementsResponse * _requirementsResponse;
    NSString * _sanitizedPrimaryAccountNumber;
}

@property (nonatomic) long long credentialType;
@property (nonatomic, retain) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic, copy) NSString *longDescription;
@property (nonatomic, retain) PKPaymentRequirementsResponse *requirementsResponse;
@property (nonatomic, copy) NSString *sanitizedPrimaryAccountNumber;
@property (getter=isTransitCredential, nonatomic, readonly) bool transitCredential;

+ (id)fakeRemoteCredentials;

- (void).cxx_destruct;
- (id)contactlessProductCredential;
- (long long)credentialType;
- (id)digitalIssuanceProductCredential;
- (id)eligibilityResponse;
- (id)expiration;
- (bool)isContactlessProductCredential;
- (bool)isDigitalIssuanceProductCredential;
- (bool)isLocalPassCredential;
- (bool)isPeerPaymentCredential;
- (bool)isPurchasedProductCredential;
- (bool)isRemoteCredential;
- (bool)isTransitCredential;
- (id)localPassCredential;
- (id)longDescription;
- (id)peerPaymentCredential;
- (id)purchasedProductCredential;
- (id)remoteCredential;
- (id)requirementsResponse;
- (id)sanitizedPrimaryAccountNumber;
- (void)setCredentialType:(long long)arg1;
- (void)setEligibilityResponse:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setRequirementsResponse:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;

@end
