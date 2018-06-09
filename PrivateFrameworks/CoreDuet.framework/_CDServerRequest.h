/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    NSHTTPURLResponse * _httpResponse;
    NSMutableURLRequest * _request;
    NSMutableData * _responseData;
    id /* block */  _responseHandler;
    NSURLSession * _session;
    NSOperationQueue * _sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSHTTPURLResponse *httpResponse;
@property (retain) NSMutableURLRequest *request;
@property (retain) NSMutableData *responseData;
@property (copy) id /* block */ responseHandler;
@property (retain) NSURLSession *session;
@property (retain) NSOperationQueue *sessionQueue;
@property (readonly) Class superclass;

+ (void)addHTTPIfModifiedSinceToHeaders:(id)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)_newDefaultSession;
- (id)_requestForMethod:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 headers:(id)arg4 body:(id)arg5 timeoutInterval:(double)arg6;
- (id)description;
- (id)httpResponse;
- (id)init;
- (id)request;
- (id)responseData;
- (id /* block */)responseHandler;
- (id)session;
- (id)sessionQueue;
- (void)setHttpResponse:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionQueue:(id)arg1;
- (id)startDataTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(id /* block */)arg4;
- (id)startDownloadTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(id /* block */)arg4;

@end
