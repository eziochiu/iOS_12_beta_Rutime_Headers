/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPPortrait : NSObject

// Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait

+ (unsigned long long)assetVersion;
+ (bool)clearNamedEntityStore:(id*)arg1;
+ (bool)clearTopicStore:(id*)arg1;
+ (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id*)arg3;
+ (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id*)arg2;
+ (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id*)arg3;
+ (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id*)arg3;
+ (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 error:(id*)arg2;
+ (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id*)arg3;
+ (bool)deleteAllTopicsWithTopicId:(id)arg1 error:(id*)arg2;
+ (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
+ (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 error:(id*)arg6;
+ (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 error:(id*)arg5;
+ (bool)donateSiriQuery:(id)arg1 qid:(id)arg2 error:(id*)arg3;
+ (bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 error:(id*)arg6;
+ (bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 error:(id*)arg5;
+ (void)flushNamedEntityDonation;
+ (id)getPortraitVariantName;
+ (id)namedEntityRecordsWithLimit:(unsigned long long)arg1 matchingName:(id)arg2 matchingSourceBundleId:(id)arg3 sinceDate:(id)arg4 error:(id*)arg5;
+ (id)namedEntityRecordsWithLimit:(unsigned long long)arg1 matchingName:(id)arg2 sinceDate:(id)arg3 error:(id*)arg4;
+ (id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2;
+ (void)portraitFeedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2;
+ (void)portraitFeedbackEngagedNamedEntities:(id)arg1;
+ (void)portraitFeedbackEngagedTopics:(id)arg1;
+ (void)portraitFeedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2;
+ (void)portraitFeedbackNamedEntitiesOverallEngagement:(id)arg1;
+ (void)portraitFeedbackTopicsOverallEngagement:(id)arg1;
+ (void)portraitFeedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2;
+ (void)portraitFeedbackUsedNamedEntities:(id)arg1;
+ (void)portraitFeedbackUsedTopics:(id)arg1;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 error:(id*)arg2;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 error:(id*)arg3;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 excludingSourceBundleId:(id)arg3 fromDate:(id)arg4 toDate:(id)arg5 error:(id*)arg6;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 sinceDate:(id)arg3 error:(id*)arg4;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 sinceDate:(id)arg2 error:(id*)arg3;
+ (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 decayRate:(double)arg2 error:(id*)arg3;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 error:(id*)arg2;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 excludingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id*)arg4;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 sinceDate:(id)arg2 decayRate:(double)arg3 error:(id*)arg4;
+ (id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2;
+ (void)registerMaintenanceTasks;
+ (void)registerXPCListenerWithStringDonationHandler:(id)arg1;
+ (id)scoresForTopicMapping:(id)arg1 excludingSourceBundleId:(id)arg2 fromDate:(id)arg3 decayRate:(double)arg4 error:(id*)arg5;
+ (id)scoresForTopicMapping:(id)arg1 excludingSourceBundleId:(id)arg2 fromDate:(id)arg3 decayRate:(double)arg4 withBiases:(bool)arg5 error:(id*)arg6;
+ (id)scoresForTopics:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id*)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 excludingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id*)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 matchingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id*)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 matchingTopicId:(id)arg2 sinceDate:(id)arg3 error:(id*)arg4;
+ (id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals

+ (bool)_logDailyMetricsWithError:(id*)arg1;
+ (void)_registerCoreRoutineImport;
+ (void)_registerKnowledgeStoreCleanup;
+ (void)_registerMapsImport;
+ (void)_registerPeriodicMetrics;
+ (void)_registerRTCSendLogs;
+ (void)_registerTTLBasedDonationCleanup;
+ (void)registerMaintenanceTasksInternal;

@end
