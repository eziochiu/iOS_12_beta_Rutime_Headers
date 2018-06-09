/* made by EzioChiu.
 */

@protocol SXActionManager <NSObject>

@required

- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2 sourceView:(UIView *)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 mode:(unsigned long long)arg5;
- (UIViewController *)previewViewControllerForAction:(SXAction *)arg1;

@end
