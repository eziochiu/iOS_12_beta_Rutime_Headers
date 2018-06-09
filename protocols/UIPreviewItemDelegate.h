/* made by EzioChiu.
 */

@protocol UIPreviewItemDelegate <NSObject>

@required

- (NSDictionary *)_dataForPreviewItemController:(UIPreviewItemController *)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 type:(long long*)arg3;

@optional

- (bool)_interactionShouldBeginFromPreviewItemController:(UIPreviewItemController *)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)_interactionStartedFromPreviewItemController:(UIPreviewItemController *)arg1;
- (void)_interactionStoppedFromPreviewItemController:(UIPreviewItemController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForPreviewItemController:(UIPreviewItemController *)arg1;
- (NSArray *)_presentationRectsForPreviewItemController:(UIPreviewItemController *)arg1;
- (UIImage *)_presentationSnapshotForPreviewItemController:(UIPreviewItemController *)arg1;
- (UIViewController *)_presentedViewControllerForPreviewItemController:(UIPreviewItemController *)arg1;
- (void)_previewItemController:(UIPreviewItemController *)arg1 commitPreview:(UIViewController *)arg2;
- (void)_previewItemController:(UIPreviewItemController *)arg1 didDismissPreview:(UIViewController *)arg2 committing:(bool)arg3;
- (void)_previewItemController:(UIPreviewItemController *)arg1 willPresentPreview:(UIViewController *)arg2 forPosition:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(UIView *)arg4;
- (void)_previewItemControllerDidCancelPreview:(UIPreviewItemController *)arg1;

@end
