/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate> {
    SiriUIAudioRoutePickerButton * _audioRoutePickerButton;
    <SiriUIKeyboardViewDelegate> * _delegate;
    SiriUIHelpButton * _helpButton;
    double  _interKeyboardAccessoryViewPadding;
    NSArray * _originalInstalledLanguageIdentifiers;
    SiriUIContentButton * _reportBugButton;
    UITextField * _textField;
    double  _verticalCompensation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIKeyboardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;

+ (double)_keyboardAccessoryViewHeight;
+ (double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(bool)arg1;
+ (id)_textFieldFont;
+ (double)_textFieldHeight;
+ (double)heightForWidthSizeClass:(bool)arg1;
+ (id)inputAccessoryViewBackgroundColor;

- (void).cxx_destruct;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)_configureAudioRoutePickerForAccessibility;
- (void)_configureReportBugButton;
- (void)_configureReportButtonForAccessibility;
- (id)_createHelpButton:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1;
- (id)_createTextFieldWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFrame;
- (void)_helpButtonLongPressed:(id)arg1;
- (void)_helpButtonTapped:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)arg1;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (bool)_showsReportBugButton;
- (void)_undoTextFieldEdit:(id)arg1;
- (double)_visibleHeightFromNotification:(id)arg1;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputViewStyle:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (void)setAudioRoutePickerBluetoothOn:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowAudioRoutePicker:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
