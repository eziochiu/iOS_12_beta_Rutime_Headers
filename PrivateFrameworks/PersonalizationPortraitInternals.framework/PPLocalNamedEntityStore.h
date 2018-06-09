/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLocalNamedEntityStore : PPNamedEntityStore {
    _PASNotificationToken * _assetUpdateNotificationToken;
    int  _bundleIdBlacklistNotificationToken;
    _PASLock * _cacheLock;
    PPKVOObserver * _defaultsOverrideObserver;
    PPDeletionTracker * _deletionTracker;
    unsigned long long  _hardFetchLimit;
    bool  _isCacheInvalidated;
    _PASLock * _lock;
    id  _remoteDeletionObserver;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_cached_namedEntityRecordsWithQuery:(id)arg1;
- (void)_clearQueryCacheWithLockWitness:(id)arg1;
- (id)_coalesceScoredNamedEntities:(id)arg1;
- (bool)_deleteAllExtractionsWithPredicate:(id)arg1 fromStreams:(id)arg2 deletedCount:(unsigned long long*)arg3 namedEntitiesRemoved:(id)arg4 error:(id*)arg5;
- (bool)_deleteAllNamedEntitiesWithPredicate:(id)arg1 loggingBundleId:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (id)_filterBlacklistedScoredNamedEntities:(id)arg1;
- (id)_filterOutInvalidNamesFromEntities:(id)arg1;
- (void)_loadNamedEntitiesOverrideFromDefaults:(id)arg1;
- (id)_namedEntitiesOverride;
- (id)_rankedNamedEntitiesWithQuery:(id)arg1 usingFakeDataSource:(id)arg2;
- (double)_scoreEntityRecord:(id)arg1 query:(id)arg2 scoringDate:(id)arg3;
- (bool)_shouldSuppressRepeatedImpressions:(id)arg1;
- (bool)_signalNamedEntitiesRemoved:(id)arg1;
- (bool)clearWithError:(id*)arg1;
- (void)dealloc;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id*)arg2;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id*)arg3;
- (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
- (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
- (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 error:(id*)arg6;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackEngagedNamedEntities:(id)arg1 clientIdentifier:(id)arg2;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1 clientIdentifier:(id)arg2;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1 clientIdentifier:(id)arg2;
- (bool)flushDonationsWithError:(id*)arg1;
- (id)initWithRecordFetchLimit:(unsigned long long)arg1 useQueryCache:(bool)arg2;
- (bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)monitorNamedEntityRecordChangesWithError:(id*)arg1 setup:(id /* block */)arg2 handler:(id /* block */)arg3 finish:(id /* block */)arg4;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2;

@end
