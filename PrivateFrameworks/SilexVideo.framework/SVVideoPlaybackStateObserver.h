/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackStateObserver : NSObject <SVVideoPlaybackStateObserving> {
    NSError * _error;
    <SVVideoPlaybackPositionObserving> * _playbackPositionObserver;
    unsigned long long  _state;
    NFStateMachine * _stateMachine;
    <SVPlayerStatusObserving> * _statusObserver;
    <SVPlayerTimeControlStatusObserving> * _timeControlStatusObserver;
    id /* block */  changeBlock;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackPositionObserving> *playbackPositionObserver;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic, readonly) <SVPlayerStatusObserving> *statusObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVPlayerTimeControlStatusObserving> *timeControlStatusObserver;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)error;
- (id)initWithStatusObserver:(id)arg1 playbackPositionObserver:(id)arg2 timeControlStatusObserver:(id)arg3;
- (bool)isPlaying;
- (void)onChange:(id /* block */)arg1;
- (id)playbackPositionObserver;
- (void)setError:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)stateMachine;
- (id)statusObserver;
- (id)timeControlStatusObserver;

@end
