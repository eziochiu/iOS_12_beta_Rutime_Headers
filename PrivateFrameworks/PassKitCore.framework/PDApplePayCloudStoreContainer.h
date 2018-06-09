/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer {
    PKPaymentWebService * _paymentWebService;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NSObject<OS_dispatch_queue> * _proactiveFetchQueue;
    PKPaymentTransactionProcessor * _transactionProcessor;
}

+ (void)invalidateServerChangeTokens;

- (void).cxx_destruct;
- (bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;
- (bool)_canSyncTransactionToCloudKit:(id)arg1;
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;
- (void)_fetchMissingRecordsFromModifiedRecords:(id)arg1 operationGroupName:(id)arg2 completion:(id /* block */)arg3;
- (void)_handlePeerPaymentAccountChanged:(id)arg1;
- (id)_insertOrUpdatePaymentTransaction:(id)arg1 withOriginDeviceID:(id)arg2 forPassUniqueIdentifier:(id)arg3 paymentApplication:(id)arg4 withInsertionMode:(unsigned long long)arg5 performTruncation:(bool)arg6;
- (bool)_isTransactionItemFromRecordType:(id)arg1;
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;
- (id)_parseModifiedRecords:(id)arg1 counterpartRecords:(id)arg2 shouldUpdateLocalDatabase:(bool)arg3 updateReasons:(unsigned long long)arg4;
- (id)_passUniqueIdentifierForCloudStoreRecord:(id)arg1;
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)_serviceIdentfierToRecordDictionaryFromArray:(id)arg1;
- (id)_serviceIdentifierForRecord:(id)arg1;
- (id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2;
- (id)_strippedRecordName:(id)arg1;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(bool)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (bool)canInitializeContainer;
- (bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (bool)canSyncTransactionToCloudKitWithBackingData:(bool)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
- (void)cloudStoreAccountChanged:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)createZones:(id)arg1 completion:(id /* block */)arg2;
- (void)createZones:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 paymentWebService:(id)arg3;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 shouldUpdateLocalDatabase:(bool)arg4 userInfo:(id)arg5 completion:(id /* block */)arg6;
- (void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 retryCount:(unsigned long long)arg3 shouldRetry:(bool)arg4 completion:(id /* block */)arg5;
- (void)readCachedContainerValues;
- (id)recordTypeForRecordID:(id)arg1;
- (void)requestUpdatesForPassUniqueIdenitifer:(id)arg1;
- (void)saveCachedContainerValues;
- (void)setContainerState:(unsigned long long)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
