/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSetupFlowConfiguration : NSObject {
    NSArray * _bundlesIDsToConsent;
    bool  _canShowSupportedAppsButton;
    VSIdentityProvider * _identityProvider;
    bool  _shouldOfferAuthenticationFlow;
    bool  _shouldOfferSoleAuthenticationFlow;
    bool  _shouldSkipSetupEntirely;
    NSDictionary * _vouchersByBundleID;
}

@property (nonatomic, copy) NSArray *bundlesIDsToConsent;
@property (nonatomic) bool canShowSupportedAppsButton;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic) bool shouldOfferAuthenticationFlow;
@property (nonatomic) bool shouldOfferSoleAuthenticationFlow;
@property (nonatomic) bool shouldSkipSetupEntirely;
@property (nonatomic, copy) NSDictionary *vouchersByBundleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundlesIDsToConsent;
- (bool)canShowSupportedAppsButton;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identityProvider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBundlesIDsToConsent:(id)arg1;
- (void)setCanShowSupportedAppsButton:(bool)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setShouldOfferAuthenticationFlow:(bool)arg1;
- (void)setShouldOfferSoleAuthenticationFlow:(bool)arg1;
- (void)setShouldSkipSetupEntirely:(bool)arg1;
- (void)setVouchersByBundleID:(id)arg1;
- (bool)shouldOfferAuthenticationFlow;
- (bool)shouldOfferSoleAuthenticationFlow;
- (bool)shouldSkipSetupEntirely;
- (id)vouchersByBundleID;

@end
