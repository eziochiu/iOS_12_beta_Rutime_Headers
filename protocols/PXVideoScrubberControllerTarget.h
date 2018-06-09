/* made by EzioChiu.
 */

@protocol PXVideoScrubberControllerTarget <NSObject>

@required

- (id)addPeriodicTimeObserverForInterval:(void *)arg1 queue:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 8: struct { long long x1; int x2; unsigned int x3; long long x4; }, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { long long x1; int x2; unsigned int x3; long long x4; }, void*
- (void)cancelPendingSeeks;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentItemDuration;
- (id /* block */)durationChangeHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (float)playRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playerCurrentTime;
- (AVPlayerItem *)playerItem;
- (id /* block */)playerItemChangeHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (long long)playerStatus;
- (void)removeTimeObserver:(id)arg1;
- (void)setDurationChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setPlayerItemChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setStatusChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)statusChangeHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)videoScrubberController:(void *)arg1 seekToTime:(void *)arg2 toleranceBefore:(void *)arg3 toleranceAfter:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: PXVideoScrubberController *, struct { long long x1; int x2; unsigned int x3; long long x4; }, struct { long long x1; int x2; unsigned int x3; long long x4; }, struct { long long x1; int x2; unsigned int x3; long long x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)videoScrubberControllerDidEndSeeking:(PXVideoScrubberController *)arg1;
- (void)videoScrubberControllerWillBeginSeeking:(PXVideoScrubberController *)arg1;

@end
