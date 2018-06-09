/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOResourceLoadOperation : NSObject <GEOResourceLoadOperation, NSURLSessionDataDelegate> {
    GEOApplicationAuditToken * _auditToken;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    NSMutableData * _data;
    bool  _expectsPartialContent;
    NSLock * _lock;
    GEOReportedProgress * _progress;
    bool  _requiresWiFi;
    NSURLSession * _session;
    NSURLSessionTask * _task;
    NSURL * _url;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic) bool requiresWiFi;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancel;
- (id)data;
- (void)dealloc;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURLString:(id)arg4;
- (id)progress;
- (bool)requiresWiFi;
- (void)setRequiresWiFi:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;

@end
