/* made by EzioChiu.
 */

@protocol PXForYouMemoriesViewControllerDelegate

@required

- (void)forYouMemoriesViewController:(PXForYouMemoriesViewController *)arg1 configureMetrics:(PXMemoriesFeedLayoutMetrics *)arg2;
- (void)forYouMemoriesViewController:(PXForYouMemoriesViewController *)arg1 transitionToViewController:(UIViewController *)arg2 animated:(bool)arg3;

@end
