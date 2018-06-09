/* made by EzioChiu.
 */

@protocol NSURLSessionSubclass <NSObject>

@required

- (NSURLSessionAVAggregateAssetDownloadTask *)AVAggregateAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 mediaSelections:(NSArray *)arg2 assetTitle:(NSString *)arg3 assetArtworkData:(NSData *)arg4 options:(NSDictionary *)arg5;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 assetTitle:(NSString *)arg2 assetArtworkData:(NSData *)arg3 options:(NSDictionary *)arg4;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionAVAssetDownloadTask *)_AVAssetDownloadTaskForURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_flushWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_onqueue_getTasksWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)_onqueue_resetStorageWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSURLSessionDataTask *)dataTaskForRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSURLResponse *, NSError *, void*
- (NSURLSessionDownloadTask *)downloadTaskForRequest:(void *)arg1 downloadFilePath:(void *)arg2 resumeData:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: NSURLRequest *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSURLResponse *, NSError *, void*
- (NSURLSessionUploadTask *)uploadTaskForRequest:(void *)arg1 uploadFile:(void *)arg2 bodyData:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: NSURLRequest *, NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSURLResponse *, NSError *, void*

@end
