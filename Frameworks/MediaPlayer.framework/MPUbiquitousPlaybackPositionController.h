/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUbiquitousPlaybackPositionController : NSObject {
    bool  _applicationBecomingActive;
    bool  _beganUsingPlaybackPositionMetadata;
    bool  _databaseHasBookmarkableContents;
    bool  _externallyActive;
    bool  _isServiceActive;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    SBCPlaybackPositionDomain * _uppDomain;
    SBCPlaybackPositionSyncService * _uppServiceProxy;
}

@property (nonatomic, readonly) bool applicationBecomingActive;
@property (getter=isServiceActive, nonatomic) bool beganUsingPlaybackPositionMetadata;
@property (nonatomic) bool databaseHasBookmarkableContents;
@property (nonatomic) bool externallyActive;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isServiceActive, nonatomic) bool serviceActive;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic, retain) SBCPlaybackPositionDomain *uppDomain;
@property (nonatomic, retain) SBCPlaybackPositionSyncService *uppServiceProxy;

+ (id)sharedUbiquitousPlaybackPositionController;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidEnterForegroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (bool)_onQueue_isEnabled;
- (bool)_onQueue_shouldBeActive;
- (void)_onServiceQueue_becomeActiveService;
- (id)_onServiceQueue_connectedUPPServiceProxy;
- (void)_onServiceQueue_resignActiveService;
- (void)_onServiceQueue_updateActiveServiceIfNeeded;
- (id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg1;
- (bool)applicationBecomingActive;
- (void)beginUsingPlaybackPositionMetadata;
- (bool)databaseHasBookmarkableContents;
- (void)dealloc;
- (bool)externallyActive;
- (id)init;
- (bool)isServiceActive;
- (bool)isServiceActive;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(bool)arg2;
- (void)persistPlaybackPositionMetadataEntity:(id)arg1 isCheckpoint:(bool)arg2 completion:(id /* block */)arg3;
- (id)playbackPositionForLocalEntityIdentifier:(id)arg1;
- (id)playbackPositionForLocalEntityIdentifiers:(id)arg1;
- (id)queue;
- (id)serviceQueue;
- (void)setBeganUsingPlaybackPositionMetadata:(bool)arg1;
- (void)setDatabaseHasBookmarkableContents:(bool)arg1;
- (void)setExternallyActive:(bool)arg1;
- (void)setServiceActive:(bool)arg1;
- (void)setUppDomain:(id)arg1;
- (void)setUppServiceProxy:(id)arg1;
- (id)uppDomain;
- (id)uppServiceProxy;

@end
