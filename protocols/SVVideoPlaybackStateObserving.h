/* made by EzioChiu.
 */

@protocol SVVideoPlaybackStateObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackStateObserving> *, void*, id, SEL
- (NSError *)error;
- (bool)isPlaying;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackStateObserving> *, void*
- (unsigned long long)state;

@end
