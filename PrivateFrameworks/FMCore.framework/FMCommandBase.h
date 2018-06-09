/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMCommandBase : NSOperation {
    bool  _commandTaskComplete;
    NSURLConnection * _connection;
    NSError * _error;
    NSString * _host;
    NSString * _originalHostname;
    NSString * _password;
    NSNumber * _port;
    unsigned long long  _redirectCount;
    NSString * _redirectedHostname;
    NSURLRequest * _request;
    NSHTTPURLResponse * _response;
    NSData * _responseData;
    NSString * _scheme;
    FMServerInteractionController * _serverInteractionController;
    NSURLSessionDataTask * _task;
    double  _timeout;
    NSString * _username;
}

@property (nonatomic) bool commandTaskComplete;
@property (nonatomic, retain) NSURLConnection *connection;
@property (copy) NSError *error;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, copy) NSString *originalHostname;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSNumber *port;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic, copy) NSString *redirectedHostname;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic, retain) NSHTTPURLResponse *response;
@property (nonatomic, retain) NSData *responseData;
@property (nonatomic, copy) NSString *scheme;
@property (nonatomic) FMServerInteractionController *serverInteractionController;
@property (nonatomic, retain) NSURLSessionDataTask *task;
@property (nonatomic) double timeout;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (void)_dataTaskCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)authHeaders;
- (id)body;
- (void)cancel;
- (bool)commandTaskComplete;
- (id)connection;
- (id)error;
- (void)finishWithError:(id)arg1;
- (void)generateFakeResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)headers;
- (id)host;
- (id)init;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isTransactionCompleteWithError:(id)arg1;
- (id)method;
- (id)originalHostname;
- (id)password;
- (id)path;
- (id)port;
- (unsigned long long)redirectCount;
- (id)redirectedHostname;
- (id)request;
- (id)response;
- (id)responseData;
- (id)scheme;
- (void)sendRequest;
- (id)serverInteractionController;
- (void)setCommandTaskComplete:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setOriginalHostname:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setRedirectedHostname:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setServerInteractionController:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUsername:(id)arg1;
- (void)start;
- (id)task;
- (double)timeout;
- (id)username;
- (id)valueForResponseHTTPHeader:(id)arg1;
- (bool)wasRedirected;
- (bool)wasSuccessful;

@end
