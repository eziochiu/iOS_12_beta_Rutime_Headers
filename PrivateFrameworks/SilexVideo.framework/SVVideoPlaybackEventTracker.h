/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackEventTracker : NSObject <SVVideoPlaybackEventTracking> {
    NSError * _error;
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoPlaybackStateObserving> * _playbackStateObserver;
    NFStateMachine * _stateMachine;
    id /* block */  playbackFailedBlock;
    id /* block */  playbackFinishedBlock;
    id /* block */  playbackPausedBlock;
    id /* block */  playbackResumedBlock;
    id /* block */  playbackStartBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (setter=onPlaybackFailed:, nonatomic, copy) id /* block */ playbackFailedBlock;
@property (setter=onPlaybackFinished:, nonatomic, copy) id /* block */ playbackFinishedBlock;
@property (setter=onPlaybackPaused:, nonatomic, copy) id /* block */ playbackPausedBlock;
@property (setter=onPlaybackResumed:, nonatomic, copy) id /* block */ playbackResumedBlock;
@property (setter=onPlaybackStart:, nonatomic, copy) id /* block */ playbackStartBlock;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserving> *playbackStateObserver;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)error;
- (id)initWithPlaybackStateObserver:(id)arg1 loadingStateObserver:(id)arg2;
- (id)loadingStateObserver;
- (void)onPlaybackFailed:(id /* block */)arg1;
- (void)onPlaybackFinished:(id /* block */)arg1;
- (void)onPlaybackPaused:(id /* block */)arg1;
- (void)onPlaybackResumed:(id /* block */)arg1;
- (void)onPlaybackStart:(id /* block */)arg1;
- (id /* block */)playbackFailedBlock;
- (id /* block */)playbackFinishedBlock;
- (id /* block */)playbackPausedBlock;
- (id /* block */)playbackResumedBlock;
- (id /* block */)playbackStartBlock;
- (id)playbackStateObserver;
- (void)setError:(id)arg1;
- (id)stateMachine;

@end
