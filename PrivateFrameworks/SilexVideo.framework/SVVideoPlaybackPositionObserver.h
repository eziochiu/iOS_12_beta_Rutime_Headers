/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackPositionObserver : NSObject <SVVideoPlaybackPositionObserving> {
    id /* block */  _changeBlock;
    <SVPlayerItemObserving> * _playerItemObserver;
    unsigned long long  _position;
    <SVPlayerTimeControlStatusObserving> * _timeControlStatusObserver;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemObserving> *playerItemObserver;
@property (nonatomic) unsigned long long position;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVPlayerTimeControlStatusObserving> *timeControlStatusObserver;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithPlayerItemObserver:(id)arg1 timeControlStatusObserver:(id)arg2;
- (void)onChange:(id /* block */)arg1;
- (id)playerItemObserver;
- (void)playerItemPlayedToEnd:(id)arg1;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg1;
- (id)timeControlStatusObserver;

@end
