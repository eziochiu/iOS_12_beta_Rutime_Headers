/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackManager : NSObject <SVVideoPlaybackController, SVVideoTransitionObserver> {
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SVVideoPlaybackAdvancing> * _playbackAdvancer;
    SVPlaybackCoordinator * _playbackCoordinator;
    <SVPlaybackCoordinatorProviding> * _playbackCoordinatorProvider;
    <SVVideoPlaybackPolicy> * _playbackPolicy;
    <SVVideoPlaybackStateObserving> * _playbackStateObserver;
    <SVVideoPlaybackStateObserverFactory> * _playbackStateObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) <SVVideoPlaybackAdvancing> *playbackAdvancer;
@property (nonatomic, retain) SVPlaybackCoordinator *playbackCoordinator;
@property (nonatomic, readonly) <SVPlaybackCoordinatorProviding> *playbackCoordinatorProvider;
@property (nonatomic, readonly) <SVVideoPlaybackPolicy> *playbackPolicy;
@property (nonatomic, retain) <SVVideoPlaybackStateObserving> *playbackStateObserver;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserverFactory> *playbackStateObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaybackPolicy:(id)arg1 playbackAdvancer:(id)arg2 playbackCoordinatorProvider:(id)arg3 playbackStateObserverFactory:(id)arg4 loadingStateObserverFactory:(id)arg5;
- (id)loadingStateObserver;
- (id)loadingStateObserverFactory;
- (void)pause;
- (void)play;
- (void)playWithoutRequestingPlayback;
- (id)playbackAdvancer;
- (id)playbackCoordinator;
- (id)playbackCoordinatorProvider;
- (id)playbackPolicy;
- (id)playbackStateObserver;
- (id)playbackStateObserverFactory;
- (void)setLoadingStateObserver:(id)arg1;
- (void)setPlaybackCoordinator:(id)arg1;
- (void)setPlaybackStateObserver:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
