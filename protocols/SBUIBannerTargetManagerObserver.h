/* made by EzioChiu.
 */

@protocol SBUIBannerTargetManagerObserver <NSObject>

@required

- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didAddTarget:(id <SBUIBannerTarget>)arg2;
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didRemoveTarget:(id <SBUIBannerTarget>)arg2;

@end
