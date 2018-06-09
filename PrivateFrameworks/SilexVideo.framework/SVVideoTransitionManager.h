/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoTransitionManager : NSObject <SVVideoTransitionManager> {
    SVPlaybackTransition * _activeTransition;
    NSMutableArray * _pendingVideos;
    <SVVideoQueueProviding> * _queueProvider;
    <SVPlaybackTransitionCoordinatorFactory> * _transitionCoordinatorFactory;
    NSMutableArray * _transitionObservers;
    <SVVideoVisibilityMonitorProviding> * _visibilityMonitorProviding;
    <SVVideo> * _visibleVideo;
}

@property (nonatomic, retain) SVPlaybackTransition *activeTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *pendingVideos;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVPlaybackTransitionCoordinatorFactory> *transitionCoordinatorFactory;
@property (nonatomic, readonly) NSMutableArray *transitionObservers;
@property (nonatomic, readonly) <SVVideoVisibilityMonitorProviding> *visibilityMonitorProviding;
@property (nonatomic, retain) <SVVideo> *visibleVideo;

- (void).cxx_destruct;
- (id)activeTransition;
- (void)addTransitionObserver:(id)arg1;
- (id)initWithTransitionCoordinatorFactory:(id)arg1 visibilityMonitorProviding:(id)arg2;
- (id)pendingVideos;
- (void)performNextTransition;
- (id)queueProvider;
- (void)removeTransitionObserver:(id)arg1;
- (void)setActiveTransition:(id)arg1;
- (void)setVisibleVideo:(id)arg1;
- (id)transitionCoordinatorFactory;
- (id)transitionObservers;
- (void)transitionToVideo:(id)arg1;
- (id)visibilityMonitorProviding;
- (id)visibleVideo;

@end
