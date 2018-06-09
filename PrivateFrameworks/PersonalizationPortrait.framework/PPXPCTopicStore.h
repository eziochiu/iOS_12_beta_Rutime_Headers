/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPXPCTopicStore : PPTopicStore

- (id)_init;
- (bool)clearWithError:(id*)arg1;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id*)arg3;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 error:(id*)arg2;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id*)arg3;
- (bool)deleteAllTopicsWithTopicId:(id)arg1 error:(id*)arg2;
- (bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 error:(id*)arg6;
- (void)feedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackEngagedTopics:(id)arg1;
- (void)feedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2;
- (void)feedbackTopicsOverallEngagement:(id)arg1;
- (void)feedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackUsedTopics:(id)arg1;
- (bool)iterRankedTopicsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3;
- (id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2;

@end
