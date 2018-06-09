/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {
    NSObject<OS_dispatch_queue> * _metricsQueue;
    NSObject<OS_dispatch_queue> * _responsePingQueue;
    AMSURLSession * session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responsePingQueue;
@property (nonatomic) AMSURLSession *session;
@property (readonly) Class superclass;

+ (double)_randomDouble;

- (void).cxx_destruct;
- (bool)_URLIsTrustedFromRequest:(id)arg1 bagContract:(id)arg2;
- (void)_pingURL:(id)arg1 contract:(id)arg2;
- (void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2;
- (bool)_shouldEnableReversePushForTask:(id)arg1;
- (id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;
- (void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;
- (id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
- (id)handleResponse:(id)arg1 task:(id)arg2;
- (id)init;
- (id)metricsQueue;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (void)reportMetricsForTaskInfo:(id)arg1;
- (id)responsePingQueue;
- (id)session;
- (void)setMetricsQueue:(id)arg1;
- (void)setResponsePingQueue:(id)arg1;
- (void)setSession:(id)arg1;

@end
