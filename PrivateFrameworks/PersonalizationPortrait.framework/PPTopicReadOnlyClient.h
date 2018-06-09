/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPTopicReadOnlyClient : NSObject <PPTopicClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void)feedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackEngagedTopics:(id)arg1;
- (void)feedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2;
- (void)feedbackTopicsOverallEngagement:(id)arg1;
- (void)feedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackUsedTopics:(id)arg1;
- (id)init;
- (bool)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (void)scoredMappedTopicBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 handleBatch:(id /* block */)arg4;
- (void)topicBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)topicRecordBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)topicRecordsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;

@end
