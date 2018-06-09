/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoBufferObserver : NSObject <SVVideoBufferObserving> {
    id /* block */  _changeBlock;
    bool  _playbackBufferFull;
    SVKeyValueObserver * _playbackBufferFullObserver;
    bool  _playbackLikelyToKeepUp;
    SVKeyValueObserver * _playbackLikelyToKeepUpObserver;
    <SVPlayerItemObserving> * _playerItemObserver;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPlaybackBufferFull, nonatomic) bool playbackBufferFull;
@property (nonatomic, readonly) SVKeyValueObserver *playbackBufferFullObserver;
@property (getter=isPlaybackLikelyToKeepUp, nonatomic) bool playbackLikelyToKeepUp;
@property (nonatomic, readonly) SVKeyValueObserver *playbackLikelyToKeepUpObserver;
@property (nonatomic, readonly) <SVPlayerItemObserving> *playerItemObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithPlayerItemObserver:(id)arg1;
- (bool)isPlaybackBufferFull;
- (bool)isPlaybackLikelyToKeepUp;
- (void)onChange:(id /* block */)arg1;
- (id)playbackBufferFullObserver;
- (id)playbackLikelyToKeepUpObserver;
- (id)playerItemObserver;
- (void)setPlaybackBufferFull:(bool)arg1;
- (void)setPlaybackLikelyToKeepUp:(bool)arg1;

@end
