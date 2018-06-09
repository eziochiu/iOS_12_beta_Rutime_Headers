/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricStore : NSObject {
    NSCache * _contextCache;
    NSLock * _lock;
}

@property long long biometricState;
@property (getter=isBiometricStateEnabled, readonly) bool biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;

+ (id)diskBasedPaymentSheet;
+ (id)keychainLabelForAccountID:(id)arg1;
+ (id)keychainLabelForAccountID:(id)arg1 purpose:(long long)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addContextToCache:(id)arg1 withToken:(id)arg2;
- (long long)biometricAvailabilityForAccountIdentifier:(id)arg1;
- (long long)biometricState;
- (bool)canPerformBiometricOptIn;
- (bool)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg1;
- (void)clearLastRegisteredAccountIdentifier;
- (id)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3;
- (id)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3;
- (bool)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchContextFromCacheWithToken:(id)arg1 evict:(bool)arg2;
- (unsigned long long)identityMapCount;
- (id)init;
- (bool)isBiometricStateEnabled;
- (bool)isIdentityMapValidForAccountIdentifier:(id)arg1;
- (unsigned long long)keyCountForAccountIdentifier:(id)arg1;
- (id)lastRegisteredAccountIdentifier;
- (id)publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id*)arg3;
- (void)registerAccountIdentifier:(id)arg1;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1;
- (void)setBiometricState:(long long)arg1;
- (id)signData:(id)arg1 context:(id)arg2 error:(id*)arg3;

@end
