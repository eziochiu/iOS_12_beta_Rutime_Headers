/* made by EzioChiu.
 */

@protocol SVPlayerItemLoading <NSObject>

@required

- (NSError *)error;
- (AVPlayerItem *)item;
- (void)load;
- (void)onLoadingStateChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVPlayerItemLoading> *, void*
- (unsigned long long)state;

@end
