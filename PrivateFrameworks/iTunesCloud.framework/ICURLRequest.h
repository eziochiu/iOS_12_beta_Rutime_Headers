/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLRequest : NSObject <NSProgressReporting> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _avDownloadOptions;
    bool  _cancelOnHTTPErrors;
    id /* block */  _completionHandler;
    NSURLRequest * _currentURLRequest;
    NSError * _error;
    bool  _extendedCertificateValidationRequired;
    long long  _handlingType;
    double  _lastProgressUpdateTime;
    double  _lastUpdateTime;
    unsigned long long  _maxRetryCount;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableArray * _observers;
    bool  _prioritize;
    NSProgress * _progress;
    unsigned long long  _redirectCount;
    ICRequestContext * _requestContext;
    long long  _requestState;
    NSMutableData * _responseData;
    NSURL * _responseDataURL;
    NSData * _resumeData;
    unsigned long long  _retryCount;
    double  _retryDelay;
    NSURLSessionTask * _task;
    long long  _type;
    NSURLRequest * _urlRequest;
    NSURLResponse * _urlResponse;
    NSObject<OS_dispatch_semaphore> * _waitSemaphore;
}

@property (nonatomic, retain) NSDictionary *avDownloadOptions;
@property (nonatomic) bool cancelOnHTTPErrors;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSURLRequest *currentURLRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (getter=isExtendedCertificateValidationRequired, nonatomic) bool extendedCertificateValidationRequired;
@property (nonatomic) long long handlingType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastProgressUpdateTime;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) bool prioritize;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic, readonly, copy) ICRequestContext *requestContext;
@property (nonatomic) long long requestState;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURL *responseDataURL;
@property (nonatomic, readonly, copy) NSData *resumeData;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double retryDelay;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionTask *task;
@property (nonatomic) long long type;
@property (nonatomic, readonly) NSURLRequest *urlRequest;
@property (nonatomic, retain) NSURLResponse *urlResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *waitSemaphore;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)avDownloadOptions;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)arg1;
- (bool)cancelOnHTTPErrors;
- (id /* block */)completionHandler;
- (id)currentURLRequest;
- (void)dealloc;
- (id)description;
- (id)error;
- (long long)handlingType;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (bool)isExtendedCertificateValidationRequired;
- (double)lastProgressUpdateTime;
- (double)lastUpdateTime;
- (unsigned long long)maxRetryCount;
- (bool)prioritize;
- (id)progress;
- (unsigned long long)redirectCount;
- (void)removeObserver:(id)arg1;
- (id)requestContext;
- (long long)requestState;
- (id)responseData;
- (id)responseDataURL;
- (id)resumeData;
- (unsigned long long)retryCount;
- (double)retryDelay;
- (void)setAvDownloadOptions:(id)arg1;
- (void)setCancelOnHTTPErrors:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentURLRequest:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExtendedCertificateValidationRequired:(bool)arg1;
- (void)setHandlingType:(long long)arg1;
- (void)setLastProgressUpdateTime:(double)arg1;
- (void)setLastUpdateTime:(double)arg1;
- (void)setMaxRetryCount:(unsigned long long)arg1;
- (void)setPrioritize:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setRequestState:(long long)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseDataURL:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setRetryDelay:(double)arg1;
- (void)setTask:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrlResponse:(id)arg1;
- (void)setWaitSemaphore:(id)arg1;
- (id)task;
- (long long)type;
- (void)updateState:(long long)arg1;
- (id)urlRequest;
- (id)urlResponse;
- (id)waitSemaphore;

@end
