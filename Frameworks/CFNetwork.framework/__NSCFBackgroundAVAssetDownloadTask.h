/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {
    unsigned long long  _AVAssetDownloadToken;
    NSURL * _URL;
    AVURLAsset * _URLAsset;
    NSData * _assetArtworkData;
    NSString * _assetTitle;
    NSURL * _destinationURL;
    unsigned long long  _downloadToken;
    NSArray * _loadedTimeRanges;
    NSDictionary * _options;
    AVMediaSelection * _resolvedMediaSelection;
    NSURL * _temporaryDestinationURL;
}

@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *URL;
@property (retain) AVURLAsset *URLAsset;
@property (copy) NSData *assetArtworkData;
@property (copy) NSString *assetTitle;
@property (copy) NSURL *destinationURL;
@property (copy) NSArray *loadedTimeRanges;
@property (copy) NSDictionary *options;
@property (copy) AVMediaSelection *resolvedMediaSelection;
@property (copy) NSURL *temporaryDestinationURL;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (id)URLAsset;
- (bool)_isAVAssetTask;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3;
- (void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1;
- (void)_onqueue_willDownloadToURL:(id)arg1;
- (id)assetArtworkData;
- (id)assetTitle;
- (id)currentRequest;
- (void)dealloc;
- (id)destinationURL;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 URLAsset:(id)arg3 URL:(id)arg4 destinationURL:(id)arg5 temporaryDestinationURL:(id)arg6 assetTitle:(id)arg7 assetArtworkData:(id)arg8 ident:(unsigned long long)arg9;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (bool)isKindOfClass:(Class)arg1;
- (id)loadedTimeRanges;
- (id)options;
- (id)originalRequest;
- (id)resolvedMediaSelection;
- (id)response;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)setAssetArtworkData:(id)arg1;
- (void)setAssetTitle:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setResolvedMediaSelection:(id)arg1;
- (void)setTemporaryDestinationURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLAsset:(id)arg1;
- (id)temporaryDestinationURL;

@end
