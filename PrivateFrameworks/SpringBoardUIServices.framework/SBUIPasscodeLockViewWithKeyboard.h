/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {
    SBUIAlphanumericPasscodeEntryField * _alphaEntryField;
    UIControl * _emergencyCallButton;
    bool  _isResigningResponderStatus;
    SBPasscodeKeyboardAnimator * _keyboardAnimator;
    double  _keyboardHeightOffset;
    UIView * _keyboardTrackingView;
    bool  _keyboardTracksLockView;
    bool  _keyboardVisible;
    UILabel * _statusField;
    UIView * _statusFieldBackground;
    UILabel * _statusSubtitleView;
    bool  _usesLightStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *statusField;
@property (nonatomic, retain) UILabel *statusSubtitleView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acceptOrCancelReturnKeyPress;
- (id)_alphanumericPasscodeEntryField;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidRequestDismissalNotification:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keyboardFrameForInterfaceOrientation:(long long)arg1;
- (double)_keyboardToEntryFieldOffset;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (double)_largeTextEmergencyButtonMaxWidth;
- (void)_layoutForMinimizationState:(bool)arg1;
- (void)_layoutStatusView;
- (void)_luminanceBoostDidChange;
- (id)_newStatusField;
- (id)_newStatusSubtitleView;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_setKeyboardTracksLockView:(bool)arg1;
- (double)_statusFieldHeightWithWidth:(double)arg1;
- (id)_statusSubtitleView;
- (id)_statusTitleView;
- (double)_statusTitleWidth;
- (void)_toggleForEmergencyCall;
- (void)_toggleForStatusField;
- (void)_updateFont;
- (void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)arg1;
- (id)_viewForKeyboardTracking;
- (void)becomeActiveWithAnimationSettings:(id)arg1;
- (bool)becomeFirstResponder;
- (void)beginTransitionToState:(long long)arg1;
- (void)dealloc;
- (void)didEndTransitionToState:(long long)arg1;
- (id)initWithLightStyle:(bool)arg1;
- (void)layoutSubviews;
- (id)passcode;
- (bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (bool)passcodeEntryFieldShouldShowSystemKeyboard:(id)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (void)resignActiveWithAnimationSettings:(id)arg1;
- (bool)resignFirstResponder;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setShowsStatusField:(bool)arg1;
- (void)setStatusField:(id)arg1;
- (void)setStatusSubtitleView:(id)arg1;
- (id)statusField;
- (id)statusSubtitleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForTransitionToPasscodeView:(bool)arg1 animated:(bool)arg2;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;

@end
