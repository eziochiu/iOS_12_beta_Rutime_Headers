/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMovieRenderer : KNBuildRenderer <KNAmbientBuildRenderer, TSKMediaPlayerControllerDelegate> {
    TSUWeakReference * _buildInRendererReference;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInContainerView;
    unsigned int  _hasMoviePlaybackStarted;
    unsigned int  _hasPendingTogglePlayingControl;
    unsigned int  _isObservingVideoLayerReadyForDisplay;
    unsigned int  _isTeardownCompletionBlockPending;
    SEL  _movieStartCallbackSelector;
    id  _movieStartCallbackTarget;
    unsigned int  _needsPlaybackAtStartTime;
    unsigned int  _needsToSendBuildEndCallback;
    unsigned int  _needsToSendMovieStartCallback;
    unsigned int  _pendingTogglePlayingControlStartsPlaying;
    double  _playbackAtStartTimePauseOffset;
    double  _playbackAtStartTimePauseTime;
    NSObject<TSKLayerMediaPlayerController> * _playerController;
    unsigned int  _shouldMoviePlaybackEndOnCompletion;
    double  _startTime;
    CALayer * _videoLayer;
    unsigned int  _wasMoviePlayingBeforeAnimationPause;
}

@property (nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAmbientBuildStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<NSCopying> *movieTimelineMovieIdentifier;
@property (nonatomic, readonly) CALayer *offscreenVideoLayer;
@property (nonatomic, readonly) NSObject<TSKMediaPlayerController> *playerController;
@property (nonatomic, readonly) bool shouldActionBuildsStopAnimations;
@property (readonly) Class superclass;

+ (id)movieInfoForMovieTimelineMovieIdentifier:(id)arg1;
+ (id)movieTimelineMovieIdentifierForMovieInfo:(id)arg1;

- (bool)addAnimationsAtLayerTime:(double)arg1;
- (void)animateAfterDelay:(double)arg1;
- (void)applyMovieControl:(long long)arg1;
- (id)buildInRenderer;
- (void)dealloc;
- (void)forceRemoveAnimations;
- (bool)hasAmbientBuildStarted;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5;
- (void)interruptAndReset;
- (id)movieTimelineMovieIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)offscreenVideoLayer;
- (void)p_applyActionEffect:(id)arg1;
- (void)p_cancelPlaybackAtStartTime;
- (struct CGImage { }*)p_copyCurrentVideoFrameImage;
- (struct CGImage { }*)p_copyCurrentVideoFrameImageUsingAVAssetImageGenerator;
- (void)p_didEndMoviePlayback;
- (void)p_didStartMoviePlayback;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupPlayerController;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg1 strokeTexture:(id)arg2 reflectionMaskTexture:(id)arg3 frameMaskTexture:(id)arg4;
- (void)p_setupVideoLayer;
- (void)p_showVideoLayer;
- (void)p_startMoviePlaybackIfNeeded;
- (void)p_startPlaybackAtStartTime;
- (void)p_teardownUpdatingTexture:(bool)arg1;
- (void)p_unschedulePlaybackAtStartTime;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (id)playerController;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)registerForAmbientBuildStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(bool)arg1;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setBuildInRenderer:(id)arg1;
- (bool)shouldActionBuildsStopAnimations;
- (void)stopAnimations;
- (void)updateAnimationsForLayerTime:(double)arg1;

@end
