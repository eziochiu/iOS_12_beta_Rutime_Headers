/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStoreSessionOwner : NSObject <SYSessionDelegate> {
    NSDictionary * _context;
    id /* block */  _errorCallback;
    NSDictionary * _idsOptions;
    id /* block */  _onComplete;
    SYSession * _session;
    SYStore * _store;
}

@property (nonatomic, copy) NSDictionary *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *idsOptions;
@property (nonatomic, readonly) bool isResetSync;
@property (nonatomic, copy) id /* block */ onComplete;
@property (nonatomic, retain) SYSession *session;
@property (nonatomic) SYStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id /* block */)errorCallback;
- (id)idsOptions;
- (bool)isResetSync;
- (id /* block */)onComplete;
- (id)session;
- (void)setContext:(id)arg1;
- (void)setErrorCallback:(id /* block */)arg1;
- (void)setIdsOptions:(id)arg1;
- (void)setOnComplete:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)syncSession:(id)arg1 applyChanges:(struct NSArray { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (bool)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2;

@end
