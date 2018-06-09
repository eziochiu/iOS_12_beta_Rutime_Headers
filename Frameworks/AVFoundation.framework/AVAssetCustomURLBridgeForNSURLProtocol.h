/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct OpaqueFigCustomURLHandler { } * _handler;
    NSMutableDictionary * _requestIDToDownload;
}

- (void)_cancelRequestID:(unsigned long long)arg1;
- (void)_didFinish:(id)arg1 error:(struct __CFError { }*)arg2;
- (void)_didReceiveData:(id)arg1 data:(struct __CFData { }*)arg2;
- (void)_didReceiveResponse:(id)arg1 response:(struct _CFURLResponse { }*)arg2;
- (int)_handleRequest:(struct __CFDictionary { }*)arg1 requestID:(unsigned long long)arg2;
- (bool)_willSendRequest:(id)arg1 request:(struct _CFURLRequest { }*)arg2 redirectionResponse:(struct _CFURLResponse { }*)arg3;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;

@end
