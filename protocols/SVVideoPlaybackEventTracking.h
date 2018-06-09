/* made by EzioChiu.
 */

@protocol SVVideoPlaybackEventTracking <NSObject>

@required

- (NSError *)error;
- (void)onPlaybackFailed:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackEventTracking> *, void*
- (void)onPlaybackFinished:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackEventTracking> *, void*
- (void)onPlaybackPaused:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackEventTracking> *, void*
- (void)onPlaybackResumed:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackEventTracking> *, void*
- (void)onPlaybackStart:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackEventTracking> *, void*
- (id /* block */)playbackFailedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackEventTracking> *, void*, id, SEL
- (id /* block */)playbackFinishedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackEventTracking> *, void*, id, SEL
- (id /* block */)playbackPausedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackEventTracking> *, void*, id, SEL
- (id /* block */)playbackResumedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackEventTracking> *, void*, id, SEL
- (id /* block */)playbackStartBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackEventTracking> *, void*, id, SEL

@end
