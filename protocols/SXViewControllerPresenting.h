/* made by EzioChiu.
 */

@protocol SXViewControllerPresenting <NSObject>

@required

- (void)presentViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(bool)arg2 sourceView:(UIView *)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
