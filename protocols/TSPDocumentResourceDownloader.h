/* made by EzioChiu.
 */

@protocol TSPDocumentResourceDownloader <NSObject>

@required

- (long long)estimatedDownloadSize;
- (bool)isEstimatedDownloadSizePrecise;
- (bool)needsDownload;

@end
