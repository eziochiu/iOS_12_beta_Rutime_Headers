/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOIrisView : UIView <NPTOVideoPlayerViewDelegate> {
    <NPTOIrisViewDelegate> * _delegate;
    CALayer * _heroLayer;
    UIImageView * _heroView;
    NPTOVideoPlayerView * _playerView;
    bool  _playing;
    long long  _preparedForMode;
    double  _sdt;
    AVSynchronizedLayer * _syncLayer;
    id  _timeObserver;
    long long  _transitionMode;
    double  _vdt;
    bool  _videoLoaded;
    NSURL * _videoURL;
    double  _vitalityPosition;
    double  _vitalityProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPTOIrisViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *heroView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NPTOVideoPlayerView *playerView;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (void)_cancelPlayback;
- (void)_completePlaybackWithMode:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_endTimeForMode:(long long)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_resetVideoPlayer;
- (double)_scaleForTransitionWithMode:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_startTimeForMode:(long long)arg1;
- (double)_transitionDurationForPauseWithMode:(long long)arg1;
- (double)_transitionDurationForPlayWithMode:(long long)arg1;
- (void)_transitionFromHeroToVideo;
- (void)dealloc;
- (id)delegate;
- (id)heroView;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interruptPlayback;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)pauseWithMode:(long long)arg1;
- (void)playWithMode:(long long)arg1;
- (id)playerView;
- (void)prepareToPlayWithMode:(long long)arg1;
- (void)resumeInterruptedPlayback;
- (void)setDelegate:(id)arg1;
- (void)setHeroView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 videoURL:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4;
- (void)setPlayerView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (id)videoURL;

@end
