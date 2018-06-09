/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController> {
    TLAlert * _alertForAudioEnvironmentSetup;
    <NSCopying> * _attentionPollingToken;
    NSObject<OS_dispatch_queue> * _audioEventQueue;
    NSString * _audioEventQueueLabel;
    unsigned long long  _audioSessionDeactivationPreventionRequestsCount;
    TLAttentionAwarenessEffectCoordinator * _effectCoordinator;
    bool  _hasToneAssetForPendingPlayingAlert;
    bool  _isAlertActivationAssertionAcquired;
    bool  _isAttentionAwarenessSubsystemFullyInitialized;
    bool  _isAudioEnvironmentSetup;
    bool  _isAudioSessionActive;
    bool  _isBypassingRingerSwitchPolicy;
    bool  _isObservingAudioSessionInterruptionNotification;
    bool  _isObservingQueuePlayer;
    long long  _lastAttentionPollingEventType;
    <TLAlertPlaybackObserver> * _playbackObserver;
    TLAlert * _playingAlert;
    id /* block */  _playingAlertCompletionHandler;
    NSString * _playingToneIdentifier;
    NSString * _previousAudioCategory;
    unsigned long long  _previousAudioCategoryOptions;
    AVQueuePlayer * _queuePlayer;
    AVAsset * _toneAssetForPendingPlayingAlert;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_audioCategoryForAlert:(id)arg1;
+ (id)_celestialAudioCategoryForAudioSessionCategory:(id)arg1;
+ (id)_clientNameForAlert:(id)arg1;
+ (long long)_clientPriorityForAlert:(id)arg1;
+ (id)_propertyKeysOfInterestForToneAssets;
+ (bool)_shouldApplyAttentionAwarenessEffectsForAlert:(id)arg1;
+ (bool)_shouldBypassRingerSwitchPolicyForAlert:(id)arg1;
+ (bool)_shouldHandleAudioSessionActivationForAlert:(id)arg1;
+ (bool)_shouldVibrateForAlert:(id)arg1;

- (void).cxx_destruct;
- (void)_activateAudioSessionIfNeeded;
- (void)_assertRunningOnAudioEventQueue;
- (float)_audioVolumeForAlert:(id)arg1 audioCategory:(id)arg2;
- (void)_beginPreventingAudioSessionDeactivation;
- (bool)_canPlayToneAsset:(id)arg1;
- (void)_createQueuePlayerIfNecessary;
- (void)_deactivateAudioSessionIfNeeded;
- (void)_destroyQueuePlayer;
- (void)_didCompletePlaybackWithCompletionType:(long long)arg1 error:(id)arg2;
- (void)_didEndPlayingAlert;
- (void)_didReceiveAttentionPollingEventOfType:(long long)arg1;
- (void)_endPreventingAudioSessionDeactivation;
- (id)_fallbackToneIdentifierForPlayingAlert;
- (void)_handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(bool)arg2;
- (void)_handleAudioSessionInterruptionNotification:(id)arg1;
- (void)_handleAudioSessionInterruptionOfType:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)_performBlockOnAudioEventQueue:(id /* block */)arg1;
- (void)_playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_prepareAudioEnvironment;
- (void)_queuePlayer:(id)arg1 currentItemStatusWasUpdatedToValue:(long long)arg2;
- (void)_queuePlayer:(id)arg1 currentItemWasUpdatedFromValue:(id)arg2;
- (void)_reloadPlaybackForPlayingAlertWithToneIdentifier:(id)arg1;
- (void)_resetClientPriority;
- (void)_restoreAudioEnvironment;
- (void)_startObservingAudioSessionInterruptionNotifications;
- (void)_startObservingQueuePlayer;
- (void)_startPlaybackForAssetWithLoadedProperties:(id)arg1 alert:(id)arg2;
- (void)_startPlaybackForPlayingAlertUsingConfirmedPlayableAsset:(id)arg1;
- (void)_startPlaybackForPlayingAlertUsingConfirmedPlayableAsset:(id)arg1 hasAlreadyDetectedUserAttention:(bool)arg2;
- (void)_stopObservingAudioSessionInterruptionNotifications;
- (void)_stopObservingQueuePlayer;
- (void)_stopPlayback;
- (void)_stopPlaybackWithOptions:(id)arg1 playerWasAlreadyPausedExternally:(bool)arg2;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;
- (void)_willBeginPlayingAlert;
- (void)dealloc;
- (id)description;
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(bool)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end
