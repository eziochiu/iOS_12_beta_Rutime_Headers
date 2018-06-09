/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegateAccountStoreXPCWriter : NSObject <ICDelegateAccountStoreServiceClient, ICDelegateAccountStoreWriter> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ICDelegateAccountStoreOptions * _accountStoreOptions;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSXPCConnection * _connection;
    id /* block */  _externalChangeHandler;
    bool  _hasReceivedConnectionInvalidation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ externalChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getXPCConnectionWithCompletion:(id /* block */)arg1;
- (id)_onceWithCompletionHandler:(id /* block */)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)delegateAccountStoreDidChange;
- (id /* block */)externalChangeHandler;
- (id)initWithAccountStoreOptions:(id)arg1;
- (void)invalidate;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)recreateWithCompletionHandler:(id /* block */)arg1;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setExternalChangeHandler:(id /* block */)arg1;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;

@end
