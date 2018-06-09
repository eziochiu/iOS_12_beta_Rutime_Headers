/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupWorkflow : NSObject {
    id /* block */  _activationStageStartedHandler;
    id /* block */  _completionHandler;
    id /* block */  _configurationStageStartedHandler;
    id /* block */  _failureHandler;
    TRNearbyDevice * _nearbyDevice;
    id /* block */  _networkStageStartedHandler;
    TROperationQueue * _operationQueue;
    UIViewController * _presentingViewController;
    TRSession * _session;
    id /* block */  _startedHandler;
    unsigned long long  _state;
    NSSet * _unauthenticatedAccountServices;
}

@property (nonatomic, copy) id /* block */ activationStageStartedHandler;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ configurationStageStartedHandler;
@property (nonatomic, copy) id /* block */ failureHandler;
@property (nonatomic, retain) TRNearbyDevice *nearbyDevice;
@property (nonatomic, copy) id /* block */ networkStageStartedHandler;
@property (nonatomic, retain) TROperationQueue *operationQueue;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (retain) TRSession *session;
@property (nonatomic, copy) id /* block */ startedHandler;
@property unsigned long long state;
@property (nonatomic, retain) NSSet *unauthenticatedAccountServices;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_abortSetupWithErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)_performActivationOperation;
- (void)_performAuthenticationOperation;
- (void)_performCompletionOperation;
- (void)_performConfigurationOperation;
- (void)_performHandshakeOperation;
- (void)_performNetworkOperation;
- (void)_releaseHandlers;
- (id /* block */)activationStageStartedHandler;
- (void)cancel;
- (id /* block */)completionHandler;
- (id /* block */)configurationStageStartedHandler;
- (id /* block */)failureHandler;
- (id)initWithNearbyDevice:(id)arg1 presentingViewController:(id)arg2;
- (id)nearbyDevice;
- (id /* block */)networkStageStartedHandler;
- (id)operationQueue;
- (id)presentingViewController;
- (id)session;
- (void)setActivationStageStartedHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConfigurationStageStartedHandler:(id /* block */)arg1;
- (void)setFailureHandler:(id /* block */)arg1;
- (void)setNearbyDevice:(id)arg1;
- (void)setNetworkStageStartedHandler:(id /* block */)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStartedHandler:(id /* block */)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnauthenticatedAccountServices:(id)arg1;
- (void)start;
- (id /* block */)startedHandler;
- (unsigned long long)state;
- (id)unauthenticatedAccountServices;

@end
