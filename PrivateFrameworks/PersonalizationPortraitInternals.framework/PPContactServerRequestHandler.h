/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {
    NSString * _clientProcessName;
    <PPContactClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)clientProcessName;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(id /* block */)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (id)init;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
