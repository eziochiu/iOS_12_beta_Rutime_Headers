/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, ICEnvironmentMonitorObserver, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate> {
    unsigned int  _activeRewindHoldingAtStart;
    bool  _allowsItemErrorResolution;
    unsigned int  _alwaysPlayWheneverPossible;
    bool  _appHasBeenSuspended;
    bool  _autoPlayBackgroundTaskAssertionEnabled;
    long long  _autoPlayBackgroundTaskCount;
    unsigned long long  _autoPlayBackgroundTaskIdentifier;
    NSObject<OS_dispatch_source> * _autoPlayTimeoutSource;
    unsigned int  _autoPlayWhenLikelyToKeepUp;
    bool  _automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
    unsigned int  _autoplayDisabledForCurrentItem;
    unsigned long long  _boundaryTimeIndexLastPosted;
    id  _boundaryTimeObserver;
    NSArray * _boundaryTimes;
    unsigned long long  _bufferingState;
    unsigned int  _canPlayFastForward;
    unsigned int  _canPlayFastReverse;
    unsigned int  _canSeekFwd;
    unsigned int  _canSeekRev;
    NSMutableSet * _clientsWantingExternalPlayback;
    struct __CFRunLoopTimer { } * _currentItemBookkeepingTimer;
    bool  _currentItemHasFinishedDownloading;
    long long  _currentItemRevisionID;
    bool  _currentItemStartedAsCloudItem;
    long long  _delayedCurrentTimeOptions;
    double  _delayedCurrentTimeToSet;
    NSNotification * _delayedPlaybackStateNotification;
    unsigned int  _didReachEnd;
    bool  _didResolveError;
    bool  _disableAirPlayMirroringDuringPlayback;
    long long  _displayOverridePlaybackState;
    unsigned int  _forceDelayedCurrentTimeToSet;
    unsigned int  _hasDelayedCurrentTimeToSet;
    bool  _hasPendingRate;
    bool  _hasProvidedAudibleLikelyToKeepUp;
    bool  _hasProvidedAudiblePlay;
    bool  _hasSentTracePlaybackStartDidFinish;
    NSString * _identifier;
    long long  _indexChangeDirection;
    float  _inflightSeekRate;
    unsigned int  _isSeekingOrScrubbing;
    NSDate * _itemDidChangeDate;
    unsigned long long  _itemIndexAtDeath;
    double  _itemInitialBookmarkTime;
    long long  _lastDisconnectReason;
    double  _lastInterruptionEnd;
    double  _lastKnownTimeBeforeDeath;
    double  _lastPlaybackIndexChangeTime;
    double  _lastSeekableEnd;
    double  _lastSeekableStart;
    double  _lastSetTime;
    double  _lastSetTimeChangeTime;
    unsigned long long  _lastSetTimeMarker;
    bool  _limitsBandwidthForCellularAccess;
    bool  _managesAirPlayBehaviors;
    double  _maxSeekableFwd;
    double  _maxSeekableRev;
    bool  _muted;
    double  _nextFadeOutDuration;
    unsigned long long  _numberOfErrorsSinceLastPlay;
    NSMapTable * _observerInfoToCoreMediaObserver;
    NSMutableArray * _observerInfos;
    unsigned int  _pausedDuringInterruption;
    bool  _pendingChangeForScanning;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pendingCurrentTime;
    float  _pendingRate;
    MPAVItem * _pendingRateItem;
    id  _periodicTimeObserverToken;
    MPAVRoute * _pickedRoute;
    AVPictureInPictureController * _pictureInPictureController;
    unsigned int  _playInBackgroundUserDefaultEnabled;
    long long  _playbackMode;
    MPAVPlaylistManager * _playlistManager;
    MPAVPolicyEnforcer * _policyEnforcer;
    MPAVQueueCoordinator * _queueCoordinator;
    MPQueuePlayer * _queuePlayer;
    float  _rateBeforeResignActive;
    float  _rateBeforeSeek;
    unsigned int  _resetRateAfterSeeking;
    long long  _resetRateAfterSeekingUpdateDisabled;
    unsigned int  _resumePlaybackWhenActive;
    MPAVRoutingController * _routingController;
    long long  _scanDirection;
    unsigned long long  _scanLevel;
    double  _secondsSinceUbiquitousCheckpoint;
    double  _seekFwdSlop;
    double  _seekRevSlop;
    long long  _seeklessState;
    unsigned int  _shouldAutoclearDisplayOverride;
    bool  _shouldEnforceHDCP;
    bool  _shouldPreventStateChangesForRateChange;
    bool  _shouldResetQueueWhenReachingEnd;
    unsigned long long  _stallBackgroundTaskIdentifier;
    NSObject<OS_dispatch_source> * _stallTimerSource;
    long long  _state;
    unsigned int  _stopAtEnd;
    double  _temporaryChapterTime;
    double  _tickInterval;
    struct __CFRunLoopTimer { } * _tickTimer;
    unsigned long long  _tickTimerEnabled;
    long long  _ubiquitousBookkeepingDisabledCount;
    bool  _useAirPlayMusicMode;
    unsigned int  _useApplicationAudioSession;
    bool  _usesAudioOnlyModeForExternalPlayback;
    bool  _valid;
    AVPlayerLayer * _videoLayer;
    unsigned long long  _videoLayerUsageCount;
    MPVideoView * _videoView;
    Class  _videoViewClass;
    bool  _wantsPictureInPicture;
    double  _whenSawSeekableEnd;
    double  _whenSawSeekableStart;
}

