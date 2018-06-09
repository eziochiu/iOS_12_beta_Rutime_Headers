/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol> {
    NSDictionary * _cachedData;
    NSObject<OS_dispatch_queue> * _cachedDataAccessQueue;
    id /* block */  _dataSourceChangedHandler;
    AMSUniqueExecutionQueue * _loadDataQueue;
    NSString * _logKey;
    NSString * _profile;
    NSString * _profileVersion;
    NSString * _storefront;
}

@property (nonatomic, retain) NSDictionary *cachedData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cachedDataAccessQueue;
@property (nonatomic, copy) id /* block */ dataSourceChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUniqueExecutionQueue *loadDataQueue;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (nonatomic, retain) NSString *storefront;
@property (readonly) Class superclass;

+ (id)_OSBuildTypeString;
+ (id)_OSString;
+ (id)_OSVersionString;
+ (id)_URLCookieNamesForProfile:(id)arg1;
+ (id)_account;
+ (id)_cookiesForNames:(id)arg1;
+ (id)_defaultURLCookieNames;
+ (id)_deviceString;
+ (bool)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2;
+ (id)_requestStorefrontFromURLResponse:(id)arg1;
+ (id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2;
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;
+ (bool)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2;
+ (bool)_shouldReloadDataForSetStorefront:(id)arg1 bagData:(id)arg2;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2;
- (id)_createURLWithCookieNames:(id)arg1 storefront:(id)arg2;
- (id)_expirationDate;
- (bool)_isExpired;
- (id)_loadDataWithAttempt:(unsigned long long)arg1 error:(id*)arg2;
- (id)_processLoadDataResult:(id)arg1;
- (void)_updateCachedData:(id)arg1;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1;
- (id)bagKeyInfoForKey:(id)arg1;
- (id)cachedData;
- (id)cachedDataAccessQueue;
- (id /* block */)dataSourceChangedHandler;
- (void)dealloc;
- (id)description;
- (id)expirationDate;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 logKey:(id)arg3;
- (bool)isLoaded;
- (id)loadDataQueue;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)logKey;
- (id)profile;
- (id)profileVersion;
- (void)setCachedData:(id)arg1;
- (void)setCachedDataAccessQueue:(id)arg1;
- (void)setDataSourceChangedHandler:(id /* block */)arg1;
- (void)setLoadDataQueue:(id)arg1;
- (void)setStorefront:(id)arg1;
- (id)storefront;
- (id)valueForURLVariable:(id)arg1;

@end
