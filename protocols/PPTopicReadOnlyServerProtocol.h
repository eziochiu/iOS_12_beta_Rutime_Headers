/* made by EzioChiu.
 */

@protocol PPTopicReadOnlyServerProtocol

@required

- (void)feedbackEngagedMappedTopics:(NSDictionary *)arg1 forMapping:(NSString *)arg2;
- (void)feedbackEngagedTopics:(NSDictionary *)arg1;
- (void)feedbackMappedTopicsOverallEngagement:(NSNumber *)arg1 forMapping:(NSString *)arg2;
- (void)feedbackTopicsOverallEngagement:(NSNumber *)arg1;
- (void)feedbackUsedMappedTopics:(NSArray *)arg1 forMapping:(NSString *)arg2;
- (void)feedbackUsedTopics:(NSArray *)arg1;
- (void)rankedTopicsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)scoresForTopicMapping:(NSString *)arg1 query:(PPTopicQuery *)arg2 queryId:(unsigned long long)arg3;
- (void)topicRecordsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;

@end
