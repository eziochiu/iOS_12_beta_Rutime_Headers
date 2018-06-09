/* made by EzioChiu.
 */

@protocol UITextInputAdditions

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRect;
- (void)beginSelectionChange;
- (void)endSelectionChange;
- (UITextInteractionAssistant *)interactionAssistant;
- (bool)isEditable;
- (bool)isEditing;
- (UIView *)textInputView;

@optional

- (bool)_allowAnimatedUpdateSelectionRectViews;
- (UIView *)_textInputViewForAddingGestureRecognizers;
- (bool)_useGesturesForEditableContent;
- (<UISelectionInteractionAssistant> *)selectionInteractionAssistant;

@end