/* made by EzioChiu.
 */

@protocol _UIViewControllerContentViewEmbedding

@required

- (void)viewController:(UIViewController *)arg1 viewDidAppear:(bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewDidDisappear:(bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewWillAppear:(bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewWillDisappear:(bool)arg2;
- (void)viewControllerViewDidLayoutSubviews:(UIViewController *)arg1;
- (void)viewControllerViewWillLayoutSubviews:(UIViewController *)arg1;

@end
