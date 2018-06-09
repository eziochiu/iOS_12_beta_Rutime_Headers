/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPContactClient : NSObject {
    PPXPCClientHelper * _clientHelper;
    PPXPCClientPipelinedBatchQueryManager * _queryManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void)contactNameRecordBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)contactNameRecordChangesBatch:(id)arg1 isLast:(bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(id /* block */)arg2;
- (bool)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (bool)contactNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(id /* block */)arg3;
- (id)init;

@end
