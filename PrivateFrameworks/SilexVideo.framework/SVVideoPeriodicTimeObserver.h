/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPeriodicTimeObserver : NSObject <SVVideoPeriodicTimeObserving> {
    <SVVideoPlaybackStateObserving> * _playbackStateObserver;
    SVPlayer * _player;
    double  _time;
    id  _timeObserverToken;
    id /* block */  changeBlock;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserving> *playbackStateObserver;
@property (nonatomic, readonly) SVPlayer *player;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (nonatomic, retain) id timeObserverToken;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 playbackStateObserver:(id)arg2;
- (void)onChange:(id /* block */)arg1;
- (id)playbackStateObserver;
- (id)player;
- (void)setTime:(double)arg1;
- (void)setTimeObserverToken:(id)arg1;
- (void)startPeriodicTimeObserverForPlayer:(id)arg1;
- (void)stopPeriodicTimeObserverForPlayer:(id)arg1;
- (double)time;
- (id)timeObserverToken;
- (void)updateTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
