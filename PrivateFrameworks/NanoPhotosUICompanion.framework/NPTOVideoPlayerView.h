/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOVideoPlayerView : UIView {
    <NPTOVideoPlayerViewDelegate> * _delegate;
    AVPlayerItem * _observedItem;
    UIView * _pausedView;
    id  _periodicTimeObserver;
    bool  _playRequested;
    AVQueuePlayer * _player;
    AVPlayerItem * _playerItem;
    _NPTOPlayerView * _playerView;
    bool  _playing;
    bool  _prerollRequested;
    NSValue * _seekRequested;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekWithTolerance;
    unsigned long long  _servicingRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _willBeginPlayingTime;
}

@property (nonatomic) <NPTOVideoPlayerViewDelegate> *delegate;
@property (nonatomic, readonly) bool playing;

- (void).cxx_destruct;
- (id)_createPlayerItemForVideoURL:(id)arg1;
- (void)_handleDidPlayToEndTime:(id)arg1;
- (void)_hidePlayerView;
- (void)_observePlayerItem:(id)arg1;
- (void)_pause;
- (void)_performNextRequest;
- (void)_periodicTimeObserverChanged:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_play;
- (void)_preroll;
- (bool)_readyToPerformRequest;
- (void)_resetRequestState;
- (void)_revealPlayerView;
- (void)_seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_stopObservingPlayerItem;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)loadVideo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)player;
- (bool)playing;
- (void)preroll;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 tolerance:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setDelegate:(id)arg1;

@end