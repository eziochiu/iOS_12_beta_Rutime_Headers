/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary * _perTransactionRemappedScopedIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg1 fallback:(id)arg2;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg1;
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;
- (void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 asap:(bool)arg3;
- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
