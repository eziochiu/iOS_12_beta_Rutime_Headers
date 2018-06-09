/* made by EzioChiu.
 */

@protocol _UIRotatingAlertControllerDelegate <NSObject>

@required

- (UIView *)hostViewForSheet:(_UIRotatingAlertController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;

@optional

- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerDidChange:(UIViewController *)arg2;
- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerWillChange:(UIViewController *)arg2;

@end
