/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVTimelineManager : NSObject <SVVideoTransitionObserver> {
    <SVVideoPlaybackProgressObserving> * _playbackProgressObserver;
    <SVVideoPlaybackProgressObserverFactory> * _playbackProgressObserverFactory;
    SVTimeline * _timeline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoPlaybackProgressObserving> *playbackProgressObserver;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserverFactory> *playbackProgressObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;

- (void).cxx_destruct;
- (id)initWithTimeline:(id)arg1 playbackProgressObserverFactory:(id)arg2;
- (id)playbackProgressObserver;
- (id)playbackProgressObserverFactory;
- (void)setPlaybackProgressObserver:(id)arg1;
- (id)timeline;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
