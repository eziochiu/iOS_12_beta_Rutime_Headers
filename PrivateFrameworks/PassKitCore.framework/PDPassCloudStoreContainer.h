/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDPassCloudStoreContainer : PDCloudStoreContainer {
    bool  _canInitializeContainer;
    <PDCloudStorePassManager> * _passManager;
}

+ (void)invalidateServerChangeTokens;

- (void).cxx_destruct;
- (bool)_canInitializeContainer;
- (id)_catalogOfRecord;
- (bool)_isPassCatalogItemFromRecordType:(id)arg1;
- (bool)_isPassItemFromRecordType:(id)arg1;
- (bool)_isRemoteAssetItemFromRecordType:(id)arg1;
- (id)_ubiquitousCatalogOfRecord;
- (bool)canInitializeContainer;
- (id)initWithDataSource:(id)arg1 passManager:(id)arg2;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 shouldUpdateLocalDatabase:(bool)arg4 userInfo:(id)arg5 completion:(id /* block */)arg6;
- (void)readCachedContainerValues;
- (id)recordTypeForRecordID:(id)arg1;
- (void)saveCachedContainerValues;
- (void)setContainerState:(unsigned long long)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(id /* block */)arg3;

@end
