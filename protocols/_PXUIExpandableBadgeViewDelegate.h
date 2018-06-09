/* made by EzioChiu.
 */

@protocol _PXUIExpandableBadgeViewDelegate <NSObject>

@required

- (void)expandableBadgeViewDidChangeMainBadgeView:(_PXUIExpandableBadgeView *)arg1;
- (void)expandableBadgeViewDidCollapse:(_PXUIExpandableBadgeView *)arg1;
- (void)expandableBadgeViewDidExpand:(_PXUIExpandableBadgeView *)arg1;

@end
