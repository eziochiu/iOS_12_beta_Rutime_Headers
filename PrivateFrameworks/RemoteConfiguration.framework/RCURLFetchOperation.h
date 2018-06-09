/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCURLFetchOperation : RCOperation {
    NSData * _HTTPBody;
    NSString * _HTTPMethod;
    NSURL * _URL;
    NSDictionary * _additionalRequestHTTPHeaders;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _configurationCompletionHandler;
    NSError * _error;
    NSHTTPURLResponse * _httpResponse;
    NSString * _loggingKey;
    NSURLSessionTask * _requestTask;
    NSString * _requestUUID;
    NSData * _responseData;
    NSString * _responseMIMEType;
    unsigned long long  _responseSize;
    double  _taskStartTime;
    NSDictionary * _timingData;
    NSString * _urlString;
}

@property (nonatomic, retain) NSData *HTTPBody;
@property (nonatomic, retain) NSString *HTTPMethod;
@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ configurationCompletionHandler;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSHTTPURLResponse *httpResponse;
@property (nonatomic, copy) NSString *loggingKey;
@property (retain) NSURLSessionTask *requestTask;
@property (nonatomic, retain) NSString *requestUUID;
@property (nonatomic, retain) NSData *responseData;
@property (nonatomic, retain) NSString *responseMIMEType;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) double taskStartTime;
@property (nonatomic, retain) NSDictionary *timingData;
@property (nonatomic, retain) NSString *urlString;

+ (id)sharedURLSession;

- (void).cxx_destruct;
- (id)HTTPBody;
- (id)HTTPMethod;
- (id)URL;
- (id)additionalRequestHTTPHeaders;
- (id)completionQueue;
- (id /* block */)configurationCompletionHandler;
- (id)error;
- (id)httpResponse;
- (id)loggingKey;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)requestTask;
- (id)requestUUID;
- (void)resetForRetry;
- (id)responseData;
- (id)responseMIMEType;
- (unsigned long long)responseSize;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfigurationCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setLoggingKey:(id)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setRequestTask:(id)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseMIMEType:(id)arg1;
- (void)setResponseSize:(unsigned long long)arg1;
- (void)setTaskStartTime:(double)arg1;
- (void)setTimingData:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUrlString:(id)arg1;
- (double)taskStartTime;
- (id)timingData;
- (id)urlString;
- (bool)validateOperation;

@end
