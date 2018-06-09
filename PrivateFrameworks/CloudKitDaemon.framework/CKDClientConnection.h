/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientConnection : NSObject <CKXPCDaemon> {
    CKDClientProxy * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKDClientProxy *proxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addProxyOperationWithInfo:(id)arg1 withBlock:(id /* block */)arg2 longlivedProxyPreparationBlock:(id /* block */)arg3;
- (void)_handlePerformDaemonCallWithOperationInfo:(id)arg1 completionBlock:(id /* block */)arg2 forwardingBlock:(id /* block */)arg3;
- (void)accountChangedWithID:(id)arg1;
- (void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearContextFromMetadataCache;
- (void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)flushOperationMetricsToPowerLog;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performAggregateZonePCSOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performArchiveRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchArchivedRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareMetadataOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (id)proxy;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(id /* block */)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 setupInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5;
- (void)setProxy:(id)arg1;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)triggerAutoBugCaptureSnapshot;
- (void)updatePushTokens;
- (void)wipeAllCachedLongLivedProxiesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)wipeAllCachesAndDie;

@end
