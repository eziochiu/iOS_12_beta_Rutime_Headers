/* made by EzioChiu.
 */

@protocol TSKMediaPlayerController <NSObject>

@required

- (double)absoluteCurrentTime;
- (double)absoluteDuration;
- (void)addObservationToken:(id <NSObject>)arg1;
- (id)addPeriodicTimeObserverForInterval:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)beginScrubbing;
- (bool)canFastForward;
- (bool)canFastReverse;
- (bool)canPlay;
- (void)cancelPendingSeeks;
- (double)currentTime;
- (<TSKMediaPlayerControllerDelegate> *)delegate;
- (double)duration;
- (void)endScrubbing;
- (double)endTime;
- (bool)isFastForwarding;
- (bool)isFastReversing;
- (bool)isPlaying;
- (bool)isScrubbing;
- (float)rate;
- (double)remainingTime;
- (void)removeObservationToken:(id <NSObject>)arg1;
- (void)removePeriodicTimeObserver:(id)arg1;
- (long long)repeatMode;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)scrubToTime:(void *)arg1 withTolerance:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)setEndTime:(double)arg1;
- (void)setFastForwarding:(bool)arg1;
- (void)setFastReversing:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (double)startTime;
- (void)stopSynchronously;
- (void)teardown;
- (float)volume;

@end
