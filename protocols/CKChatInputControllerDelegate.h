/* made by EzioChiu.
 */

@protocol CKChatInputControllerDelegate <NSObject>

@required

- (void)chatInputControllerDidDismissCompactBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidDismissModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidPresentModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidSelectFunCamera:(CKChatInputController *)arg1;
- (void)chatInputControllerDidShowHandwriting:(CKChatInputController *)arg1;
- (void)chatInputControllerDidTransitionCollapsed:(CKChatInputController *)arg1;
- (void)chatInputControllerDidTransitionExpanded:(CKChatInputController *)arg1;
- (void)chatInputControllerRequestInputViewFocusFromFullscreen:(CKChatInputController *)arg1;
- (void)chatInputControllerWillDismissCompactBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillDismissModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillHideHandwriting:(CKChatInputController *)arg1;
- (void)chatInputControllerWillPresentModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillSelectFunCamera:(CKChatInputController *)arg1;
- (void)chatInputControllerWillTransitionCollapsed:(CKChatInputController *)arg1;
- (void)chatInputControllerWillTransitionExpanded:(CKChatInputController *)arg1;
- (void)chatInputDidChangeSize;
- (void)chatInputDidSelectPhotoPicker;
- (void)chatInputDidUpdateInputViewShowingBrowser:(bool)arg1 entryFieldCollapsed:(bool)arg2 animated:(bool)arg3;
- (void)chatInputDidUpdateWithNewInputViewController:(UIInputViewController *)arg1;
- (void)chatInputSentComposition:(CKComposition *)arg1;
- (void)chatInputWillChangeHeightForCompactPresentation:(double)arg1;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (<CKBrowserDragControllerTranscriptDelegate> *)dragControllerTranscriptDelegate;
- (bool)keyboardIsVisibleForChatInputController:(CKChatInputController *)arg1;
- (void)sendCurrentLocation;
- (void)sendSticker:(IMSticker *)arg1;
- (void)sendSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)setLocalUserIsComposing:(bool)arg1 withPluginBundleID:(NSString *)arg2 typingIndicatorData:(NSData *)arg3;
- (UIViewController *)viewControllerForChatInputModalPresentation;
- (UIView *)viewForDragAndChatInputDropTarget;

@end
