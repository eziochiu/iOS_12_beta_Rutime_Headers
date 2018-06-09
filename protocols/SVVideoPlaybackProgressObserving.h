/* made by EzioChiu.
 */

@protocol SVVideoPlaybackProgressObserving <NSObject>

@required

- (double)duration;
- (void)onProgressChanged:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackProgressObserving> *, void*
- (void)onReset:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackProgressObserving> *, void*
- (double)progress;
- (id /* block */)progressChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackProgressObserving> *, void*, id, SEL
- (id /* block */)resetBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackProgressObserving> *, void*, id, SEL
- (double)time;

@end
