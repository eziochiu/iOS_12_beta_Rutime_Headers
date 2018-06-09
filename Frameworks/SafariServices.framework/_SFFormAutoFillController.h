/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFormAutoFillController : NSObject <SFFormMetadataObserver, _SFAuthenticationClient, _SFAutoFillInputViewDelegate> {
    _SFAutoFillInputView * _autoFillInputView;
    <SFFormAutoFiller> * _autoFiller;
    <SFFormAutoFillControllerDelegate> * _delegate;
    SFFormAutoFillFrameHandle * _frameHandleForAutomaticPasswords;
    _SFFormAutoFillInputSession * _inputSessionForAutomaticPasswords;
    bool  _isCurrentlyAuthenticating;
    bool  _metadataCorrectionsEnabled;
    NSTimer * _prefillTimer;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    SFFormAutocompleteState * _state;
    NSString * _uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
    NSMutableSet * _uniqueIDsOfControlsThatWereAutoFilled;
    NSMutableIndexSet * _uniqueIDsOfFormsThatWereAutoFilled;
    NSArray * _uniqueIDsOfPasswordElementsForAutomaticPasswords;
    WKWebView<WBUFormAutoFillWebView> * _webView;
}

@property (nonatomic, readonly) _SFAutoFillAuthenticationCache *authenticationCache;
@property (nonatomic, readonly) _SFAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool metadataCorrectionsEnabled;
@property (nonatomic, readonly) WBSOneTimeCodeMonitor *oneTimeCodeMonitor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<WBUFormAutoFillWebView> *webView;

- (void).cxx_destruct;
- (void)_addUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 onPageLoad:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_autoFillLoginFormSynchronouslyAndClearMetadata:(id)arg1 inFrame:(id)arg2;
- (id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ignorePreviousDecision:(bool)arg3;
- (void)_didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)_didFocusSensitiveFormField;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_fieldFocusedWithInputSession:(id)arg1;
- (void)_prefillTimerFired:(id)arg1;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)authenticateForAutoFillOnPageLoad:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)authenticationCache;
- (id)authenticationContext;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (void)autoFill;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 andFocusField:(id)arg4;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(id)arg5;
- (void)autoFillInputViewDidSelectMorePasswords:(id)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(id)arg1;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (id)automaticPasswordForPasswordField:(id)arg1 inForm:(id)arg2 isFrame:(id)arg3;
- (void)automaticPasswordSheetDismissed;
- (id)beginAutomaticPasswordInteractionWithInputSession:(id)arg1;
- (void)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2;
- (void)dealloc;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;
- (bool)displayMessageAsTitleForContext:(id)arg1;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fieldDidFocusWithInputSession:(id)arg1;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)fieldWillFocusWithInputSession:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)insertTextSuggestion:(id)arg1;
- (void)invalidate;
- (bool)metadataCorrectionsEnabled;
- (id)oneTimeCodeMonitor;
- (id)passcodePromptForContext:(id)arg1;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)prefillFormsSoonIfNeeded;
- (void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg1;
- (void)removeAutomaticPasswordButtonInitiatedByUser:(bool)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)setMetadataCorrectionsEnabled:(bool)arg1;
- (bool)shouldShowIconsInPasswordPicker;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)updateAutoFillSuggestionsIfNecessary;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (id)webView;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(bool)arg3;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(id /* block */)arg3;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id /* block */)arg3;

@end
