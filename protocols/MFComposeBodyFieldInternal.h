/* made by EzioChiu.
 */

@protocol MFComposeBodyFieldInternal <MFComposeBodyField>

@required

- (void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_didTapInsertPhotoInputAssistantButton:(id)arg1;
- (void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (UIBarButtonItemGroup *)_inputAssistantItemGroup;
- (UIBarButtonItemGroup *)_mailComposeEditingInputAssistantGroup;
- (void)_pasteAsQuotationKeyCommandInvoked:(id)arg1;
- (void)_removeInlineAttachment:(MFAttachment *)arg1;
- (void)_setInputAssistantItemGroup:(UIBarButtonItemGroup *)arg1;

@end
