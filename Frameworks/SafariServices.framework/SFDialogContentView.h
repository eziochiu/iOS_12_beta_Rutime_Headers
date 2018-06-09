/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFDialogContentView : UIView <UITextFieldDelegate> {
    NSArray * _actionButtons;
    UIStackView * _actionButtonsView;
    unsigned long long  _actionIndexTriggeredByEscapeKey;
    unsigned long long  _actionIndexTriggeredByReturnKey;
    NSArray * _actions;
    _SFDialogView * _dialogView;
    bool  _hasAttemptedHardwareKeyboardFocus;
    SFDialogTextField * _inputTextField;
    NSArray * _layoutConstraintsWhenInputAndPasswordAreVisible;
    NSArray * _layoutConstraintsWhenInputIsVisible;
    NSArray * _layoutConstraintsWhenPasswordIsVisible;
    SFDialogTextView * _messageTextView;
    SFDialogTextField * _passwordTextField;
}

@property (nonatomic, copy) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) _SFDialogView *dialogView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_actionTriggered:(id)arg1;
- (void)_escapeAction:(id)arg1;
- (void)_focusInputTextField:(id)arg1;
- (void)_invokeDelegateWithSelectedIndex:(unsigned long long)arg1;
- (void)_returnAction:(id)arg1;
- (void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3;
- (void)_updateActionButtons;
- (bool)_usesLoginFormAppearance;
- (id)actions;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)dialogView;
- (void)didAppear;
- (void)endEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyCommands;
- (void)layoutSubviews;
- (void)setActions:(id)arg1;
- (void)setDialogView:(id)arg1;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setMessageText:(id)arg1;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setTitleText:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
