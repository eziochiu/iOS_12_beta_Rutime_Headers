/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject> {
    NSArray * __lastModifiedProperties;
}

@property (setter=_setLastModifiedProperties:, copy) NSArray *_lastModifiedProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lastModifiedProperties;
- (id)_relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (void)_setLastModifiedProperties:(id)arg1;
- (bool)addRecord:(id)arg1 error:(id*)arg2;
- (bool)applyBatch:(id)arg1 direction:(unsigned long long)arg2 withError:(id*)arg3;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)deleteRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (void)fillRelatedIdentifiersInChange:(id)arg1;
- (bool)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3;
- (id)recordWithScopedIdentifier:(id)arg1;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3;
- (unsigned long long)scopeType;
- (id)status;
- (id)statusDictionary;
- (bool)updateRecord:(id)arg1 error:(id*)arg2;

@end
