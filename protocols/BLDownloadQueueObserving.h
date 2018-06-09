/* made by EzioChiu.
 */

@protocol BLDownloadQueueObserving <NSObject>

@optional

- (void)downloadQueue:(BLDownloadQueue *)arg1 downloadStates:(NSArray *)arg2 didCompleteWithError:(NSError *)arg3;
- (void)downloadQueue:(BLDownloadQueue *)arg1 downloadStatesDidChange:(NSArray *)arg2;
- (void)downloadQueue:(BLDownloadQueue *)arg1 purchaseAttemptForID:(NSString *)arg2 isAudioBook:(bool)arg3;
- (void)downloadQueue:(BLDownloadQueue *)arg1 purchasedDidCompleteWithResponse:(BLPurchaseResponse *)arg2;
- (void)downloadQueue:(BLDownloadQueue *)arg1 purchasedDidFailWithResponse:(BLPurchaseResponse *)arg2;
- (void)downloadQueueDownloadsDidChange:(BLDownloadQueue *)arg1;

@end
