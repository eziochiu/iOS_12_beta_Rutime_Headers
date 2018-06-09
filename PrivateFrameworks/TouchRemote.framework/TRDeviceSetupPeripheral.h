/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupPeripheral : NSObject {
    NSString * _authenticatediTunesStoreID;
    <TRDeviceSetupPeripheralDelegate> * _delegate;
    id /* block */  _pendingSendDataHandler;
    bool  _performingSetup;
    bool  _preparingForSetup;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) NSString *authenticatediTunesStoreID;
@property (nonatomic) <TRDeviceSetupPeripheralDelegate> *delegate;
@property (copy) id /* block */ pendingSendDataHandler;

- (void).cxx_destruct;
- (void)_authenticateWithAction:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)_cancelAuthenticationWithReceivedAction:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)_cancelSetupWithAction:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)_didDisconnect;
- (void)_didReceiveData:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)_didTapWithSendDataHandler:(id /* block */)arg1;
- (void)_finishSetupWithAction:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)_legacyAuthenticateWithAction:(id)arg1 attemptCount:(unsigned long long)arg2 replyHandler:(id /* block */)arg3;
- (void)_legacyAuthenticateWithUserAgent:(id)arg1 deviceGUID:(id)arg2 accountID:(id)arg3 password:(id)arg4 attemptCount:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (bool)_sendAction:(id)arg1 sendDataHandler:(id /* block */)arg2 error:(id*)arg3;
- (void)_setUpWithAction:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)_setupDidFailWithError:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)_startAuthenticationWithReceivedAction:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)authenticatediTunesStoreID;
- (void)cancelPreparingForSetup;
- (void)cancelSetupForStateChange;
- (void)cancelSetupForTimeout;
- (id)delegate;
- (id)init;
- (id /* block */)pendingSendDataHandler;
- (bool)performSetupAndReturnError:(id*)arg1;
- (void)setAuthenticatediTunesStoreID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingSendDataHandler:(id /* block */)arg1;

@end
