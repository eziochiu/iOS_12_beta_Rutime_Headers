/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreInterface, _HKXPCExportable> {
    long long  _ingestionState;
    NSHashTable * _ingestionStateChangeListeners;
    HKPluginProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKBrandImageManager *hk_brandImageManager;
@property long long ingestionState;
@property (retain) NSHashTable *ingestionStateChangeListeners;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_actionCompletionWithObjectOnClientQueue:(id /* block */)arg1;
- (void)_fetchHealthRecordsPluginServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_hk_shouldPromptForOptInClinicalDataCollection:(id /* block */)arg1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)accountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 setUserEnabled:(bool)arg2 completion:(id /* block */)arg3;
- (void)addIngestionStateListener:(id)arg1;
- (void)badgeForNewHealthRecordsWithCompletion:(id /* block */)arg1;
- (void)beginInitialLoginSessionForGateway:(id)arg1 completion:(id /* block */)arg2;
- (void)beginReloginSessionForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelInFlightSearchQueriesWithCompletion:(id /* block */)arg1;
- (void)clientRemote_updateIngestionState:(long long)arg1;
- (void)conceptForCodings:(id)arg1 preferredSystems:(id)arg2 completion:(id /* block */)arg3;
- (void)connectionInvalidated;
- (void)createStaticAccountWithTitle:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAccountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (void)dispatchIngestionStateChange;
- (void)displayStringForMedicalCodingSystem:(id)arg1 code:(id)arg2 completion:(id /* block */)arg3;
- (void)displayStringForMedicalCodingSystem:(id)arg1 code:(id)arg2 version:(id)arg3 completion:(id /* block */)arg4;
- (void)endLoginSessionWithState:(id)arg1 code:(id)arg2 completion:(id /* block */)arg3;
- (id)exportedInterface;
- (void)fetchAccountForSource:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAccountsForGateways:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllAccountsWithCompletion:(id /* block */)arg1;
- (void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id /* block */)arg1;
- (void)fetchFHIRJSONDocumentWithAccountIdentifier:(struct NSUUID { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (void)fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRawSourceStringForHealthRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRemoteSearchResultsPageForQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 completion:(id /* block */)arg5;
- (void)getHealthRecordsIngestionFrequencyWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(struct NSUUID { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(struct NSUUID { Class x1; }*)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)ingestHealthRecordsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (long long)ingestionState;
- (id)ingestionStateChangeListeners;
- (id)initWithHealthStore:(id)arg1;
- (void)invalidateCredentialForAccountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (void)notifyForNewHealthRecordsWithCompletion:(id /* block */)arg1;
- (void)performCodingTasks:(id)arg1 completion:(id /* block */)arg2;
- (void)pruneAuthenticationDataWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 usingCredentialWithPersistentID:(id)arg2 completion:(id /* block */)arg3;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)arg1;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)arg1;
- (void)resetHealthRecordsLastExtractedRowIDWithCompletion:(id /* block */)arg1;
- (void)setHealthRecordsIngestionFrequency:(long long)arg1 completion:(id /* block */)arg2;
- (void)setIngestionState:(long long)arg1;
- (void)setIngestionStateChangeListeners:(id)arg1;
- (void)triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_brandImageManager;

@end
