/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudStoreService : NSObject <PKCloudStoreCoordinatorDelegate> {
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(id /* block */)arg3;
- (void)noteCloudSyncPassesSwitchChanged;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)resetContainerWithCompletion:(id /* block */)arg1;
- (void)resetContainerWithHandler:(id /* block */)arg1;
- (void)resetContainerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)simulateCloudStorePushWithCompletion:(id /* block */)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(id /* block */)arg3;

@end
