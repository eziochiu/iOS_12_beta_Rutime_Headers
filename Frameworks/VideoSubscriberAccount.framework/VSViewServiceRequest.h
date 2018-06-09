/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding> {
    VSAccountMetadataRequest * _accountMetadataRequest;
    bool  _allowsPrivacyUI;
    bool  _canVetoAuthentication;
    NSString * _requestingAppAdamID;
    VSOptional * _requestingAppDisplayName;
    bool  _requiresPrivacyUI;
    bool  _shouldInferFeaturedProviders;
}

@property (nonatomic, copy) VSAccountMetadataRequest *accountMetadataRequest;
@property (nonatomic, readonly) bool allowsAuthenticationUI;
@property (nonatomic) bool allowsPrivacyUI;
@property (nonatomic) bool canVetoAuthentication;
@property (nonatomic, readonly, copy) NSArray *featuredIdentityProviderIdentifiers;
@property (nonatomic, readonly, copy) NSString *localizedVideoTitle;
@property (nonatomic, retain) NSString *requestingAppAdamID;
@property (nonatomic, retain) VSOptional *requestingAppDisplayName;
@property (nonatomic) bool requiresPrivacyUI;
@property (nonatomic) bool shouldInferFeaturedProviders;
@property (nonatomic, readonly, copy) NSArray *supportedAccountProviderAuthenticationSchemes;
@property (nonatomic, readonly, copy) NSArray *supportedIdentityProviderIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountMetadataRequest;
- (bool)allowsAuthenticationUI;
- (bool)allowsPrivacyUI;
- (bool)canVetoAuthentication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredIdentityProviderIdentifiers;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedVideoTitle;
- (id)requestingAppAdamID;
- (id)requestingAppDisplayName;
- (bool)requiresPrivacyUI;
- (void)setAccountMetadataRequest:(id)arg1;
- (void)setAllowsPrivacyUI:(bool)arg1;
- (void)setCanVetoAuthentication:(bool)arg1;
- (void)setRequestingAppAdamID:(id)arg1;
- (void)setRequestingAppDisplayName:(id)arg1;
- (void)setRequiresPrivacyUI:(bool)arg1;
- (void)setShouldInferFeaturedProviders:(bool)arg1;
- (bool)shouldInferFeaturedProviders;
- (id)supportedAccountProviderAuthenticationSchemes;
- (id)supportedIdentityProviderIdentifiers;

@end
