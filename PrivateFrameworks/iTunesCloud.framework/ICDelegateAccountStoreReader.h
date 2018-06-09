/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegateAccountStoreReader : NSObject {
    ICSQLiteConnection * _connection;
    bool  _isValid;
}

@property (nonatomic, readonly, copy) NSDate *lastExpirationPruningDate;
@property (nonatomic, readonly) long long overestimatedNumberOfTokens;

- (void).cxx_destruct;
- (void)_enumerateQueryResults:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_tokenWithSQLiteRow:(id)arg1;
- (id)_userIdentityWithSQLiteRow:(id)arg1;
- (void)enumerateDelegationUUIDsForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateTokensUsingBlock:(id /* block */)arg1;
- (void)enumerateTokensWithType:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)identityPropertiesForUserIdentity:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (id)lastExpirationPruningDate;
- (long long)overestimatedNumberOfTokens;
- (id)tokenForUserIdentity:(id)arg1;

@end
