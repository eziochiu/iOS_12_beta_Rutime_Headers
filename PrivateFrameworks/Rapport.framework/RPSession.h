/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPSession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    bool  _mdEnabled;
    CUMobileDeviceSession * _mdSession;
    int  _mdState;
    NSMutableArray * _messageSendQueue;
    bool  _messagingReady;
    int  _pairVerifyState;
    RPDevice * _peerDevice;
    id /* block */  _promptForPINHandler;
    bool  _secureReady;
    unsigned int  _securityFlags;
    NSString * _serviceType;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) RPDevice *peerDevice;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic) unsigned int securityFlags;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_cleanup;
- (void)_invalidate;
- (void)_invalidated;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_run;
- (int)_runMobileDeviceStart;
- (int)_runPairVerify;
- (void)_sendMessage:(id)arg1;
- (void)_sendQueuedMessages;
- (void)_unpairWithCompletion:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)pairSetupTryPIN:(id)arg1;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)peerDevice;
- (id /* block */)promptForPINHandler;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)requestSystemInfoWithCompletion:(id /* block */)arg1;
- (unsigned int)securityFlags;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)serviceType;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setSecurityFlags:(unsigned int)arg1;
- (void)setServiceType:(id)arg1;
- (void)unpairWithCompletion:(id /* block */)arg1;

@end
