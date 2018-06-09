/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore, NSObject, _IKJSITunesStore, _IKJSITunesStoreProxy> {
    IKURLBagCache * _bagCache;
    NSString * _cookieURL;
    NSNumber * _lastAccountDSID;
    NSDictionary * _lastKnownStatusDictionary;
    SSMetricsController * _metricsController;
    id  _ssAccountStoreChangedToken;
    NSString * _storeFrontSuffix;
    id  _subscriptionStatusDidChangeToken;
    id  _urlBagCacheUpdateToken;
}

@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSDictionary *accountInfo;
@property (nonatomic, retain) IKURLBagCache *bagCache;
@property (nonatomic, retain) id cookie;
@property (nonatomic, retain) NSString *cookieURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isManagedAppleID, nonatomic, readonly) bool managedAppleID;
@property (nonatomic, readonly) NSString *networkConnectionType;
@property (nonatomic, retain) NSString *storefront;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userAgent;

+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (void)setITunesStoreHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)DSID;
- (void)_accountStoreChanged;
- (void)_bagCacheUpdated;
- (id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(bool)arg2;
- (void)_subscriptionStatusDidChanged:(id)arg1;
- (id)accountInfo;
- (id)asPrivateIKJSITunesStore;
- (void)authenticate:(id)arg1 :(id)arg2;
- (id)bagCache;
- (void)clearCookies;
- (id)cookie;
- (id)cookieURL;
- (void)dealloc;
- (id)eligibilityForService:(id)arg1;
- (void)evaluateScripts:(id)arg1 :(id)arg2;
- (void)flushUnreportedEvents;
- (id)getBag;
- (void)getServiceEligibility:(id)arg1 :(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2;
- (void)invalidateBag;
- (bool)isManagedAppleID;
- (void)loadStoreContent:(id)arg1 :(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (id)networkConnectionType;
- (void)recordEvent:(id)arg1 :(id)arg2;
- (void)setBagCache:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setCookieURL:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)signOut;
- (id)storefront;
- (void)updateServiceEligibility:(id)arg1;
- (id)userAgent;

@end
