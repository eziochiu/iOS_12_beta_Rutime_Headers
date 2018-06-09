/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPendingChanges : NSObject {
    NSMutableSet * _pendingAlbumChanges;
    NSMutableDictionary * _pendingAlbumGUIDToAssetCollections;
    NSMutableSet * _pendingAlbumGUIDsWithKeyValueChanges;
    NSMutableSet * _pendingAlbumGUIDsWithSharingInfoChanges;
}

@property (nonatomic, retain) NSMutableSet *pendingAlbumChanges;
@property (nonatomic, retain) NSMutableDictionary *pendingAlbumGUIDToAssetCollections;
@property (nonatomic, retain) NSMutableSet *pendingAlbumGUIDsWithKeyValueChanges;
@property (nonatomic, retain) NSMutableSet *pendingAlbumGUIDsWithSharingInfoChanges;

- (void).cxx_destruct;
- (void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2;
- (void)addPendingChangesForAlbumGUID:(id)arg1;
- (bool)hasPendingChanges;
- (id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3;
- (id)pendingAlbumChanges;
- (id)pendingAlbumGUIDToAssetCollections;
- (id)pendingAlbumGUIDsWithKeyValueChanges;
- (id)pendingAlbumGUIDsWithSharingInfoChanges;
- (void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2;
- (void)removePendingChangesForAlbumGUID:(id)arg1;
- (void)removePendingKeyValueChangesForAlbumGUID:(id)arg1;
- (void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1;
- (void)setPendingAlbumChanges:(id)arg1;
- (void)setPendingAlbumGUIDToAssetCollections:(id)arg1;
- (void)setPendingAlbumGUIDsWithKeyValueChanges:(id)arg1;
- (void)setPendingAlbumGUIDsWithSharingInfoChanges:(id)arg1;

@end
