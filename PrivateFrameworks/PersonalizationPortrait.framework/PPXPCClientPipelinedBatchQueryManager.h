/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPXPCClientPipelinedBatchQueryManager : NSObject {
    NSMutableDictionary * _queryContexts;
    unsigned long long  _queryId;
}

+ (void)assertBatch:(id)arg1 forQueryName:(id)arg2 hasExpectedContainedType:(Class)arg3;

- (void).cxx_destruct;
- (void)cancelPendingQueriesWithError:(id)arg1;
- (void)handleReplyWithName:(id)arg1 batch:(id)arg2 isLast:(bool)arg3 error:(id)arg4 queryId:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)init;
- (bool)syncExecuteQueryWithName:(id)arg1 error:(id*)arg2 queryInitializer:(id /* block */)arg3 handleBatch:(id /* block */)arg4;

@end
