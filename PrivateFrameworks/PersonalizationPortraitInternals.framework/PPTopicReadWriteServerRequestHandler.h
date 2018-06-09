/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>

- (void)clearWithCompletion:(id /* block */)arg1;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteAllTopicsWithTopicId:(id)arg1 completion:(id /* block */)arg2;
- (void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 completion:(id /* block */)arg6;

@end
