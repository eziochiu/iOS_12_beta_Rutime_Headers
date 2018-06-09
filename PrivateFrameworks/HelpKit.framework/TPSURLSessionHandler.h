/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface TPSURLSessionHandler : NSObject <TPSURLSessionDelegate, TPSURLSessionManagerDelegate> {
    NSIndexSet * _excludeCachingDataTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSIndexSet *excludeCachingDataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setRootViewController:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSessionManagerRequestCompleted:(id)arg1 sessionTask:(id)arg2;
- (void)URLSessionManagerRequestResumed:(id)arg1 sessionTask:(id)arg2;
- (id)URLSessionManagerSessionConfiguration:(id)arg1;
- (id)URLSessionManagerSessionOperationQueue:(id)arg1;
- (bool)URLSessionManagerShouldCoalesceRequest:(id)arg1;
- (id)cacheControllerForDataType:(long long)arg1;
- (void)didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)excludeCachingDataTypes;
- (id)init;
- (bool)respectCachingForRequest:(id)arg1;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)sessionTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)sessionTask:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sessionTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setExcludeCachingDataTypes:(id)arg1;
- (bool)shouldCacheToDiskForSessionTask:(id)arg1;

@end
