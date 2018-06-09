/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
    _UIWebFormDelegateEditedFormsMap * _editedForms;
    UIWebBrowserView * _webBrowserView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_clearEditedFormsInFrame:(id)arg1;
- (void)_didEditFormElement:(id)arg1 inFrame:(id)arg2;
- (bool)_shouldIgnoreFormTextChangesInFrame:(id)arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)dataSourceHasChangedForFrame:(id)arg1;
- (void)dealloc;
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
- (bool)formWasEdited;
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
- (bool)hasCurrentSuggestions;
- (id)initWithWebBrowserView:(id)arg1;
- (struct { id x1; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
- (bool)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
- (void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;

@end
