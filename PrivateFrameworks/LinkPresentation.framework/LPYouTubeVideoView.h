/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView * _platformYouTubeView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createVideoPlayerView;
- (void)enterCustomFullScreen;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (bool)isMuted;
- (void)setMuted:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setVolume:(double)arg1;
- (bool)shouldShowMuteButton;
- (bool)usesCustomFullScreenImplementation;
- (bool)usesSharedAudioSession;
- (double)volume;
- (void)youTubePlayer:(id)arg1 didChangeToFullScreen:(bool)arg2;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;

@end
