/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUMobileDeviceSession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    CURunLoopThread * _mdRunLoopThread;
    CUMobileDevice * _peerDevice;
    id /* block */  _promptForPINHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) CUMobileDevice *peerDevice;
@property (nonatomic, copy) id /* block */ promptForPINHandler;

- (void).cxx_destruct;
- (void)_invalidated;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_unpairWithCompletion:(id /* block */)arg1;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)pairSetupTryPIN:(id)arg1;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)peerDevice;
- (id /* block */)promptForPINHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)unpairWithCompletion:(id /* block */)arg1;

@end
