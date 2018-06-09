/* made by EzioChiu.
 */

@protocol PDCloudStoreServiceExportedInterface <PDXPCServiceExportedInterface>

@required

- (void)allItemsOfItemType:(void *)arg1 storeLocally:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)itemOfItemType:(void *)arg1 recordName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordObject *, NSError *, void*
- (void)noteCloudSyncPassesSwitchChangedWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeItemsWithRecordNames:(void *)arg1 itemType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetContainerWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)simulateCloudStorePushForContainerIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSArray *, NSError *, void*
- (void)updateCloudStoreWithLocalItems:(void *)arg1 recordSpecificKeys:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@optional

- (void)resetContainerWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resetContainerWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)simulateCloudStorePushWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSArray *, NSError *, void*

@end
