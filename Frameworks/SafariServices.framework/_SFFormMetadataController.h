/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFormMetadataController : WBSFormMetadataController <WKWebProcessPlugInFormDelegatePrivate> {
    NSDictionary * _assistedNodeMetadata;
    bool  _autoFillInProgress;
    bool  _focusingFormForStreamlinedLogin;
    <SFFormMetadataObserver> * _observer;
    _SFWebProcessPlugInPageController * _pageController;
    WKWebProcessPlugInScriptWorld * _scriptWorld;
    bool  _shouldListenForFormChanges;
    WBSFormMetadata * _unsubmittedForm;
    WKWebProcessPlugInFrame * _unsubmittedFormFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebProcessPlugInScriptWorld *scriptWorld;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assistedNodeMetadataWithPasswordField:(id)arg1 passwordFieldMetadata:(id)arg2 formMetadata:(id)arg3 inFrame:(id)arg4;
- (bool)_formContainsAutoFilledElements:(id)arg1;
- (id)_observer;
- (void)_webProcessPlugInBrowserContextController:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3 initiatedByUserTyping:(bool)arg4;
- (id)_webProcessPlugInBrowserContextController:(id)arg1 willBeginInputSessionForElement:(id)arg2 inFrame:(id)arg3 userIsInteracting:(bool)arg4;
- (void)_webProcessPlugInBrowserContextController:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 targetFrame:(id)arg4 values:(id)arg5;
- (id)_webProcessPlugInBrowserContextController:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5;
- (bool)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)arg1;
- (bool)_willNavigateFrameWithUnsubmittedForm:(id)arg1 loadingWillBeDeferred:(bool)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 focusFieldAfterFilling:(bool)arg5 fieldToFocus:(id)arg6;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 selectFieldAfterFilling:(id)arg5;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)clearScriptWorld;
- (void)collectFormMetadataForPreFilling;
- (void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)collectURLsForPreFilling;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)dealloc;
- (void)didFindSearchURLTemplateString:(id)arg1 inFrame:(id)arg2 pageController:(id)arg3;
- (void)didSameDocumentNavigation:(long long)arg1 inFrame:(id)arg2;
- (bool)didStartProvisionalLoadForFrame:(id)arg1;
- (void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2;
- (void)focusFormForStreamlinedLogin:(double)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)initWithPageController:(id)arg1;
- (void)invalidate;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 blurAfterRemoval:(bool)arg4;
- (id)scriptWorld;
- (bool)shouldAttemptToClassifyFormsWithoutAPasswordFieldAsLoginForms;
- (bool)shouldIncludeNonEmptyFields;
- (void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4;

@end
