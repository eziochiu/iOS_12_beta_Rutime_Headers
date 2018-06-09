/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface ResourceLoader : NSObject <NSURLSessionDelegate> {
    NSOperationQueue * _queue;
    NSURLSession * _session;
    NSURLCache * _urlCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLCache *urlCache;

+ (id)_localDateFormatter;
+ (id)_rfc1123DateFormatter;

- (void).cxx_destruct;
- (double)_simulatedLatency;
- (void)asynchronousDataFromURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)flushCache;
- (id)init;
- (id)queue;
- (void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)session;
- (void)setQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setUrlCache:(id)arg1;
- (id)urlCache;

@end
