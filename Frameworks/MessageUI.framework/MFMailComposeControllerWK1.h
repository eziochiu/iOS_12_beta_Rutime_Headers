/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeControllerWK1 : MFMailComposeController

- (id)_allocateComposeView;
- (void)_beginBlockingBodyScroll;
- (unsigned long long)_bodyFieldTextContentLength;
- (void)_bodyTextChanged:(id)arg1;
- (id)_composeBodyField;
- (id)_copyMessageDataForActivityHandoff;
- (id)_copyMessagePlainTextForDonation;
- (id)_createSignatureController;
- (void)_endBlockingBodyScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_optimalRectForPresentingPopoverInBodyField;
- (void)_placeCaretAtStartOfBodyField;
- (id)_selectedAttachmentURLs;
- (void)_setBodyFieldAutocorrectionContext:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)setIsModal:(bool)arg1;

@end