@property (nonatomic, readonly) long long _displayPlaybackState;
@property (nonatomic, readonly) AVAudioSessionMediaPlayerOnly *_playerAVAudioSession;
@property (nonatomic, readonly) long long activeRepeatType;
@property (nonatomic, readonly) long long activeShuffleType;
@property (nonatomic) bool alwaysPlayWheneverPossible;
@property (nonatomic) bool autoPlayWhenLikelyToKeepUp;
@property (nonatomic) bool automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
@property (nonatomic, readonly) MPQueuePlayer *avPlayer;
@property (nonatomic, readonly) unsigned long long bufferingState;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (getter=isCurrentItemReady, nonatomic, readonly) bool currentItemReady;
@property (nonatomic, readonly) MPMediaItem *currentMediaItem;
@property (nonatomic, readonly) MPMediaQuery *currentMediaQuery;
@property (nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=destinationIsTVOut, setter=setDestinationIsTVOut:, nonatomic) bool destinationIsTVOut;
@property (nonatomic) bool disableAirPlayMirroringDuringPlayback;
@property (nonatomic) long long displayOverridePlaybackState;
@property (nonatomic, readonly) double durationOfCurrentItemIfAvailable;
@property (getter=isExternalPlaybackActive, nonatomic, readonly) bool externalPlaybackActive;
@property (nonatomic, readonly) long long externalPlaybackType;
@property (nonatomic, copy) NSString *externalPlaybackVideoGravity;
@property (nonatomic, readonly) MPQueueFeeder *feeder;
@property (nonatomic, readonly) bool hasVolumeControl;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool limitsBandwidthForCellularAccess;
@property (nonatomic) bool managesAirPlayBehaviors;
@property (nonatomic, readonly) bool muted;
@property (nonatomic) double nextFadeOutDuration;
@property (nonatomic, readonly) AVPictureInPictureController *pictureInPictureController;
@property (nonatomic, readonly) double playableDurationOfCurrentItemIfAvailable;
@property (nonatomic) long long playbackMode;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (getter=_playlistManager, nonatomic, retain) MPAVPlaylistManager *playlistManager;
@property (nonatomic, retain) MPAVPolicyEnforcer *policyEnforcer;
@property (nonatomic, retain) MPAVQueueCoordinator *queueCoordinator;
@property (nonatomic, retain) MPQueuePlayer *queuePlayer;
@property (nonatomic, readonly) float rate;
@property (nonatomic) long long repeatType;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (nonatomic, readonly) bool shouldDisplayAsPlaying;
@property (nonatomic) bool shouldEnforceHDCP;
@property (nonatomic) bool shouldResetQueueWhenReachingEnd;
@property (nonatomic, readonly) bool showPlaybackStateOverlaysOnTVOut;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long state;
@property (nonatomic) bool stopAtEnd;
@property (readonly) Class superclass;
@property (nonatomic) bool ubiquitousBookkeepingEnabled;
@property (nonatomic) bool useAirPlayMusicMode;
@property (nonatomic) bool useApplicationAudioSession;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly) AVPlayerLayer *videoLayer;
@property (nonatomic, readonly) MPVideoView *videoView;
@property (nonatomic) float volume;
@property (nonatomic) bool wantsPictureInPicture;

