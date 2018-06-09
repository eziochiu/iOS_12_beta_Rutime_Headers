/* made by EzioChiu.
 */

@protocol WebFormDelegate <NSObject>

@required

- (void)didFocusTextField:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)frame:(WebFrame *)arg1 sourceFrame:(WebFrame *)arg2 willSubmitForm:(DOMElement *)arg3 withValues:(NSDictionary *)arg4 submissionListener:(id <WebFormSubmissionListener>)arg5;
- (void)textDidChangeInTextArea:(DOMHTMLTextAreaElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textDidChangeInTextField:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (bool)textField:(DOMHTMLInputElement *)arg1 doCommandBySelector:(SEL)arg2 inFrame:(WebFrame *)arg3;
- (void)textFieldDidBeginEditing:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textFieldDidEndEditing:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)willSendSubmitEventToForm:(DOMHTMLFormElement *)arg1 inFrame:(WebFrame *)arg2 withValues:(NSDictionary *)arg3;

@end
