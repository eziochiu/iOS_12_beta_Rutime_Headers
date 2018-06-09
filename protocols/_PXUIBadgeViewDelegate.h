/* made by EzioChiu.
 */

@protocol _PXUIBadgeViewDelegate <NSObject>

@required

- (void)badgeView:(_PXUIBadgeView *)arg1 userDidSelectBadge:(unsigned long long)arg2;
- (bool)badgeViewShouldRespondToUserSelection:(_PXUIBadgeView *)arg1;

@end
