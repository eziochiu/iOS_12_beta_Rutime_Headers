/* made by EzioChiu.
 */

@protocol PLExpandedPlatterPresentationController <PLViewControllerAnimatorObserving>

@required

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (double)additionalHomeAffordanceSpacing;
- (void)completeDismissal;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (UIPanGestureRecognizer *)homeAffordancePanGesture;
- (id)initWithPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3 sourceView:(UIView *)arg4;
- (bool)isHomeAffordanceVisible;
- (<PLExpandedPlatterPresentationControllerDelegate> *)presentationControllerDelegate;
- (void)setAdditionalHomeAffordanceSpacing:(double)arg1;
- (void)setHomeAffordancePanGesture:(UIPanGestureRecognizer *)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setPresentationControllerDelegate:(id <PLExpandedPlatterPresentationControllerDelegate>)arg1;

@end
