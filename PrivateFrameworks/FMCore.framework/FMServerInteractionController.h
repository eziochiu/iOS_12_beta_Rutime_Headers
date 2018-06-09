/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate> {
    NSOperationQueue * _queue;
    NSURLSession * _session;
    NSURLSessionConfiguration * _sessionConfiguration;
    NSObject<OS_dispatch_queue> * dq_inFlightCommands;
    NSMutableSet * inFlightCommands;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, retain) NSURLSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (double)_simulatedLatency;
- (void)cancelAllCommands;
- (void)cancelCommand:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)networkActivityStatus:(bool)arg1;
- (void)processResponseForCommand:(id)arg1 callback:(id /* block */)arg2;
- (id)queue;
- (void)sendCommand:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)session;
- (id)sessionConfiguration;
- (void)setQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;

@end
