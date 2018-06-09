/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPNamedEntityReadWriteServerRequestHandler : NSObject <PPNamedEntityReadWriteServerProtocol>

- (void)clearWithCompletion:(id /* block */)arg1;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(id /* block */)arg3;
- (void)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)donateMapItem:(id)arg1 forPlaceName:(id)arg2 completion:(id /* block */)arg3;
- (void)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 completion:(id /* block */)arg6;
- (void)flushDonationsWithCompletion:(id /* block */)arg1;
- (void)removeMapItemForPlaceName:(id)arg1 completion:(id /* block */)arg2;
- (void)removeMapItemsBeforeCutoffDate:(id)arg1 completion:(id /* block */)arg2;

@end
