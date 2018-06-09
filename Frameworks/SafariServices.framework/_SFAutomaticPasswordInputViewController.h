/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing> {
    long long  _currentInterfaceOrientation;
    NSLayoutConstraint * _heightConstraint;
    SFAutomaticPasswordInputView * _inputView;
    long long  _keyboardType;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeKeyboardSize;
    NSString * _password;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitKeyboardSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_currentKeyboardSize;
- (bool)_inputViewControllerShouldDirectlyInsertPassword;
- (void)_postButtonPressedNotificationForButton:(long long)arg1;
- (void)_updateKeyboardHeight;
- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
- (id)initWithPassword:(id)arg1 keyboardType:(long long)arg2;
- (void)inputViewControllerDidSelectUseCustomPassword:(id)arg1;
- (void)inputViewControllerDidSelectUseStrongPassword:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForInputView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
