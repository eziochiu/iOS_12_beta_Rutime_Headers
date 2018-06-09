/* made by EzioChiu.
 */

@protocol MFComposeRecipientTextViewDelegate <NSObject>

@optional

- (bool)chooseSelectedSearchResultForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientTextView *)arg1 composeRecipientForAddress:(NSString *)arg2;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientTextView *)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientTextView *)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didAddRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didFinishEnteringAddress:(NSString *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didRemoveRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didReplaceRecipients:(NSArray *)arg2 withRecipients:(NSArray *)arg3;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didSelectRecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 showCorecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 showPersonCardForAtom:(MFModernComposeRecipientAtom *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 showPersonCardForRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 textDidChange:(NSString *)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(MFComposeRecipientTextView *)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(MFComposeRecipientTextView *)arg1;
- (void)composeRecipientViewRequestAddRecipient:(MFComposeRecipientTextView *)arg1;
- (void)composeRecipientViewReturnPressed:(MFComposeRecipientTextView *)arg1;
- (bool)composeRecipientViewShowingSearchResults:(MFComposeRecipientTextView *)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (bool)presentSearchResultsForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (unsigned long long)presentationOptionsForRecipient:(MFComposeRecipient *)arg1;
- (void)recipientViewDidBecomeFirstResponder:(MFComposeRecipientTextView *)arg1;
- (void)recipientViewDidResignFirstResponder:(MFComposeRecipientTextView *)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(MFComposeRecipientTextView *)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(MFComposeRecipientTextView *)arg1;

@end
