/* made by EzioChiu.
 */

@protocol PHAssetRepresentationDownloadOperationDelegate <NSObject>

@required

- (void)downloadOperation:(PHAssetRepresentationDownloadOperation *)arg1 didProgess:(double)arg2;
- (void)downloadOperationDidFinish:(PHAssetRepresentationDownloadOperation *)arg1;
- (void)downloadOperationDidStart:(PHAssetRepresentationDownloadOperation *)arg1;

@end
