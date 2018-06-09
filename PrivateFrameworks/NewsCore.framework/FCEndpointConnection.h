/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndpointConnection : NSObject <FCCoreConfigurationObserving, NSURLSessionDelegate> {
    NSURL * _baseURL;
    <FCCoreConfigurationManager> * _configurationManager;
    FCAsyncSerialQueue * _requestSerialQueue;
    NSURLSession * _session;
}

@property (copy) NSURL *baseURL;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCAsyncSerialQueue *requestSerialQueue;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)_errorByUpdatingRetryStatusForError:(id)arg1;
+ (id)_errorForStatus:(long long)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)baseURL;
- (id)configurationManager;
- (id)initWithConfigurationManager:(id)arg1;
- (id)initWithConfigurationManager:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(bool)arg6 callbackQueue:(id)arg7 completion:(id /* block */)arg8;
- (void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(bool)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
- (id)requestSerialQueue;
- (id)session;
- (void)setBaseURL:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setRequestSerialQueue:(id)arg1;
- (void)setSession:(id)arg1;

@end