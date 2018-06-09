/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface AVAssetDownloadTask : NSURLSessionTask {
    AVURLAsset * _URLAsset;
    NSURL * _destinationURL;
    NSArray * _loadedTimeRanges;
    NSDictionary * _options;
}

@property (nonatomic, readonly) AVURLAsset *URLAsset;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) NSDictionary *options;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLResponse *response;

- (id)URLAsset;
- (id)destinationURL;
- (id)loadedTimeRanges;
- (id)options;

@end
