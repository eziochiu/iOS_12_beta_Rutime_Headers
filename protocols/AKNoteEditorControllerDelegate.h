/* made by EzioChiu.
 */

@protocol AKNoteEditorControllerDelegate <NSObject>

@required

- (unsigned long long)edgeForNoteEditor:(AKNoteEditorController *)arg1;
- (bool)handleEditAnnotation:(AKPopupAnnotation *)arg1;
- (void)noteEditorDidBeginEditing:(AKNoteEditorController *)arg1;
- (void)noteEditorDidFinishEditing:(AKNoteEditorController *)arg1;
- (void)noteEditorWillDismissFromFullScreen:(AKNoteEditorController *)arg1;
- (void)noteEditorWillPresentFullScreen:(AKNoteEditorController *)arg1;
- (UIViewController *)popoverPresentingViewControllerForNoteEditor:(AKNoteEditorController *)arg1;
- (UIView *)stickyContainerForNoteEditor:(AKNoteEditorController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stickyViewFrameForNoteEditor:(AKNoteEditorController *)arg1;

@end
