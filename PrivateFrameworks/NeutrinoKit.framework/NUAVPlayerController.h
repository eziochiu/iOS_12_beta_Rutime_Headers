/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

@interface NUAVPlayerController : NSObject {
    AVAudioMix * _audioMix;
    <NUAVPlayerControllerDelegate> * _delegate;
    bool  _loopsVideo;
    bool  _muted;
    AVPlayer * _player;
    struct { 
        bool registeredPlayer; 
    }  _playerControllerKVOFlags;
    NSMutableArray * _playerItemObservations;
    double  _updateInterval;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
}

@property (nonatomic, readonly) AVAudioMix *audioMix;
@property (nonatomic) <NUAVPlayerControllerDelegate> *delegate;
@property (nonatomic) bool loopsVideo;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) double updateInterval;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (void)_addPlayerItemKVO:(id)arg1;
- (void)_addPlayerKVO;
- (void)_removePlayerItemKVO:(id)arg1;
- (void)_removePlayerKVO;
- (void)_setRate:(float)arg1;
- (id)audioMix;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isMuted;
- (bool)loopsVideo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)player;
- (void)playerItemDidReachEnd:(id)arg1;
- (bool)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(bool)arg4;
- (void)seekBack;
- (void)seekForward;
- (void)seekToTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoopsVideo:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)updateAudioMix:(id)arg1;
- (double)updateInterval;
- (void)updateVideoComposition:(id)arg1;
- (id)videoAsset;
- (id)videoComposition;

@end
