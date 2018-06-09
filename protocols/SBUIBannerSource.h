/* made by EzioChiu.
 */

@protocol SBUIBannerSource <NSObject>

@required

- (SBUIBannerItem *)dequeueNextBannerItemForTarget:(id <SBUIBannerTarget>)arg1;
- (UIView<SBUIBannerView> *)newBannerViewForContext:(SBUIBannerContext *)arg1;
- (SBUIBannerItem *)peekNextBannerItemForTarget:(id <SBUIBannerTarget>)arg1;

@optional

- (void)bannerViewDidAppear:(UIView<SBUIBannerView> *)arg1;
- (void)bannerViewDidDismiss:(UIView<SBUIBannerView> *)arg1 forReason:(int)arg2;
- (void)bannerViewWillAppear:(UIView<SBUIBannerView> *)arg1;
- (void)bannerViewWillDismiss:(UIView<SBUIBannerView> *)arg1 forReason:(int)arg2;

@end
