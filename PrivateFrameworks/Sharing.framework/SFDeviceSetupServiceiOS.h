/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceSetupServiceiOS : NSObject {
    bool  _activateCalled;
    bool  _advertiseFast;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _hidePINHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSUUID * _peer;
    bool  _pinShowing;
    SFClient * _preventExitForLocaleClient;
    id /* block */  _progressHandlerEx;
    id /* block */  _receivedObjectHandler;
    SFService * _sfService;
    bool  _sfServiceActivated;
    SFSession * _sfSession;
    id /* block */  _showPINHandler;
    id /* block */  _showPINHandlerEx;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ hidePINHandler;
@property (nonatomic, copy) id /* block */ progressHandlerEx;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ showPINHandler;
@property (nonatomic, copy) id /* block */ showPINHandlerEx;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completed:(int)arg1;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionSecured:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_invalidated;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (void)_sfServiceStart;
- (void)activate;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)hidePINHandler;
- (id)init;
- (void)invalidate;
- (id /* block */)progressHandlerEx;
- (id /* block */)receivedObjectHandler;
- (void)sendObject:(id)arg1;
- (void)sendSetupAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHidePINHandler:(id /* block */)arg1;
- (void)setProgressHandlerEx:(id /* block */)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)setShowPINHandler:(id /* block */)arg1;
- (void)setShowPINHandlerEx:(id /* block */)arg1;
- (id /* block */)showPINHandler;
- (id /* block */)showPINHandlerEx;

@end
