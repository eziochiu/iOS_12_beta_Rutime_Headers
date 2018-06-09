/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoPlaybackAllowabilityManager : NSObject <NUVideoPlayerEventTracker> {
    <SVVideoPlaybackController> * _playbackController;
    <SVVideoPlaybackPolicy> * _playbackPolicy;
    <SVVisibilityMonitoring> * _visibilityMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackController> *playbackController;
@property (nonatomic, readonly) <SVVideoPlaybackPolicy> *playbackPolicy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVisibilityMonitoring> *visibilityMonitor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPlayerVisibilityMonitor:(id)arg1 playbackController:(id)arg2 playbackPolicy:(id)arg3;
- (id)playbackController;
- (id)playbackPolicy;
- (void)videoPlayerDidBecomeInvisible;
- (id)visibilityMonitor;

@end
