/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
    long long  _personalizationStyle;
    SSLookupProperties * _properties;
    long long  _resultFilters;
}

@property (nonatomic, readonly, copy) SSLookupProperties *_lookupProperties;
@property (nonatomic) bool authenticatesIfNeeded;
@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyProfile;
@property (nonatomic) long long localizationStyle;
@property (nonatomic) long long personalizationStyle;
@property (nonatomic) long long resultFilters;
@property (readonly) Class superclass;

- (id)_lookupProperties;
- (void)_setTimeoutInterval:(id)arg1;
- (bool)authenticatesIfNeeded;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)keyProfile;
- (long long)localizationStyle;
- (long long)personalizationStyle;
- (long long)resultFilters;
- (void)setAuthenticatesIfNeeded:(bool)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)setLocalizationStyle:(long long)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setResultFilters:(long long)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithLookupBlock:(id /* block */)arg1;
- (id)valueForRequestParameter:(id)arg1;

@end
