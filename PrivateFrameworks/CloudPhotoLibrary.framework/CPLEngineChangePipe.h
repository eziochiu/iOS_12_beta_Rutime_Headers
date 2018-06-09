/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic, readonly) unsigned long long countOfQueuedBatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (id)allChangeBatches;
- (bool)appendChangeBatch:(id)arg1 error:(id*)arg2;
- (bool)compactChangeBatchesWithError:(id*)arg1;
- (unsigned long long)countOfQueuedBatches;
- (bool)deleteAllChangeBatchesWithError:(id*)arg1;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)hasQueuedBatches;
- (bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (bool)isEmpty;
- (id)nextBatch;
- (id)popAllChangeBatchesWithError:(id*)arg1;
- (bool)popChangeBatch:(id*)arg1 error:(id*)arg2;
- (bool)popNextBatchWithError:(id*)arg1;
- (unsigned long long)scopeType;

@end
