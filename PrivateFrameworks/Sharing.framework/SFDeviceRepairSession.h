/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceRepairSession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _finishState;
    int  _getProblemsState;
    SFDeviceOperationHomeKitSetup * _homeKitSetupOperation;
    int  _homeKitSetupState;
    NSString * _idsIdentifier;
    bool  _invalidateCalled;
    int  _pairVerifyState;
    SFDevice * _peerDevice;
    int  _preflightWiFiState;
    UIViewController * _presentingViewController;
    unsigned long long  _problemFlags;
    id /* block */  _progressHandler;
    unsigned int  _repairFlags;
    SFSession * _sfSession;
    int  _sfSessionState;
    unsigned long long  _startTicks;
    double  _trAuthenticationSecs;
    unsigned long long  _trAuthenticationStartTicks;
    int  _trAuthenticationState;
    TROperationQueue * _trOperationQueue;
    NSMutableArray * _trOperations;
    TRSession * _trSession;
    int  _trSessionState;
    unsigned long long  _triggerMs;
    bool  _wifiSetupEnabled;
    SFDeviceOperationWiFiSetup * _wifiSetupOperation;
    double  _wifiSetupSecs;
    int  _wifiSetupState;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runFinish;
- (int)_runGetProblems;
- (int)_runHomeKitSetup;
- (int)_runPairVerify;
- (int)_runPreflightWiFi;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runWiFiSetup;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)idsIdentifier;
- (id)init;
- (void)invalidate;
- (id)peerDevice;
- (id)presentingViewController;
- (id /* block */)progressHandler;
- (unsigned int)repairFlags;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRepairFlags:(unsigned int)arg1;
- (void)setTriggerMs:(unsigned long long)arg1;
- (unsigned long long)triggerMs;

@end
