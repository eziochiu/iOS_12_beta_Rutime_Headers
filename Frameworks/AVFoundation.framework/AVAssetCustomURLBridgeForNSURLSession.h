/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct OpaqueFigCustomURLHandler { } * _handler;
    NSURLSession * _session;
    NSMutableDictionary * _taskToRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (int)_cancelRequestID:(unsigned long long)arg1;
- (int)_handleRequest:(struct __CFDictionary { }*)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(bool*)arg3;
- (id)_lookupRequestForDataTask:(id)arg1;
- (void)_registerRequest:(struct __CFDictionary { }*)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3;
- (void)_unregisterRequestForDataTask:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (id)session;
- (void)setSession:(id)arg1;

@end
