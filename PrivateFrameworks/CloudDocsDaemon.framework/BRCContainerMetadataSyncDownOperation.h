/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableSet * _containerIDsUpdated;
    NSMutableArray * _desiredKeysForDesiredAssets;
    NSMutableArray * _recordIDsForDesiredAssets;
    NSMutableDictionary * _recordIDsToVersionETagsForDesiredAssets;
    BRCAccountSession * _session;
    bool  _shouldFetchAnotherBatch;
    BRCContainerMetadataSyncPersistedState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldFetchAnotherBatch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completedWithServerChangeToken:(id)arg1;
- (id)createActivity;
- (id)initWithSession:(id)arg1 state:(id)arg2;
- (void)main;
- (void)performAfterCreatingZoneIfNeeded:(id /* block */)arg1;
- (void)performAfterFetchingAssetContents:(id /* block */)arg1;
- (void)performAfterFetchingRecordChanges:(id /* block */)arg1;
- (bool)shouldFetchAnotherBatch;
- (bool)shouldRetryForError:(id)arg1;

@end
