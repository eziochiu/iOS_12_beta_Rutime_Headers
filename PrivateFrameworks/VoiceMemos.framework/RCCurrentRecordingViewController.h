/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCurrentRecordingViewController : UIViewController <RCCurrentRecordingViewControllerDelegate, RCUIServiceCurrentRecordingViewController> {
    RCAVState * _AVState;
    <RCCurrentRecordingViewControllerDelegate> * _delegate;
    bool  _isDisplayingLockscreenInterface;
    UIColor * _presentationBackgroundColor;
    RCCurrentRecordingRemoteViewController * _remoteViewController;
    bool  _screenUpdatesDisabled;
    UIColor * _waveformBackgroundColor;
    UIColor * _waveformForegroundColor;
}

@property (nonatomic, retain) RCAVState *AVState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCCurrentRecordingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;

- (void).cxx_destruct;
- (id)AVState;
- (void)_failedToBecomeReadyWithMessage:(id)arg1;
- (void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2;
- (void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(bool)arg2;
- (void)currentRecordingViewControllerRecordingDidEnd:(id)arg1;
- (id)delegate;
- (void)dismissLockscreenInterface;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertRemoteViewController:(id)arg1;
- (void)loadCaptureStateWithCompletionBlock:(id /* block */)arg1;
- (void)presentLockscreenInterfaceWithBackgroundColor:(id)arg1 waveformForegroundColor:(id)arg2 waveformBackgroundColor:(id)arg3;
- (void)setAVState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScreenUpdatesDisabled:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;

@end
