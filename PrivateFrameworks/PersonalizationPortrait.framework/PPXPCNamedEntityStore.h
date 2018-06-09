/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPXPCNamedEntityStore : PPNamedEntityStore {
    NSDate * _lastCallDate;
    NSMapTable * _recordLoadingDelegates;
}

- (void).cxx_destruct;
- (id)_getLastCallDate;
- (id)_init;
- (void)_loadNamedEntityRecordsWithDelegate:(id)arg1;
- (void)_resetNamedEntityRecordsWithDelegate:(id)arg1;
- (void)_sendChangesToDelegates;
- (void)_sendResetToDelegates;
- (void)_setLastCallDate;
- (bool)clearWithError:(id*)arg1;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id*)arg2;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id*)arg3;
- (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
- (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
- (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 error:(id*)arg6;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (bool)flushDonationsWithError:(id*)arg1;
- (bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2;
- (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2;

@end
