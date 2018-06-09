/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatusRequest : SSRequest <SSXPCCoding> {
    bool  _authenticatesIfNecessary;
    SSAuthenticationContext * _authenticationContext;
    long long  _carrierBundleProvisioningStyle;
    NSString * _localizedAuthenticationReason;
    NSString * _reason;
}

@property (nonatomic) bool authenticatesIfNecessary;
@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedAuthenticationReason;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

+ (bool)_allowMultipleCallbacks;
+ (long long)requestMessage;

- (void).cxx_destruct;
- (bool)authenticatesIfNecessary;
- (id)authenticationContext;
- (long long)carrierBundleProvisioningStyle;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)localizedAuthenticationReason;
- (id)reason;
- (void)setAuthenticatesIfNecessary:(bool)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setCarrierBundleProvisioningStyle:(long long)arg1;
- (void)setLocalizedAuthenticationReason:(id)arg1;
- (void)setReason:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithStatusResponseBlock:(id /* block */)arg1;

@end
