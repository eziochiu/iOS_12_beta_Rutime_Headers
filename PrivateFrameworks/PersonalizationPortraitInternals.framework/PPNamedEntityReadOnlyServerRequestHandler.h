/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject <PPNamedEntityReadOnlyServerProtocol> {
    PPBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PPNamedEntityClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, retain) PPBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (id)init;
- (void)mapItemForPlaceName:(id)arg1 completion:(id /* block */)arg2;
- (void)namedEntityRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedNamedEntitiesWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end