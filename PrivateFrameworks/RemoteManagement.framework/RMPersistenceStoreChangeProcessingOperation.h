/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMPersistenceStoreChangeProcessingOperation : CATOperation {
    <RMPersistenceStoreChangeProcessingOperationDelegate> * _delegate;
    NSPersistentStore * _store;
    NSString * _storeIdentifier;
    NSPersistentHistoryToken * _token;
}

@property (nonatomic) <RMPersistenceStoreChangeProcessingOperationDelegate> *delegate;
@property (nonatomic, retain) NSPersistentStore *store;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, retain) NSPersistentHistoryToken *token;

- (void).cxx_destruct;
- (id)_changeTypeForChange:(id)arg1;
- (id)_entityGroupForChange:(id)arg1;
- (id)_transactionsAfterToken:(id)arg1 store:(id)arg2 context:(id)arg3;
- (id)delegate;
- (id)initWithStore:(id)arg1 storeIdentifier:(id)arg2 token:(id)arg3;
- (bool)isAsynchronous;
- (void)main;
- (void)setDelegate:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setToken:(id)arg1;
- (id)store;
- (id)storeIdentifier;
- (id)token;

@end
