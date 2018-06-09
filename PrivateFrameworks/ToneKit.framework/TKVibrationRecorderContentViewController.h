/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate> {
    UIBarButtonItem * _cancelButton;
    double  _currentVibrationComponentDidStartTimeStamp;
    <TKVibrationRecorderViewControllerDelegate> * _delegate;
    NSDictionary * _indefiniteVibrationPattern;
    bool  _isWaitingForEndOfCurrentVibrationComponent;
    int  _mode;
    TKVibrationRecorderViewController * _parentVibrationRecorderViewController;
    TLVibrationPattern * _recordedVibrationPattern;
    UIBarButtonItem * _saveButton;
    UIAlertController * _vibrationNameAlertController;
    UIAlertAction * _vibrationNameAlertSaveAction;
    UITextField * _vibrationNameAlertTextField;
    TKVibrationRecorderView * _vibrationRecorderView;
    TKVibratorController * _vibratorController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TKVibrationRecorderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TKVibrationRecorderViewController *parentVibrationRecorderViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessibilityDidEnterRecordingMode;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1;
- (void)_cancelButtonInAlertTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cleanUpVibrationNameAlertController;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_finishedWithRecorder;
- (id)_indefiniteVibrationPattern;
- (void)_saveButtonInAlertTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_startVibratingWithVibrationPattern:(id)arg1;
- (void)_stopVibrating;
- (void)_storeVibrationComponentOfTypePause:(bool)arg1;
- (void)_updateStateSaveButtonInAlert;
- (void)_vibrationNameTextFieldContentsDidChange:(id)arg1;
- (void)applicationWillSuspend;
- (void)dealloc;
- (id)delegate;
- (id)initWithVibratorController:(id)arg1;
- (void)loadView;
- (id)parentVibrationRecorderViewController;
- (void)setDelegate:(id)arg1;
- (void)setParentVibrationRecorderViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (bool)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
