/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaItemAirTrafficDownloadController : VUIMPMediaItemDownloadController

- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithMediaItem:(id)arg1 state:(unsigned long long)arg2 downloadProgress:(double)arg3 downloadSucceeded:(bool)arg4;
- (bool)supportsCancellation;
- (bool)supportsPausing;

@end
