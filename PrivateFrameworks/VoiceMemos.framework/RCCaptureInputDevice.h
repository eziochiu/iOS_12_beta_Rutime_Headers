/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCaptureInputDevice : NSObject <RCCaptureSessionObserver> {
    NSString * _activeInputRouteName;
    _RCCaptureInputDeviceSession * _activeInputSession;
    RCAudioSessionRoutingController * _audioRouteController;
    bool  _inputAvailable;
    _RCCaptureInputDeviceSession * _pendingInputSession;
    _RCCaptureInputDeviceSession * _preparingInputSession;
}

@property (nonatomic, readonly) RCCaptureSession *activeCaptureSession;
@property (nonatomic, readonly) NSString *activeInputRouteName;
@property (nonatomic, retain) _RCCaptureInputDeviceSession *activeInputSession;
@property (nonatomic, readonly) RCAudioSessionRoutingController *audioRouteController;
@property (nonatomic, readonly) bool canExitApplication;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInputAvailable, nonatomic, readonly) bool inputAvailable;
@property (nonatomic, retain) _RCCaptureInputDeviceSession *pendingInputSession;
@property (getter=isPhoneCallRouteActive, nonatomic, readonly) bool phoneCallRouteActive;
@property (nonatomic, retain) _RCCaptureInputDeviceSession *preparingInputSession;
@property (readonly) Class superclass;

+ (id)sharedCaptureDevice;

- (void).cxx_destruct;
- (id)_activeOrPreparingCaptureSession;
- (void)_availableRoutesMaskDidChangeNotification:(id)arg1;
- (void)_beginPendingSession;
- (void)_captureDeviceWasConnectedNotification:(id)arg1;
- (void)_captureDeviceWasDisconnectedNotification:(id)arg1;
- (void)_handleDidEndCaptureSession:(id)arg1 success:(bool)arg2;
- (id)_init;
- (id)_inputSessionForCaptureSession:(id)arg1;
- (void)_pickedRouteDidChangeNotification:(id)arg1;
- (bool)_removeInputSessionForCaptureSession:(id)arg1 attemptToBeginPending:(bool)arg2;
- (void)_setPendingCaptureSession:(id)arg1 useStartSoundEffect:(bool)arg2 sessionPreparedBlock:(id /* block */)arg3;
- (void)_updateInputAvailabilityAndPostNotification:(bool)arg1;
- (void)_updateSelectedRouteAndPostNotification:(bool)arg1;
- (id)activeCaptureSession;
- (id)activeInputRouteName;
- (id)activeInputSession;
- (id)audioRouteController;
- (void)beginRecordingWithCaptureWaveformDataSource:(id)arg1 useStartSoundEffect:(bool)arg2 sessionPreparedBlock:(id /* block */)arg3 sessionFinishedBlock:(id /* block */)arg4;
- (bool)canExitApplication;
- (void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2;
- (void)captureSession:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2;
- (void)fetchActiveInputRouteWithCompletionHandler:(id /* block */)arg1;
- (void)finishRecordingWithSession:(id)arg1 sessionFinishedBlock:(id /* block */)arg2;
- (id)init;
- (bool)isInputAvailable;
- (bool)isPhoneCallRouteActive;
- (id)pendingInputSession;
- (id)preparingInputSession;
- (void)setActiveInputSession:(id)arg1;
- (void)setPendingInputSession:(id)arg1;
- (void)setPreparingInputSession:(id)arg1;

@end
