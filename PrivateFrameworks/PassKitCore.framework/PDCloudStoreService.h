/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface> {
    PDCloudStoreNotificationCoordinator * _cloudStoreNotificationCoordinator;
    PKEntitlementWhitelist * _whitelist;
}

@property (nonatomic, retain) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (id)cloudStoreNotificationCoordinator;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(id /* block */)arg3;
- (void)noteCloudSyncPassesSwitchChangedWithHandler:(id /* block */)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)resetContainerWithCompletion:(id /* block */)arg1;
- (void)resetContainerWithHandler:(id /* block */)arg1;
- (void)resetContainerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setCloudStoreNotificationCoordinator:(id)arg1;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)simulateCloudStorePushWithCompletion:(id /* block */)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(id /* block */)arg3;

@end
