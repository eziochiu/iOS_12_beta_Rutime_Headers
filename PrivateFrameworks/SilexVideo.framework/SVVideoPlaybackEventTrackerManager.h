/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackEventTrackerManager : NSObject <SVVideoTransitionObserver> {
    <SVVideoPlaybackEventTracking> * _playbackEventTracker;
    <SVVideoPlaybackEventTrackerFactory> * _playbackEventTrackerFactory;
    NSMutableSet * _playbackEventTrackers;
    <SVVideoEventTrackerProviding> * _videoEventTrackerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoPlaybackEventTracking> *playbackEventTracker;
@property (nonatomic, readonly) <SVVideoPlaybackEventTrackerFactory> *playbackEventTrackerFactory;
@property (nonatomic, readonly) NSMutableSet *playbackEventTrackers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoEventTrackerProviding> *videoEventTrackerProvider;

- (void).cxx_destruct;
- (id)initWithPlaybackEventTrackerFactory:(id)arg1 videoEventTrackerProvider:(id)arg2;
- (id)playbackEventTracker;
- (id)playbackEventTrackerFactory;
- (id)playbackEventTrackers;
- (void)setPlaybackEventTracker:(id)arg1;
- (id)videoEventTrackerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
