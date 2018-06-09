/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCaptureSession : NSObject <RCCaptureOutputWriterDelegate, RCWaveformDataSourceObserver> {
    SBSSecureAppAssertion * _assertion;
    unsigned long long  _backgroundTaskIdentifier;
    bool  _captureBeginSoundEffectDisabled;
    bool  _captureEndSoundEffectDisabled;
    RCCaptureOutputWriter * _captureOutputWriter;
    RCAudioSessionRoutingAssertion * _captureRouteAssertion;
    NSDate * _captureStartDate;
    RCCaptureInputWaveformDataSource * _captureWaveformDataSource;
    bool  _deleteCapturedOutWhenFinished;
    bool  _destinationShouldBeDeleted;
    NSObject<OS_dispatch_group> * _endCaptureTaskGroup;
    bool  _handledFinishedCapturingAfterCompletionSound;
    bool  _handlingDidFinishCapturing;
    RCCaptureInputDevice * _inputDevice;
    long long  _sessionCaptureState;
    NSString * _sessionRouteName;
    NSMutableOrderedSet * _weakObservers;
}

@property (nonatomic, readonly) RCAVState *AVState;
@property (nonatomic, retain) SBSSecureAppAssertion *assertion;
@property (nonatomic, readonly) double captureDestinationComposedDuration;
@property (nonatomic, readonly) RCCaptureInputWaveformDataSource *captureWaveformDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RCCaptureInputDevice *inputDevice;
@property (nonatomic, readonly) bool isCaptureSessionFinished;
@property (readonly) double storeDemoTimeLimit;
@property (readonly) Class superclass;

+ (void)playCaptureDidFinishSoundEffectWithCompletionBlock:(id /* block */)arg1;
+ (void)playCaptureWillStartSoundEffectWithCompletionBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)AVState;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (bool)_attachInputToCaptureSession:(id)arg1 withAudioDevice:(id)arg2;
- (void)_beginAVCapturingToDestinationInitiallyPaused:(bool)arg1;
- (void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1;
- (void)_captureInputDeviceRouteDidChangeNotification:(id)arg1;
- (void)_closeCaptureSession;
- (void)_deleteCaptureDestinationAndPostDidEndNotification:(id)arg1;
- (void)_enumerateCaptureSessionObserversWithBlock:(id /* block */)arg1;
- (void)_handleCaptureSessionDidError:(id)arg1;
- (bool)_handleFinishWritingByRestartingCaptureForError:(id)arg1 testOnly:(bool)arg2;
- (void)_onMainQueueHandleCaptureDidFinishCapturingAfterCompletionSound;
- (bool)_openAVCaptureSessionAndWaitUntilRunning;
- (void)_postToObserversWithBlock:(id /* block */)arg1;
- (void)_setPostPrepareRequestedState:(long long)arg1;
- (void)_takeSBSecureAppAssertion:(bool)arg1;
- (void)addCaptureSessionObserver:(id)arg1;
- (id)assertion;
- (bool)canResumeCapturingAtCompositionDestinationTime:(double)arg1;
- (double)captureDestinationComposedDuration;
- (void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (id)captureWaveformDataSource;
- (void)dealloc;
- (void)deleteCapturedOutWhenFinished;
- (id)description;
- (void)disableCaptureBeginSoundEffect;
- (void)disableCaptureEndSoundEffect;
- (void)finishCapturing;
- (id)init;
- (id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2;
- (id)inputDevice;
- (bool)isCaptureActive;
- (bool)isCapturePaused;
- (bool)isCaptureSessionFinished;
- (bool)isPreparing;
- (void)pauseCapturing;
- (void)prepareToCaptureWithPreparedHandler:(id /* block */)arg1;
- (void)removeCaptureSessionObserver:(id)arg1;
- (void)resumeCapturing;
- (void)setAssertion:(id)arg1;
- (double)storeDemoTimeLimit;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;

@end
