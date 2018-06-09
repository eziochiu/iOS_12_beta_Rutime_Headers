/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushSessionTracker : NSObject {
    NSMutableArray * _addedRecords;
    bool  _applyHasBeenSuccessful;
    NSMutableArray * _changesWithResourceChanges;
    bool  _checkScopeIdentifier;
    NSMutableArray * _deletedRecordScopedIdentifiers;
    bool  _diffHasBeenSuccessful;
    CPLChangeBatch * _diffedBatch;
    bool  _diffedBatchCanLowerQuota;
    bool  _expandHasBeenSuccessful;
    CPLChangeBatch * _expandedBatch;
    NSMutableDictionary * _fullRecords;
    unsigned long long  _ignoredRecordCount;
    CPLChangeBatch * _incomingBatch;
    NSMutableDictionary * _incomingBatchRecordPerScopedIdentifiers;
    NSMutableSet * _invalidScopeIdentifiers;
    NSDate * _now;
    CPLPushChangeTasks * _pushChangeTasks;
    NSMutableDictionary * _resourcesToUpload;
    CPLEngineScopeStorage * _scopes;
    CPLEngineStore * _store;
    NSMutableDictionary * _storedClientRecords;
    NSMutableDictionary * _storedCloudRecords;
    NSMutableSet * _unquarantinedRecordScopedIdentifiers;
    NSMutableArray * _updatedRecords;
    NSMutableSet * _validScopeIdentifiers;
}

@property (nonatomic, readonly) NSArray *addedRecords;
@property (nonatomic, readonly) bool applyHasBeenSuccessful;
@property (nonatomic, readonly) NSArray *deletedRecordScopedIdentifiers;
@property (nonatomic, readonly) bool diffHasBeenSuccessful;
@property (nonatomic, readonly) CPLChangeBatch *diffedBatch;
@property (nonatomic, readonly) bool diffedBatchCanLowerQuota;
@property (nonatomic, readonly) bool expandHasBeenSuccessful;
@property (nonatomic, readonly) CPLChangeBatch *expandedBatch;
@property (nonatomic, readonly) bool hasPushChangeTasks;
@property (nonatomic, readonly) unsigned long long ignoredRecordCount;
@property (nonatomic, readonly) CPLChangeBatch *incomingBatch;
@property (nonatomic, copy) NSDate *now;
@property (nonatomic, readonly) CPLPushChangeTasks *pushChangeTasks;
@property (nonatomic, readonly) NSDictionary *resourcesToUpload;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (nonatomic, readonly) NSSet *unquarantinedRecordScopedIdentifiers;
@property (nonatomic, readonly) NSArray *updatedRecords;

- (void).cxx_destruct;
- (id)_resourceIdentitiesFromChange:(id)arg1;
- (id)addedRecords;
- (bool)applyChangesToClientCacheWithError:(id*)arg1;
- (bool)applyHasBeenSuccessful;
- (bool)checkScopeIdentifier:(id)arg1;
- (bool)computeDiff;
- (bool)computeExpandedBatchWithError:(id*)arg1;
- (id)deletedRecordIdentifiers;
- (id)deletedRecordScopedIdentifiers;
- (bool)diffHasBeenSuccessful;
- (id)diffedBatch;
- (bool)diffedBatchCanLowerQuota;
- (void)enumerateDiffWithBlock:(id /* block */)arg1;
- (bool)expandHasBeenSuccessful;
- (id)expandedBatch;
- (bool)hasClientRecordWithLocalScopedIdentifier:(id)arg1;
- (bool)hasCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (bool)hasPushChangeTasks;
- (unsigned long long)ignoredRecordCount;
- (id)incomingBatch;
- (id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (bool)knowsClientRecordWithScopedIdentifier:(id)arg1;
- (id)now;
- (id)pushChangeTasks;
- (id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)arg1;
- (id)resourcesToUpload;
- (void)setNow:(id)arg1;
- (bool)shouldCancelSyncSessionTryingToUploadChange:(id)arg1;
- (id)store;
- (id)storedClientRecordWithLocalScopedIdentifier:(id)arg1;
- (id)storedCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (id)unquarantinedRecordScopedIdentifiers;
- (id)updatedRecords;

@end
