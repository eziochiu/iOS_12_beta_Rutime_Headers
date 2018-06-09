/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy> {
    _UIInputViewControllerOutput * _controllerOutput;
    _UIInputViewControllerState * _controllerState;
    <_UITextDocumentInterfaceDelegate> * _delegate;
    TIKeyboardOutput * _keyboardOutput;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (getter=_controllerOutput, nonatomic, retain) _UIInputViewControllerOutput *controllerOutput;
@property (getter=_controllerState, nonatomic, retain) _UIInputViewControllerState *controllerState;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_delegate, nonatomic) <_UITextDocumentInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentContextAfterInput;
@property (nonatomic, readonly) NSString *documentContextBeforeInput;
@property (nonatomic, readonly, copy) NSUUID *documentIdentifier;
@property (nonatomic, readonly) UITextInputMode *documentInputMode;
@property (getter=_documentState, nonatomic, readonly) TIDocumentState *documentState;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (getter=_keyboardOutput, nonatomic, readonly) TIKeyboardOutput *keyboardOutput;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (getter=_textInputTraits, nonatomic, readonly) TITextInputTraits *textInputTraits;

- (id)_controllerOutput;
- (id)_controllerState;
- (void)_createControllerOutputIfNecessary;
- (id)_delegate;
- (void)_didPerformOutputOperation;
- (id)_documentState;
- (void)_handleInputViewControllerState:(id)arg1;
- (id)_keyboardOutput;
- (void)_setHasDictation:(bool)arg1;
- (void)_setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(struct CGPoint { double x1; double x2; })arg3 updatePoint:(struct CGPoint { double x1; double x2; })arg4;
- (void)_setPrimaryLanguage:(id)arg1;
- (void)_setShouldAdvanceInputMode;
- (void)_setShouldDismiss;
- (id)_textInputTraits;
- (void)_willPerformOutputOperation;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (void)dealloc;
- (void)deleteBackward;
- (id)documentContextAfterInput;
- (id)documentContextBeforeInput;
- (id)documentIdentifier;
- (id)documentInputMode;
- (bool)enablesReturnKeyAutomatically;
- (bool)hasText;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (bool)needsInputModeSwitchKey;
- (long long)returnKeyType;
- (id)selectedText;
- (void)setControllerOutput:(id)arg1;
- (void)setControllerState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardingInterface:(id)arg1;
- (long long)smartDashesType;
- (long long)smartInsertDeleteType;
- (long long)smartQuotesType;
- (long long)spellCheckingType;
- (id)textContentType;

@end
