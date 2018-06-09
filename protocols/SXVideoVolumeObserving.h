/* made by EzioChiu.
 */

@protocol SXVideoVolumeObserving <NSObject>

@required

- (id /* block */)muteStateChangeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SXVideoVolumeObserving> *, void*, id, SEL
- (bool)muted;
- (void)onMuteStateChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SXVideoVolumeObserving> *, void*
- (void)onVolumeChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SXVideoVolumeObserving> *, void*
- (float)volume;
- (id /* block */)volumeChangeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SXVideoVolumeObserving> *, void*, id, SEL

@end
