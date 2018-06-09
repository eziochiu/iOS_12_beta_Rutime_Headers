/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol> {
    PPBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PPTopicClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, retain) PPBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (void)feedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackEngagedTopics:(id)arg1;
- (void)feedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2;
- (void)feedbackTopicsOverallEngagement:(id)arg1;
- (void)feedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackUsedTopics:(id)arg1;
- (id)init;
- (void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)unblockPendingQueries;

@end
