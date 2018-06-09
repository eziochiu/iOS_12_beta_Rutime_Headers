/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHLivePhotoView : UIView <ISChangeObserver> {
    bool  __playbackRequested;
    ISPlayerItem * __playerItem;
    bool  __playingVitality;
    long long  _currentPlaybackStyle;
    <PHLivePhotoViewDelegate> * _delegate;
    struct { 
        bool respondsToWillBeginPlaybackWithStyle; 
        bool respondsToDidEndPlayback; 
    }  _delegateFlags;
    struct { 
        bool respondsToDidEndPlayingVitality; 
        bool respondsToDidBeginHinting; 
        bool respondsToDidBeginScrubbing; 
        bool respondsToDidEndScrubbing; 
    }  _delegatePrivateFlags;
    PHLivePhoto * _livePhoto;
    bool  _muted;
    UIView * _photoView;
    ISLivePhotoPlayer * _player;
    ISLivePhotoUIView * _playerView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scaleAnchorOffset;
    bool  _scrubbing;
    bool  _shouldApplyTargetReadiness;
    bool  _showsStatusBorder;
    long long  _targetReadiness;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _trimmedTimeRange;
}

@property (setter=_setPlaybackRequested:, nonatomic) bool _playbackRequested;
@property (setter=_setPlayerItem:, nonatomic, retain) ISPlayerItem *_playerItem;
@property (setter=_setPlayingVitality:, nonatomic) bool _playingVitality;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHLivePhotoViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingPhoto, nonatomic, readonly) bool displayingPhoto;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) struct CGImage { }*overridePhoto;
@property (nonatomic, retain) UIView *photoView;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (nonatomic, retain) ISLivePhotoPlayer *player;
@property (nonatomic, retain) ISLivePhotoUIView *playerView;
@property (nonatomic) struct CGPoint { double x1; double x2; } scaleAnchorOffset;
@property (setter=_setScrubbing:, nonatomic) bool scrubbing;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;
@property (nonatomic) bool shouldApplyTargetReadiness;
@property (nonatomic) bool showsStatusBorder;
@property (readonly) Class superclass;
@property (nonatomic) long long targetReadiness;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimmedTimeRange;

+ (id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_commonPHLivePhotoViewInitialization;
- (void)_handlePlayerItemStatusChanged;
- (bool)_playbackRequested;
- (void)_playerDidBeginHinting;
- (id)_playerItem;
- (bool)_playingVitality;
- (void)_setPlaybackRequested:(bool)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)_setPlayingVitality:(bool)arg1;
- (void)_setScrubbing:(bool)arg1;
- (void)_updateCurrentPlaybackStyleAndSeeking;
- (void)_updatePlayerAudioEnabled;
- (void)_updatePlayerTargetReadiness;
- (void)_updatePlayingVitality;
- (void)_updateStatusBorder;
- (id)delegate;
- (id)generateSnapshotImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingPhoto;
- (bool)isMuted;
- (id)livePhoto;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct CGImage { }*)overridePhoto;
- (id)photoView;
- (id)playbackGestureRecognizer;
- (id)player;
- (id)playerView;
- (struct CGPoint { double x1; double x2; })scaleAnchorOffset;
- (bool)scrubbing;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOverridePhoto:(struct CGImage { }*)arg1;
- (void)setPhotoView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setScaleAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setShouldApplyTargetReadiness:(bool)arg1;
- (void)setShowsStatusBorder:(bool)arg1;
- (void)setTargetReadiness:(long long)arg1;
- (void)setTrimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)shouldApplyTargetReadiness;
- (bool)showsStatusBorder;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)stopPlayback;
- (long long)targetReadiness;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimmedTimeRange;

@end
