/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSiriClient : NSObject <SVXClientSessionServiceDelegate, VSSpeechSynthesizerDelegate> {
    SFSiriRequest * _currentRequest;
    NSObject<OS_dispatch_source> * _currentTimer;
    SVXDeviceSetupFlowScene * _deviceSetupSceneDialogA;
    SVXDeviceSetupFlowScene * _deviceSetupSceneDialogB;
    SVXDeviceSetupFlowScene * _deviceSetupSceneDialogC;
    SVXDeviceSetupFlowScene * _deviceSetupSceneIntro;
    SVXDeviceSetupFlowScene * _deviceSetupSceneOutro;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    unsigned int  _invalidateFlags;
    id /* block */  _invalidationHandler;
    NSString * _languageCode;
    struct NSMutableArray { Class x1; } * _requests;
    SVXDeviceSetupContext * _siriDeviceSetupContext;
    SVXClientServiceManager * _siriDeviceSetupManager;
    <SVXClientDeviceServicing> * _siriDeviceSetupService;
    id /* block */  _siriDialogHandler;
    SVXClientServiceManager * _siriServiceManager;
    VSSpeechSynthesizer * _speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ siriDialogHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_deviceSetupEnd;
- (void)_deviceSetupPlayGreetingID:(int)arg1 completion:(id /* block */)arg2;
- (void)_deviceSetupPrepareGreetingFlow:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_deviceSetupSaveDialogATimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveDialogBTimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveDialogCTimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveIntroTimings:(id)arg1 details:(id)arg2;
- (void)_invalidate;
- (void)_processQueuedRequests;
- (void)_speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)_speakText:(id)arg1 languageCode:(id)arg2 flags:(unsigned int)arg3 rate:(double)arg4 delay:(double)arg5 startHandler:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)activate;
- (void)deviceSetupBegin:(unsigned long long)arg1;
- (void)deviceSetupEnd;
- (void)deviceSetupPlayGreetingID:(int)arg1 completion:(id /* block */)arg2;
- (void)deviceSetupPrepareGreeting:(id /* block */)arg1;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (id /* block */)invalidationHandler;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(id /* block */)arg1;
- (void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 didNotStartSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2;
- (void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
- (void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
- (void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
- (void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setSiriDialogHandler:(id /* block */)arg1;
- (id /* block */)siriDialogHandler;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(id /* block */)arg1;
- (void)speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)speakText:(id)arg1 completion:(id /* block */)arg2;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)speakText:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(id /* block */)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo2:(id)arg3;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)startDelayedRequest:(id)arg1;
- (void)stopSpeaking;

@end
