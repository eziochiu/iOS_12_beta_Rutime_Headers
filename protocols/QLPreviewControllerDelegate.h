/* made by EzioChiu.
 */

@protocol QLPreviewControllerDelegate <NSObject>

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(QLPreviewController *)arg1 frameForPreviewItem:(id <QLPreviewItem>)arg2 inSourceView:(id*)arg3;
- (bool)previewController:(QLPreviewController *)arg1 shouldOpenURL:(NSURL *)arg2 forPreviewItem:(id <QLPreviewItem>)arg3;
- (UIImage *)previewController:(QLPreviewController *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewControllerDidDismiss:(QLPreviewController *)arg1;
- (void)previewControllerWillDismiss:(QLPreviewController *)arg1;

@end
