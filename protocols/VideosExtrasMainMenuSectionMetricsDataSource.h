/* made by EzioChiu.
 */

@protocol VideosExtrasMainMenuSectionMetricsDataSource <NSObject>

@required

- (long long)numberOfItemsForSectionMetrics:(VideosExtrasMainMenuSectionMetrics *)arg1;
- (struct CGSize { double x1; double x2; })sectionMetrics:(VideosExtrasMainMenuSectionMetrics *)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(UIFontDescriptor *)arg3;

@end
