/* made by EzioChiu.
 */

@protocol VUIMediaEntityAssetController <NSObject>

@required

- (void)cancelDownload;
- (NSObject<OS_dispatch_queue> *)completionDispatchQueue;
- (<VUIMediaEntityAssetControllerDelegate> *)delegate;
- (double)downloadProgress;
- (void)invalidate;
- (bool)isDownloadInProgress;
- (NSObject<VUIMediaEntityIdentifier> *)mediaEntityIdentifier;
- (VUIMediaEntityType *)mediaEntityType;
- (void)pauseDownload;
- (void)removeDownloadWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resumeDownload;
- (void)setCompletionDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setDelegate:(id <VUIMediaEntityAssetControllerDelegate>)arg1;
- (void)startDownloadWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (unsigned long long)state;
- (bool)supportsCancellation;
- (bool)supportsPausing;
- (bool)supportsStartingDownload;

@end
