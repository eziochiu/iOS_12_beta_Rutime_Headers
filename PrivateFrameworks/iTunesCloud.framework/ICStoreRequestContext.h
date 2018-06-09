/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreRequestContext : ICRequestContext {
    bool  _allowsExpiredBags;
    ICUserIdentity * _delegatedIdentity;
    ICUserIdentity * _identity;
    ICUserIdentityStore * _identityStore;
    ICStoreDialogResponseHandler * _storeDialogResponseHandler;
}

@property (nonatomic, readonly) bool allowsExpiredBags;
@property (nonatomic, readonly, copy) ICUserIdentity *delegatedIdentity;
@property (nonatomic, readonly, copy) ICUserIdentity *identity;
@property (nonatomic, readonly) ICUserIdentityStore *identityStore;
@property (nonatomic, readonly, copy) ICStoreDialogResponseHandler *storeDialogResponseHandler;

+ (id)activeStoreAccountRequestContext;

- (void).cxx_destruct;
- (bool)allowsExpiredBags;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)delegatedIdentity;
- (id)identity;
- (id)identityStore;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1 clientInfo:(id)arg2;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4;
- (void)setAllowsExpiredBags:(bool)arg1;
- (void)setDelegatedIdentity:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setIdentityStore:(id)arg1;
- (void)setStoreDialogResponseHandler:(id)arg1;
- (id)storeDialogResponseHandler;

@end
