/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceRepairService : NSObject {
    ACAccountStore * _accountStore;
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    HMDeviceSetupOperationHandler * _homeKitSetupHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    unsigned int  _invalidateFlags;
    unsigned long long  _problemFlags;
    id /* block */  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
    struct __WiFiManagerClient { } * _wifiManager;
    SFDeviceOperationHandlerWiFiSetup * _wifiSetupHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long problemFlags;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 companionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(id /* block */)arg5;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 password:(id)arg3 completion:(id /* block */)arg4;
- (void)_authenticateWithServiceType:(unsigned long long)arg1 authResults:(id)arg2 completion:(id /* block */)arg3;
- (void)_authenticateWithServiceTypes:(id)arg1 authResults:(id)arg2 completion:(id /* block */)arg3;
- (void)_authenticateiCloudWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_authenticateiTunesWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleGetProblemsRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleTRCompanionAuthenticationRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleTRProxyAuthenticationRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleTRProxyDeviceRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_invalidate;
- (long long)_nextServiceTypeForTRAccountServices:(id)arg1;
- (unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)arg1;
- (void)_saveAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_sfServiceStart;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (unsigned long long)problemFlags;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProblemFlags:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
