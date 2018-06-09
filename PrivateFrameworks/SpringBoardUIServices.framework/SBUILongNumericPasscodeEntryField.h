/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    bool  _firstResponder;
    SBUIButton * _okButton;
    UILabel * _promptLabel;
    bool  _showsOkButton;
    bool  _showsPromptLabel;
    UIView * _springView;
    UIView * _springViewParent;
}

@property (nonatomic, readonly) UIButton *okButton;
@property (nonatomic, readonly) UILabel *promptLabel;
@property (nonatomic) bool showsOkButton;
@property (nonatomic) bool showsPromptLabel;

+ (bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+ (bool)_usesTextFieldForFirstResponder;

- (void).cxx_destruct;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)arg1;
- (void)_getPasscodeFieldSize:(struct CGSize { double x1; double x2; }*)arg1 okButtonSize:(struct CGSize { double x1; double x2; }*)arg2;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_okButtonHit;
- (void)_resetForFailedPasscode:(bool)arg1;
- (struct CGSize { double x1; double x2; })_viewSize;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (bool)isFirstResponder;
- (void)layoutSubviews;
- (id)okButton;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)promptLabel;
- (bool)resignFirstResponder;
- (void)setShowsOkButton:(bool)arg1;
- (void)setShowsPromptLabel:(bool)arg1;
- (bool)showsOkButton;
- (bool)showsPromptLabel;
- (bool)textFieldShouldBeginEditing:(id)arg1;

@end