+ (id)_itemKeysToObserve;
+ (id)_playerKeysToObserve;
+ (bool)automaticallyNotifiesObserversOfPlaylistManager;
+ (void)initialize;
+ (bool)isNetworkSupportedPath:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentItem;
+ (bool)outputSupportsAC3;
+ (Class)playlistManagerClass;
+ (bool)prefersApplicationAudioSession;

- (void).cxx_destruct;
- (void)_airPlayFailedUnsupportedVideoFormatForDeviceWithError:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applyAirPlayMusicMode;
- (void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(bool)arg2;
- (void)_applyCellularAccessSettings;
- (void)_attemptAutoPlay;
- (void)_audioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)_canPlayFastForwardDidChange:(id)arg1;
- (void)_canPlayFastReverseDidChange:(id)arg1;
- (bool)_canPlayItem:(id)arg1;
- (void)_cancelStallTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (bool)_changeChapterTimeMarkerIndexBy:(long long)arg1;
- (void)_checkForBoundaryTimeCrossing;
- (void)_clearLastSetTimeIfPlayerTimeIsValid;
- (void)_clearResetRateAfterSeeking;
- (void)_clearSeekingIntervalsForStreaming;
- (void)_clearVideoLayer:(bool)arg1;
- (void)_configureAVPlaylistManager;
- (void)_configureAudioSession;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_connectAVPlayer;
- (void)_contentsChanged;
- (unsigned long long)_currentIndexInBoundaryCMTimes:(id)arg1;
- (double)_currentTimeWithPreloadedPlayerTime:(bool)arg1 value:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_delayedPlaybackIndexChange;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_delayedSetCurrentTime;
- (void)_delayedUpdateScanningRate;
- (void)_delayedUpdateTimeMarker;
- (void)_delegateAuthorizationForItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_disconnectAVPlayerWithReason:(long long)arg1;
- (long long)_displayPlaybackState;
- (void)_durationDidChange:(id)arg1;
- (void)_endSeekAndChangeRate:(bool)arg1;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (id)_extractImageFromMetadata:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_handlePlaybackErrorResolutionType:(long long)arg1 forItem:(id)arg2 playbackError:(id)arg3 resolutionError:(id)arg4;
- (bool)_hasEnoughDataToPlay;
- (bool)_hasValidPlayerTime;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (bool)_isVideoLayerAttachedToPlayer;
- (bool)_isVideosOrTVApp;
- (void)_itemAssetIsLoadedNotification:(id)arg1;
- (void)_itemBookmarkTimeDidChangeNotification:(id)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemFailedToPlayToEnd:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_itemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemPlaybackModeAvailableNotification:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemSecureKeyDeliverDidFinishNotification:(id)arg1;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_networkChangedNotification:(id)arg1;
- (void)_pauseBookkeepingTimer;
- (void)_pausePlaybackIfNecessary;
- (void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(bool)arg1;
- (void)_pauseTickTimer;
- (void)_pauseWithFadeout:(float)arg1 forScanning:(bool)arg2;
- (id)_pickedRoute;
- (void)_playWithOptions:(unsigned long long)arg1 allowsEnablingAutoPlay:(bool)arg2;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(bool)arg2;
- (id)_playerAVAudioSession;
- (id)_playerFailedToQueueNotification:(id)arg1;
- (id)_playlistManager;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(long long)arg1 newState:(long long)arg2 delayable:(bool)arg3;
- (void)_prepareToPlayItem:(id)arg1;
- (void)_rateDidChange:(id)arg1;
- (void)_readyForDisplayDidChange:(id)arg1;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_registerForPlaylistManager:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_resetInternalState;
- (void)_resumeBookkeepingTimer;
- (void)_resumePlaybackIfNecessary;
- (void)_resumeTickTimer;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
- (long long)_seeklessStateForState:(long long)arg1;
- (void)_sendTracePlaybackStartDidFinishIfNeededForItem:(id)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setActionAtEndAttributeForState:(long long)arg1;
- (void)_setAllowsItemErrorResolution:(bool)arg1;
- (void)_setAutoPlayBackgroundTaskAssertionEnabled:(bool)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (void)_setLastSetTime:(double)arg1;
- (bool)_setRate:(float)arg1 forScanning:(bool)arg2;
- (bool)_setRate:(float)arg1 forScanning:(bool)arg2 withItem:(id)arg3;
- (void)_setState:(long long)arg1;
- (void)_setValid:(bool)arg1;
- (void)_setVideoLayerAttachedToPlayer:(bool)arg1 force:(bool)arg2 pauseIfNecessary:(bool)arg3;
- (void)_setVideoLayersEnabledForCurrentPlayerItemIfNeeded:(bool)arg1;
- (bool)_shouldProvideAudiblePlaybackPerformance;
- (bool)_showsPlayingWhenInState:(long long)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_streamBufferFull:(id)arg1;
- (void)_streamLikelyToKeepUp:(id)arg1;
- (void)_streamLimitExceeded:(long long)arg1;
- (void)_streamRanDry:(id)arg1;
- (void)_streamUnlikelyToKeepUp:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_timedMetadataDidChange:(id)arg1;
- (void)_tracksDidChange:(id)arg1;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_unregisterForPlayer:(id)arg1;
- (void)_unregisterForPlaylistManager:(id)arg1;
- (void)_updateCurrentItemBookkeepingForTimerCallback;
- (void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(bool)arg1;
- (void)_updateCurrentItemDurationSnapshotWithPlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_updateCurrentItemHasFinishedDownloading;
- (void)_updateHasProtectedContentForItem:(id)arg1;
- (void)_updateLastSetTimeForCurrentItemIfNeeded;
- (void)_updatePlaybackModeForItem:(id)arg1;
- (void)_updateProgress:(struct __CFRunLoopTimer { }*)arg1;
- (void)_updateScanningRate;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_updateStateForPlaybackPrevention;
- (void)_updateTypeForItem:(id)arg1;
- (void)_verifyDisplayProtection;
- (void)_verifyShouldContinuePlayback;
- (void)_volumeDidChangeNotification:(id)arg1;
- (long long)activeRepeatType;
- (long long)activeShuffleType;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(id /* block */)arg2;
- (void)airPlayFailedRentalDownloadRequired;
- (void)airPlayVideoEnded;
- (bool)allowsExternalPlayback;
- (bool)alwaysPlayWheneverPossible;
- (void)applyRepeatSettings;
- (void)applyShuffleSettings;
- (bool)autoPlayWhenLikelyToKeepUp;
- (void)autoclearDisplayOverride;
- (bool)automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
- (id)avPlayer;
- (bool)becomeActiveWithError:(id*)arg1;
- (void)beginInterruption;
- (void)beginSeek:(int)arg1;
- (void)beginTickTimerWithInterval:(double)arg1;
- (void)beginUsingVideoLayer;
- (unsigned long long)bufferingState;
- (bool)canPlayFastReverse;
- (bool)canSeekBackwards;
- (bool)canSeekForwards;
- (bool)canSkipToSeekableEnd;
- (void)changePlaybackIndexBy:(long long)arg1;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(bool)arg3;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(bool)arg3 allowSkippingUnskippableContent:(bool)arg4;
- (bool)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(bool)arg3 allowSkippingUnskippableContent:(bool)arg4 error:(id*)arg5;
- (id)currentItem;
- (id)currentMediaItem;
- (id)currentMediaQuery;
- (double)currentTime;
- (double)currentTimeForBookmarking;
- (void)dealloc;
- (bool)destinationIsTVOut;
- (bool)disableAirPlayMirroringDuringPlayback;
- (void)disableAutoplayForCurrentItem;
- (long long)displayOverridePlaybackState;
- (double)durationOfCurrentItemIfAvailable;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)enableAutoplayForCurrentItem;
- (void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned long long)arg3;
- (void)endPlayback;
- (void)endSeek;
- (void)endTickTimer;
- (void)endUsingVideoLayer;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (id)feeder;
- (void)finalizeBookkeepingNow;
- (bool)forceRestartPlaybackIfNecessary;
- (bool)hasVolumeControl;
- (id)identifier;
- (id)init;
- (bool)isCurrentItemReady;
- (bool)isExternalPlaybackActive;
- (bool)isLiveStreaming;
- (bool)isPlaying;
- (bool)isSeekingOrScrubbing;
- (bool)isTickTimerEnabled;
- (bool)isValid;
- (bool)limitsBandwidthForCellularAccess;
- (bool)managesAirPlayBehaviors;
- (bool)muted;
- (double)nextFadeOutDuration;
- (void)notifyAVPlayerItemDidChange:(id)arg1;
- (void)notifyAVPlayerItemWillChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)pauseWithFadeout:(float)arg1;
- (id)pictureInPictureController;
- (void)play;
- (void)playItemAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)playWithOptions:(unsigned long long)arg1;
- (double)playableDurationOfCurrentItemIfAvailable;
- (long long)playbackMode;
- (void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 queueCoordinator:(id)arg2 willInsertItem:(id)arg3 afterItem:(id)arg4;
- (id)policyEnforcer;
- (id)preferredLanguages;
- (id)queueCoordinator;
- (id)queuePlayer;
- (float)rate;
- (void)reloadWithPlaybackContext:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTimeObserver:(id)arg1;
- (long long)repeatType;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAlwaysPlayWheneverPossible:(bool)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
- (void)setAutoclearingDisplayOverridePlaybackState:(long long)arg1;
- (void)setAutomaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds:(bool)arg1;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(bool)arg2;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(bool)arg2 shouldIgnorePlaybackQueueTransactions:(bool)arg3;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 options:(long long)arg2;
- (void)setDestinationIsTVOut:(bool)arg1;
- (void)setDisableAirPlayMirroringDuringPlayback:(bool)arg1;
- (void)setDisableAirPlayMirroringDuringPlayback:(bool)arg1 shouldIgnorePlaybackQueueTransactions:(bool)arg2;
- (void)setDisplayOverridePlaybackState:(long long)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setLimitsBandwidthForCellularAccess:(bool)arg1;
- (void)setManagesAirPlayBehaviors:(bool)arg1;
- (void)setNextFadeOutDuration:(double)arg1;
- (void)setPlaybackIndex:(long long)arg1;
- (void)setPlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaylistManager:(id)arg1;
- (void)setPolicyEnforcer:(id)arg1;
- (void)setQueueCoordinator:(id)arg1;
- (void)setQueuePlayer:(id)arg1;
- (bool)setRate:(float)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setShouldEnforceHDCP:(bool)arg1;
- (void)setShouldResetQueueWhenReachingEnd:(bool)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setStopAtEnd:(bool)arg1;
- (void)setUbiquitousBookkeepingEnabled:(bool)arg1;
- (void)setUseAirPlayMusicMode:(bool)arg1;
- (void)setUseApplicationAudioSession:(bool)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1 shouldIgnorePlaybackQueueTransactions:(bool)arg2;
- (void)setVolume:(float)arg1;
- (void)setWantsPictureInPicture:(bool)arg1;
- (bool)shouldDisplayAsPlaying;
- (bool)shouldEnforceHDCP;
- (bool)shouldHaveNoActionAtEndForState:(long long)arg1;
- (bool)shouldResetQueueWhenReachingEnd;
- (bool)showPlaybackStateOverlaysOnTVOut;
- (long long)shuffleType;
- (void)skipToSeekableEnd;
- (void)skipToSeekableStart;
- (long long)state;
- (bool)stopAtEnd;
- (void)tickTimerFired;
- (double)timeOfPlayableEnd;
- (double)timeOfPlayableStart;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (void)togglePlayback;
- (void)togglePlaybackWithOptions:(unsigned long long)arg1;
- (bool)ubiquitousBookkeepingEnabled;
- (void)updateBookkeepingNow;
- (bool)useAirPlayMusicMode;
- (bool)useApplicationAudioSession;
- (id)videoLayer;
- (id)videoView;
- (float)volume;
- (bool)wantsPictureInPicture;

@end
