/* made by EzioChiu.
 */

@protocol SVVideoPlaybackPositionObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPlaybackPositionObserving> *, void*, id, SEL
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPlaybackPositionObserving> *, void*
- (unsigned long long)position;

@end
