/* made by EzioChiu.
 */

@protocol ADBannerViewInternalDelegate <ADBannerViewDelegate>

@optional

- (void)bannerViewAdLibManagedVideoAdEvent:(ADBannerView *)arg1 eventType:(long long)arg2 info:(NSDictionary *)arg3;
- (void)bannerViewShouldPauseMedia:(ADBannerView *)arg1;
- (void)bannerViewShouldResumeMedia:(ADBannerView *)arg1;
- (UIViewController *)viewControllerForStoryboardPresentationFromBannerView:(ADBannerView *)arg1;

@end
