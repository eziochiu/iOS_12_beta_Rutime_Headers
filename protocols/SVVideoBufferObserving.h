/* made by EzioChiu.
 */

@protocol SVVideoBufferObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoBufferObserving> *, void*, id, SEL
- (bool)isPlaybackBufferFull;
- (bool)isPlaybackLikelyToKeepUp;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoBufferObserving> *, void*

@end
