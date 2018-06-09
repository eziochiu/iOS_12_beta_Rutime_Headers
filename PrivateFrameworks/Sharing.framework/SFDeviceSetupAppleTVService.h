/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceSetupAppleTVService : NSObject {
    bool  _activateCalled;
    bool  _advertiseFast;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    HMDeviceSetupOperationHandler * _homeKitSetupHandler;
    bool  _invalidateCalled;
    SFClient * _preventExitForLocaleClient;
    id /* block */  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
    SFDeviceOperationHandlerWiFiSetup * _wifiSetupHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_handleBasicConfigRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_invalidate;
- (void)_sfServiceStart;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
