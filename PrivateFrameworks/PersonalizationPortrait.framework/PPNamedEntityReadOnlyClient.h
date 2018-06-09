/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol> {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_unblockPendingQueries;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (id)init;
- (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (void)namedEntityBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)namedEntityRecordBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (bool)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;

@end
