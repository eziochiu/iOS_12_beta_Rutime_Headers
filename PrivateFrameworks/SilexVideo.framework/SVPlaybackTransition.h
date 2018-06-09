/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaybackTransition : NSObject {
    SVPlaybackTransitionContext * _context;
    <SVVideo> * _fromVideo;
    <SVVideo> * _toVideo;
    <SVInteractivePlaybackTransitioning> * _transitionCoordinator;
}

@property (nonatomic, retain) SVPlaybackTransitionContext *context;
@property (nonatomic, readonly) <SVVideo> *fromVideo;
@property (nonatomic, readonly) <SVVideo> *toVideo;
@property (nonatomic, readonly) <SVInteractivePlaybackTransitioning> *transitionCoordinator;

- (void).cxx_destruct;
- (void)cancel;
- (id)context;
- (id)fromVideo;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionWithVisibilityMonitor:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setContext:(id)arg1;
- (id)toVideo;
- (id)transitionCoordinator;

@end
