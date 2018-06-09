/* made by EzioChiu.
 */

@protocol UIPageViewControllerDelegate <NSObject>

@optional

- (void)pageViewController:(UIPageViewController *)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(NSArray *)arg3 transitionCompleted:(bool)arg4;
- (long long)pageViewController:(UIPageViewController *)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(UIPageViewController *)arg1 willTransitionToViewControllers:(NSArray *)arg2;
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(UIPageViewController *)arg1;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(UIPageViewController *)arg1;

@end
