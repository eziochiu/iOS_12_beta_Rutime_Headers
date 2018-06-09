/* made by EzioChiu.
 */

@protocol NUPageViewControllerDelegate <NSObject>

@optional

- (void)pageViewController:(NUPageViewController *)arg1 didChangeVisibleViewControllerFromViewController:(UIViewController *)arg2 direction:(unsigned long long)arg3;
- (void)pageViewController:(NUPageViewController *)arg1 didHideViewController:(UIViewController *)arg2;
- (void)pageViewController:(NUPageViewController *)arg1 viewController:(UIViewController *)arg2 changedVisibilityFactor:(double)arg3;
- (void)pageViewController:(NUPageViewController *)arg1 willShowViewController:(UIViewController *)arg2;

@end
