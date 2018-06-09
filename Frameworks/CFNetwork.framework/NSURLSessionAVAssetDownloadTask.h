/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {
    unsigned long long  _AVAssetDownloadToken;
    NSURL * _URL;
    NSURL * _destinationURL;
}

@property (readonly) unsigned long long AVAssetDownloadToken;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *destinationURL;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (void)dealloc;
- (id)destinationURL;

@end
