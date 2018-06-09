/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLChangeNotificationCenter : NSObject {
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    }  _albumListsContent;
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    }  _albumsContent;
    NSMutableSet * _assetsWithCloudCommentChanges;
    int  _cameraPreviewChangeListenerCount;
    NSNumber * _cameraPreviewChangedToken;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    }  _changedAlbumLists;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    }  _changedAlbums;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    }  _changedAssets;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    }  _changedCloudFeedEntries;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    }  _changedMomentLists;
    struct changeList_s { 
        NSMutableSet *inserted; 
        NSMutableSet *updated; 
        NSMutableSet *deleted; 
    }  _changedMoments;
    NSMutableArray * _enqueuedNotifications;
    bool  _isOverloaded;
    bool  _isProcessingRemoteDidSave;
    PLManagedObjectContext * _moc;
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    }  _momentListsContent;
    struct contentChanges_s { 
        NSMutableArray *container; 
        NSMutableArray *updatedContent; 
    }  _momentsContent;
    NSObject<OS_dispatch_queue> * _notificationHandlingQueue;
    NSMutableSet * _overloadedObjects;
    NSDictionary * _remoteNotificationData;
    NSMutableArray * _snapshots;
}

@property (nonatomic, readonly) bool _shouldForceFetchingAlbumsToReload;
@property (nonatomic, readonly, retain) NSNotificationCenter *backingCenter;

+ (id)allManagedObjectKeysStrategy;
+ (id)defaultCenter;
+ (void)forceFetchingAlbumReload;
+ (void)getInsertedAssetCount:(unsigned long long*)arg1 deletedAssetCount:(unsigned long long*)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4;

- (id)_attributesOfInterestForObject:(id)arg1;
- (void)_cleanupState;
- (void)_enqueueAlbumChangeNotification:(id)arg1;
- (void)_enqueueAlbumListNotifications;
- (void)_enqueueAlbumNotifications;
- (void)_enqueueAssetChangeNotification;
- (void)_enqueueAssetContainerChangeNotification:(id)arg1;
- (void)_enqueueAssetContainerListChangeNotification:(id)arg1;
- (void)_enqueueCloudCommentsNotifications;
- (void)_enqueueCloudFeedEntriesChangeNotifications;
- (void)_enqueueInvitationRecordsChangeNotification:(id)arg1;
- (void)_enqueueMomentChangeNotifications;
- (void)_enqueueMomentListChangeNotifications;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id*)arg3 forKeys:(const id*)arg4 count:(unsigned long long)arg5;
- (void)_enqueuePhotoLibraryNotifications;
- (void)_evaluateContainersWithUpdatedContent;
- (void)_evaluateUpdatedAssets;
- (bool)_isInterestedInUpdatesOfObject:(id)arg1;
- (id)_keysOfInterestForObject:(id)arg1;
- (id)_orderedRelationshipsOfInterestForObject:(id)arg1;
- (void)_postEnqueuedNotifications;
- (void)_registerForCameraPreviewWellChanges;
- (void)_sendNotificationsForSplitChanges;
- (bool)_shouldForceFetchingAlbumsToReload;
- (id)_snapshotForObject:(id)arg1;
- (void)_splitContextDidChangeNotification:(id)arg1;
- (id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1;
- (id)_takeSnapshotOfObject:(id)arg1;
- (id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(bool)arg2;
- (void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(bool)arg3;
- (id)_toOneRelationshipsOfInterestForObject:(id)arg1;
- (void)_unregisterForCameraPreviewWellChanges;
- (void)addAssetChangeObserver:(id)arg1;
- (void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
- (void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)addCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)addCloudFeedEntriesObserver:(id)arg1;
- (void)addInvitationRecordsObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)addShouldReloadObserver:(id)arg1;
- (id)backingCenter;
- (void)dealloc;
- (id)descriptionOfSplitChanges;
- (void)enqueueNotification:(id)arg1;
- (void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(bool)arg3;
- (void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(bool)arg3 isCoalescedEvent:(bool)arg4;
- (void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(bool)arg3;
- (void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(bool)arg3;
- (id)observeCameraPreviewWellImageChangeOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)postShouldReloadNotification;
- (void)processContextDidChangeNotification:(id)arg1;
- (void)processContextDidSaveObjectIDsNotification:(id)arg1;
- (void)removeAssetChangeObserver:(id)arg1;
- (void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
- (void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)removeCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)removeCloudFeedEntriesObserver:(id)arg1;
- (void)removeInvitationRecordsObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeShouldReloadObserver:(id)arg1;

@end
