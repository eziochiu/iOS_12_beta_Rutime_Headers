/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFFormAutocompleteState : WBUFormAutoCompleteState <WBSOneTimeCodeMonitorObserver> {
    _SFFormAutoFillController * _autoFillController;
    NSArray * _cachedExternalCredentialIdentities;
    UIView * _emptyInputView;
    bool  _fetchingLoginCredentialSuggestions;
    WBSFormMetadata * _formMetadata;
    SFFormAutoFillFrameHandle * _frame;
    _SFFormAutoFillInputSession * _inputSession;
    WBSFormAutoFillMetadataCorrector * _metadataCorrector;
    NSString * _prefixForSuggestions;
    WBSFormControlMetadata * _textFieldMetadata;
    NSString * _textFieldValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _SFFormAutoFillInputSession *inputSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_autoFillOneTimeCodeFieldsWithValue:(id)arg1;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (id)_correctedFormMetadata:(id)arg1;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 pageURL:(id)arg2 completion:(id /* block */)arg3;
- (id)_matchingKeychainCredentials;
- (Class)_passwordPickerViewControllerClass;
- (void)_suggestLoginCredentialsShowingQuickTypeKey:(bool)arg1;
- (bool)_suggestUsernamesForRegistrationIfPossible:(unsigned long long)arg1;
- (id)_suggestionsForAutoFillDisplayData:(id)arg1;
- (id)_textSuggestionForCredentialDisplayData:(id)arg1;
- (void)_updateSuggestions:(unsigned long long)arg1;
- (void)_updateTextFieldValue;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFillFormWithCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(bool)arg2 andFocusFieldAfterFilling:(bool)arg3 fieldToFocus:(id)arg4;
- (void)autoFillValuesAfterAuthenticationIfNeeded:(id)arg1;
- (void)codesUpdatedForOneTimeCodeMonitor:(id)arg1;
- (void)dealloc;
- (id)externalCredentialIdentities;
- (void)fetchFormMetadataWithCompletion:(id /* block */)arg1;
- (void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(bool)arg2;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (id)frame;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;
- (id)inputSession;
- (void)invalidate;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 clearField:(id)arg3;
- (void)setPrefixForSuggestions:(id)arg1;
- (void)setShowingKeyboardInputView:(bool)arg1;
- (bool)shouldOfferActionAutoFillCredentials;
- (bool)shouldShowIconsInPasswordPicker;
- (id)suggestKeychainCredentials;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (id)textFieldValue;
- (void)updateInputSession:(id)arg1;
- (void)updateSuggestions;
- (id)webView;

@end
