/* made by EzioChiu.
 */

@protocol CKNavbarCanvasViewControllerDelegate <NSObject>

@required

- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 avatarPickerViewControllerDidSelectEntity:(CKEntity *)arg2;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 buttonWasPressedOfType:(long long)arg2;
- (void)navbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 didTapView:(UIView *)arg2;
- (void)navbarCanvasViewControllerWantsNavbarResize:(CKNavbarCanvasViewController *)arg1;

@end
