/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioPlayer : NSObject {
    AVAsset * _asset;
    <MSCLAudioPlayerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    id  _representedObject;
    MSCLAudioPlayerStatus * _status;
    id  _timeObserver;
    bool  _usesCADisplayLink;
}

@property (nonatomic) <MSCLAudioPlayerDelegate> *delegate;
@property (nonatomic, retain) id representedObject;
@property (nonatomic, readonly, copy) MSCLAudioPlayerStatus *status;
@property (nonatomic) bool usesCADisplayLink;

- (void).cxx_destruct;
- (void)_destroyPlayer;
- (void)_displayLinkTick:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (void)_sendStatusDidChange;
- (void)_setPlayerState:(long long)arg1;
- (void)_updateStatusWithCurrentTime:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAsset:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)representedObject;
- (void)setDelegate:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setUsesCADisplayLink:(bool)arg1;
- (id)status;
- (void)stop;
- (void)togglePlayback;
- (bool)usesCADisplayLink;

@end
