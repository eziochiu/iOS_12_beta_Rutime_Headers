/* made by EzioChiu.
 */

@protocol _UIButtonBarLayoutMetricsData <NSObject>

@required

- (_UIButtonBarLayoutMetrics *)_upcastIfReadOnly;
- (bool)allowsViewWrappers;
- (bool)createsPopoverLayoutGuides;
- (NSLayoutDimension *)flexibleSpaceGuide;
- (NSLayoutDimension *)groupSizeGuide;
- (NSLayoutDimension *)groupSpacingGuide;
- (NSLayoutDimension *)minimumSpaceGuide;
- (NSLayoutAnchor *)popoverGuideTopAnchor;
- (NSLayoutDimension *)verticalSizeGuide;

@end
