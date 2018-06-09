/* made by EzioChiu.
 */

@protocol MusicJSProductNativeViewControllerDelegate <NSObject>

@required

- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 presentShareDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setProductEntityValueProviderData:(NSDictionary *)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setProminentTrackStoreID:(long long)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setRelatedContentDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setReportingInformation:(NSDictionary *)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setTracklistItems:(NSArray *)arg2;

@end
