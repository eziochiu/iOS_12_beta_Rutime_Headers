/* made by EzioChiu.
 */

@protocol VUIMPMediaItemDownloadControllerObserver <NSObject>

@optional

- (void)mediaItemDownloadController:(VUIMPMediaItemDownloadController *)arg1 downloadDidFinishWithSuccess:(bool)arg2;
- (void)mediaItemDownloadController:(VUIMPMediaItemDownloadController *)arg1 stateDidChange:(unsigned long long)arg2 downloadProgress:(double)arg3;

@end
