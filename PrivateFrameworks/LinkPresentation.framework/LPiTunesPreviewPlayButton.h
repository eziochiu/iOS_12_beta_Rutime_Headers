/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesPreviewPlayButton : LPPlayButton <LPMediaPlayer> {
    id  _endObserver;
    AVPlayerItem * _item;
    AVPlayer * _player;
    NSURL * _previewURL;
    long long  _state;
    id  _timeObserver;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullScreen, nonatomic, readonly) bool fullScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long lastInteractionTimestamp;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, readonly) bool shouldUnmuteWhenUserAdjustsVolume;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double unobscuredAreaFraction;
@property (nonatomic, readonly) bool usesSharedAudioSession;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)dealloc;
- (id)initWithPreviewURL:(id)arg1 style:(id)arg2;
- (bool)isActive;
- (bool)isFullScreen;
- (bool)isMuted;
- (bool)isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setActive:(bool)arg1;
- (bool)shouldUnmuteWhenUserAdjustsVolume;
- (void)updateToState:(long long)arg1;
- (bool)usesSharedAudioSession;

@end