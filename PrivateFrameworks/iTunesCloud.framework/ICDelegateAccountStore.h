/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegateAccountStore : NSObject <ICDelegateAccountStoreWriter, ICSQLiteConnectionDelegate> {
    NSMutableArray * _connectionPool;
    bool  _isOpen;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    ICDelegateAccountStoreOptions * _options;
    ICDelegateAccountStore * _strongSelf;
    ICDelegateAccountStoreXPCWriter * _xpcWriter;
}

@property (nonatomic, readonly, copy) NSString *databasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)openWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithValidatedOptions:(id)arg1;
- (void)_openWithXPCWriter:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_popConnection;
- (void)_postDidChangeNotification;
- (void)_recycleConnection:(id)arg1;
- (bool)_resetCorruptionUsingSQL;
- (void)_resetCorruptionUsingXPC;
- (void)_writeSQLUsingBlock:(id /* block */)arg1;
- (void)_writeUsingBlock:(id /* block */)arg1;
- (void)_writeXPCUsingBlock:(id /* block */)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)close;
- (bool)connectionNeedsResetForCorruption:(id)arg1;
- (id)databasePath;
- (id)initSingleWriterWithOptions:(id)arg1 error:(id*)arg2;
- (void)readUsingBlock:(id /* block */)arg1;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;

@end
