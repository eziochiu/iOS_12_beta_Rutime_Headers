/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayerPlaybackLeaseController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasDoneInitialSetup;
    bool  _isAutomaticLeaseRefreshEnabled;
    bool  _isObservingSubscriptionNotifications;
    bool  _isPlayerEffectivelyPlaying;
    bool  _isStartingLeaseForPlaybackResumption;
    NSMutableArray * _players;
    unsigned long long  _preventionState;
    bool  _shouldStartLeaseForAssets;
    bool  _shouldStartLeaseForUserAction;
    NSMutableArray * _startLeaseForPlaybackResumptionCompletionHandlers;
    bool  _usesSubscriptionLease;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_acquireSubscriptionLeaseForCurrentItemIfNeededWithPlayer:(id)arg1;
- (bool)_calculateEffectivelyPlayingForPlayer:(id)arg1;
- (bool)_pausePlayerForLeaseEnd:(id)arg1;
- (void)_pausePlayersForLeaseEndWithNotification:(bool)arg1;
- (void)_playerItemReadyToPlayNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (bool)_shouldPausePlaybackReturningWasLeaseTaken:(bool*)arg1;
- (void)_shouldPlaybackRequireSubscriptionLeaseDidChangeNotification:(id)arg1;
- (void)_startLeaseIfNeededForCurrentPlayerItemsFromUserAction:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(id /* block */)arg1;
- (void)_subscriptionLeaseDidBeginNotification:(id)arg1;
- (void)_subscriptionLeaseDidEndNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updatePlayerEffectivelyPlaying;
- (void)_updateUsesSubscriptionLease;
- (void)acquireShouldStartLeaseForAssetCreationWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)getFinalSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (void)handleLeaseForErrorResolutionWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)registerPlayer:(id)arg1;
- (void)startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(id /* block */)arg1;

@end
