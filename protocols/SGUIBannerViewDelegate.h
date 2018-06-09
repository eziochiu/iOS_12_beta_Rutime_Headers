/* made by EzioChiu.
 */

@protocol SGUIBannerViewDelegate <NSObject>

@required

- (void)suggestionsBannerViewDidFinish:(SGUIBannerView *)arg1;
- (UIViewController *)viewControllerForPresentingFromSuggestionsBannerView:(SGUIBannerView *)arg1;

@optional

- (NSData *)documentForSuggestionsBannerView:(SGUIBannerView *)arg1;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 didTapAddForContact:(SGRealtimeContact *)arg2 wantsToPresentContactViewController:(CNContactViewController *)arg3;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 didTapAddForEvent:(SGRealtimeEvent *)arg2 wantsToPresentEventViewController:(EKEventEditViewController *)arg3;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 wantsToPushMixedSuggestionsViewController:(UIViewController *)arg2;
- (void)suggestionsBannerViewDidDismiss:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewDidDismissViewController:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewDidPresentViewController:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewWillDismissViewController:(SGUIBannerView *)arg1;
- (void)suggestionsBannerViewWillPresentViewController:(SGUIBannerView *)arg1;

@end
