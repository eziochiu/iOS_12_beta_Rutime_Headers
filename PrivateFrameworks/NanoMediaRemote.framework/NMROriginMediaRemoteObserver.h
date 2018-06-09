/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginMediaRemoteObserver : NSObject <NMROriginObserver, NMRPlaybackQueueDelegate> {
    NMRMediaRemoteUpdater * _artworkUpdater;
    NMRMediaRemoteUpdater * _bundleIDUpdater;
    <NMROriginObserverDelegate> * _delegate;
    unsigned long long  _filteringOptions;
    bool  _isEnforcingApplicationFilter;
    bool  _isRegisteredForMediaRemoteNotifications;
    NMRMediaRemoteNowPlayingState * _mutableNowPlayingState;
    NMRNowPlayingClient * _nowPlayingClient;
    void * _nowPlayingContentItemRef;
    NMRMediaRemoteUpdater * _nowPlayingInfoUpdater;
    NMROrigin * _origin;
    NMRPlaybackQueue * _playbackQueue;
    NMRMediaRemoteUpdater * _playbackStateUpdater;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldObserveArtwork;
    bool  _shouldObservePlaybackQueue;
    NMRMediaRemoteUpdater * _supportedCommandsUpdater;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NMROriginObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NMRNowPlayingState *nowPlayingState;
@property (nonatomic, readonly) NMROrigin *origin;
@property (nonatomic, readonly) NMRPlaybackQueue *playbackQueue;
@property (nonatomic) bool shouldObserveArtwork;
@property (nonatomic) bool shouldObservePlaybackQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureMediaRemoteUpdaters;
- (void)_handleContentItemArtworkDidChangeNotification:(id)arg1;
- (void)_handleContentItemsDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingApplicationDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingApplicationPlaybackStateDidChangeNotification:(id)arg1;
- (void)_handlePlaybackQueueDidChangeNotification:(id)arg1;
- (void)_handleSupportedCommandsDidChangeNotification:(id)arg1;
- (bool)_hasEqualIdentifierWithContentItem:(void*)arg1;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)_notifyObserverOfUpdatedNowPlayingApplicationBundleID;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_notifyObserversOfUpdatedPlaybackQueue;
- (void)_notifyObserversOfUpdatedTimestamp;
- (void)_registerForMediaRemoteNotifications;
- (void)_unregisterForMediaRemoteNotifications;
- (void)_updateArtworkWithCompletion:(id /* block */)arg1;
- (void)_updateEverything;
- (void)_updateIsEnforcingApplicationFilter;
- (void)_updateNowPlayingApplicationInfoWithOptions:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)_updateNowPlayingClientWithCompletion:(id /* block */)arg1;
- (void)_updateNowPlayingContentItem:(void*)arg1;
- (void)_updateNowPlayingInfoWithCompletion:(id /* block */)arg1;
- (void)_updatePlaybackStateWithCompletion:(id /* block */)arg1;
- (void)_updateSupportedCommandsWithCompletion:(id /* block */)arg1;
- (void)beginObserving;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endObserving;
- (id)initWithOrigin:(id)arg1 options:(unsigned long long)arg2;
- (id)nowPlayingState;
- (id)origin;
- (id)playbackQueue;
- (void)playbackQueue:(id)arg1 contentItemsDidChange:(id)arg2;
- (void)playbackQueueDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldObserveArtwork:(bool)arg1;
- (void)setShouldObservePlaybackQueue:(bool)arg1;
- (bool)shouldObserveArtwork;
- (bool)shouldObservePlaybackQueue;
- (void)updateNowPlayingStateWithCompletion:(id /* block */)arg1;

@end
