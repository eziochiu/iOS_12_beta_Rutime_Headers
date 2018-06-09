/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceSetupB238Service : NSObject {
    bool  _activateCalled;
    bool  _advertiseFast;
    struct NSData { Class x1; } * _apcCapData;
    APCPlayer * _apcPlayer;
    CUAudioPlayer * _audioPlayer;
    RPCompanionLinkClient * _companionLinkClient;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_source> * _finishApplyTimer;
    bool  _finishSessionEnded;
    NSObject<OS_dispatch_source> * _finishTimeoutTimer;
    bool  _finished;
    bool  _finished2;
    bool  _finishedEventSent;
    HMDeviceSetupOperationHandler * _homeKitSetupHandler;
    int  _iTunesCloudCompleteToken;
    bool  _iTunesCloudCompleted;
    double  _iTunesCloudWaitSeconds;
    bool  _invalidateCalled;
    NSString * _languageCode;
    NSString * _localeIdentifier;
    bool  _mediaSystemReady;
    double  _mediaSystemWaitSeconds;
    unsigned long long  _peerFeatureFlags;
    id /* block */  _progressHandler;
    SFClient * _sfClient;
    SFService * _sfService;
    SFSession * _sfSession;
    SFSiriClient * _siriClient;
    bool  _siriDidDeviceSetup;
    bool  _siriDisabled;
    SFSiriDeviceSetupGreetingDetails * _siriGreetingDetails;
    bool  _siriHeardWhatCanYouDo;
    NSString * _siriListenLanguage;
    long long  _siriVoiceGender;
    NSString * _siriVoiceLanguage;
    NSString * _temperatureUnit;
    int  _timeAuto;
    long long  _timeCycle;
    NSDate * _timeObj;
    NSString * _timeZone;
    int  _timeZoneAuto;
    struct __WiFiManagerClient { } * _wifiManager;
    bool  _wifiSetupEnabled;
    SFDeviceOperationHandlerWiFiSetup * _wifiSetupHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_handleAuthActionAudioPasscodeInit:(id)arg1 response:(id)arg2;
- (void)_handleAuthActionAudioPasscodeStartWithResponse:(id)arg1;
- (void)_handleAuthActionRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleAuthActionSiriInit;
- (void)_handleAuthActionSiriStart:(id)arg1 response:(id)arg2 responseHandler:(id /* block */)arg3;
- (int)_handleBasicConfigRequest:(id)arg1;
- (void)_handleBasicConfigResponse:(id)arg1;
- (void)_handleFinishApply:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleFinishDone2:(unsigned int)arg1 responseHandler:(id /* block */)arg2;
- (bool)_handleFinishDone2Ready;
- (void)_handleFinishDone:(unsigned int)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handlePlaySoundRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleRawRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleSiriDialogIdentifier:(id)arg1;
- (void)_invalidate;
- (void)_playReadyToSetupSound;
- (void)_setSiriLanguageInfo;
- (void)_setSystemName:(id)arg1 hostname:(id)arg2;
- (void)_sfServiceStart;
- (void)_siriGreetingDialogA;
- (void)_siriGreetingDialogBPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingDialogBStart;
- (void)_siriGreetingDialogCPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingDialogCStart;
- (void)_siriGreetingIntroPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingIntroStart;
- (void)_siriGreetingStart:(id /* block */)arg1;
- (void)_speakLocalizedKey:(id)arg1 event:(unsigned int)arg2;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
