/* made by EzioChiu.
 */

@protocol MPMediaDownloadObserver <NSObject>

@optional

- (void)downloadManager:(MPMediaDownloadManager *)arg1 didEnqueueAssetDownloads:(NSArray *)arg2 didRemoveAssetDownloads:(NSArray *)arg3;
- (void)downloadManager:(MPMediaDownloadManager *)arg1 didFinishAsset:(NSArray *)arg2 withError:(NSError *)arg3;
- (void)downloadManager:(MPMediaDownloadManager *)arg1 didUpdateDownloadProgress:(NSArray *)arg2;

@end