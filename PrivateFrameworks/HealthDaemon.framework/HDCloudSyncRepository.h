/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncRepository : NSObject {
    NSSet * _allCKContainers;
    NSMutableArray * _ownerIdentifierFetchCompletionBlocks;
    NSDictionary * _ownerIdentifiersByContainerIdentifier;
    CKContainer * _primaryCKContainer;
    HDProfile * _profile;
    long long  _pullOperationFailureCount;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _repositorySettings;
    NSArray * _secondaryCKContainers;
}

@property (nonatomic, readonly) NSSet *allCKContainers;
@property (nonatomic, readonly, copy) NSSet *allOwnerIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *ownerIdentifiersByContainerIdentifier;
@property (nonatomic, readonly) CKContainer *primaryCKContainer;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic) unsigned long long repositorySettings;
@property (nonatomic, readonly) NSArray *secondaryCKContainers;

- (void).cxx_destruct;
- (id)_cloudSyncContainerDescriptionFromFetchOperationResult:(id)arg1 configuration:(id)arg2;
- (void)_disableCloudSyncWithCompletion:(id /* block */)arg1;
- (id)_fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)_lastSuccessfulPullKey;
- (id)_operationGroupForReason:(long long)arg1 options:(unsigned long long)arg2;
- (long long)_pendingProgressCountForPullOperationsGivenOptions:(unsigned long long)arg1;
- (long long)_pendingProgressCountForPushOperationGivenOptions:(unsigned long long)arg1 maxPullOperationCount:(long long)arg2;
- (void)_queue_fetchOwnerIdentifierForContainer:(id)arg1 results:(id)arg2 taskTree:(id)arg3;
- (void)_queue_fetchOwnerIdentifiersWithCompletion:(id /* block */)arg1;
- (void)_recordSuccessfulPull;
- (id)_startPullOperationForPullZone:(id)arg1 configuration:(id)arg2 fetchOperationResult:(id)arg3 taskTree:(id)arg4;
- (void)_updateProgress:(id)arg1 isPrimaryContainer:(bool)arg2 forOperationComponent:(unsigned long long)arg3;
- (id)allCKContainers;
- (id)allOwnerIdentifiers;
- (id)containerForContainerIdentifier:(id)arg1;
- (id)description;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1 identifier:(id)arg2;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)fetchSyncStatusWithTaskTree:(id)arg1 resultsHandler:(id /* block */)arg2;
- (id)initAsSecondaryWithProfile:(id)arg1 syncContainer:(id)arg2;
- (id)initWithProfile:(id)arg1 primaryCKContainer:(id)arg2 secondaryCKContainers:(id)arg3;
- (id)initWithProfile:(id)arg1 syncContainer:(id)arg2;
- (id)ownerIdentifiersByContainerIdentifier;
- (id)primaryCKContainer;
- (id)profile;
- (unsigned long long)repositorySettings;
- (void)resetContainer:(id)arg1 withOptions:(unsigned long long)arg2 reason:(long long)arg3 progress:(id)arg4 syncIdentifier:(id)arg5 taskTree:(id)arg6;
- (id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4;
- (id)secondaryCKContainers;
- (void)setRepositorySettings:(unsigned long long)arg1;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 accessibilityAssertion:(id)arg4 taskTree:(id)arg5;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4;
- (void)unitTest_fetchOwnerIdentifiersWithCompletion:(id /* block */)arg1;

@end
