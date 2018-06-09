/* made by EzioChiu.
 */

@protocol UITabBarControllerDelegate <NSObject>

@optional

- (<UIViewControllerAnimatedTransitioning> *)tabBarController:(UITabBarController *)arg1 animationControllerForTransitionFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
- (void)tabBarController:(UITabBarController *)arg1 didEndCustomizingViewControllers:(NSArray *)arg2 changed:(bool)arg3;
- (void)tabBarController:(UITabBarController *)arg1 didSelectViewController:(UIViewController *)arg2;
- (<UIViewControllerInteractiveTransitioning> *)tabBarController:(UITabBarController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (bool)tabBarController:(UITabBarController *)arg1 shouldSelectViewController:(UIViewController *)arg2;
- (void)tabBarController:(UITabBarController *)arg1 willBeginCustomizingViewControllers:(NSArray *)arg2;
- (void)tabBarController:(UITabBarController *)arg1 willEndCustomizingViewControllers:(NSArray *)arg2 changed:(bool)arg3;
- (long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(UITabBarController *)arg1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(UITabBarController *)arg1;

@end
