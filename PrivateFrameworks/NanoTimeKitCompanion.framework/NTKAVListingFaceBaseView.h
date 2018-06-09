/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView {
    UIView * _blackView;
    bool  _contentUnloadedForFaceSwiping;
    <NTKAVListing> * _currentListing;
    bool  _isPauseLockedout;
    bool  _isPaused;
    NTKDelayedBlock * _pauseLockoutBlock;
    NTKDelayedBlock * _playNextVideoDelayBlock;
    NSTimer * _playOnWakeTimeout;
    bool  _preLoadedVideoOnSleep;
    bool  _preLoadingVideoOnSleep;
    long long  _previousDataMode;
    bool  _shouldChangeVariantForScreenWake;
    bool  _shouldPause;
    bool  _shouldPlayOnWake;
    NTKTaskScheduler * _taskScheduler;
    bool  _updateWhenUnpausing;
}

@property (nonatomic) bool contentUnloadedForFaceSwiping;
@property (nonatomic, retain) <NTKAVListing> *currentListing;
@property (nonatomic, readonly) bool paused;
@property (nonatomic) bool shouldChangeVariantForScreenWake;
@property (nonatomic, readonly) bool shouldPause;

- (void).cxx_destruct;
- (void)_activatePauseLockout;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applySlow;
- (void)_backlightWillTurnOff;
- (void)_cancelDelayedPlayback;
- (void)_cancelPauseLockout;
- (bool)_changeCurrentListing;
- (void)_cleanupAfterOrb:(bool)arg1;
- (void)_complicationFlickerWorkgroundAnimationWithDuration:(double)arg1 applier:(id /* block */)arg2;
- (id)_curtainView;
- (bool)_curtainViewVisible;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_handleOrdinaryScreenWake;
- (void)_handleScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_hideCurtainView;
- (void)_loadSnapshotContentViews;
- (void)_loadVideoForListing;
- (bool)_needsVignette;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (void)_pauseImmediately;
- (void)_performPreloadVideoTask;
- (void)_playNextVideo;
- (void)_playNextVideoAfterDelay:(double)arg1;
- (void)_playQueuedUpVideo;
- (void)_playVideo;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_queuePreloadVideoTask;
- (void)_reset;
- (void)_resetVideoForListing;
- (void)_selectDefaultListing;
- (void)_showCurtainView;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_timeLabelUsesLegibility;
- (void)_transitionToPosterView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_unpauseFromSwitcher;
- (void)_updateImageToBlur;
- (void)_updatePaused;
- (bool)contentUnloadedForFaceSwiping;
- (id)currentListing;
- (void)dealloc;
- (void)faultInFaceContentSkippedDuringSwiping;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (bool)paused;
- (void)setContentUnloadedForFaceSwiping:(bool)arg1;
- (void)setCurrentListing:(id)arg1;
- (void)setShouldChangeVariantForScreenWake:(bool)arg1;
- (bool)shouldChangeVariantForScreenWake;
- (bool)shouldPause;

@end
