/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlatformRequestOperation : NSOperation {
    NSMutableDictionary * _additionalHeaderFields;
    NSMutableDictionary * _additionalParameters;
    SSBag * _bag;
    NSArray * _bundleIdentifiers;
    NSString * _caller;
    SSVPlatformContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _imageProfile;
    NSArray * _itemIdentifiers;
    NSString * _keyProfile;
    long long  _personalizationStyle;
    id /* block */  _responseBlock;
    bool  _shouldSuppressCookies;
    bool  _shouldSuppressUserInfo;
    NSString * _storeFrontSuffix;
    NSNumber * _timeoutInterval;
    NSString * _userAgent;
}

@property (nonatomic, retain) SSBag *bag;
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSString *imageProfile;
@property (copy) NSArray *itemIdentifiers;
@property (copy) NSString *keyProfile;
@property long long personalizationStyle;
@property (copy) id /* block */ responseBlock;
@property bool shouldSuppressCookies;
@property bool shouldSuppressUserInfo;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSNumber *timeoutInterval;

- (void).cxx_destruct;
- (id)_URLBagContext;
- (id)_callerValue;
- (void)_enumerateQueryParametersUsingBlock:(id /* block */)arg1;
- (id)_lookupWithRequest:(id)arg1 error:(id*)arg2;
- (void)_makeLocalJSSignRequest;
- (void)_makeLocalMescalRequest;
- (void)_makeLookupRequestWithPersonalizationStyle:(long long)arg1;
- (void)_setCaller:(id)arg1;
- (void)_setUserAgent:(id)arg1;
- (id)bag;
- (id)bundleIdentifiers;
- (id)imageProfile;
- (id)init;
- (id)initWithPlatformContext:(id)arg1;
- (id)itemIdentifiers;
- (id)keyProfile;
- (void)main;
- (long long)personalizationStyle;
- (id /* block */)responseBlock;
- (void)setBag:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setImageProfile:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)setShouldSuppressCookies:(bool)arg1;
- (void)setShouldSuppressUserInfo:(bool)arg1;
- (void)setStoreFrontSuffix:(id)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (bool)shouldSuppressCookies;
- (bool)shouldSuppressUserInfo;
- (id)storeFrontSuffix;
- (id)timeoutInterval;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)valueForRequestParameter:(id)arg1;

@end
