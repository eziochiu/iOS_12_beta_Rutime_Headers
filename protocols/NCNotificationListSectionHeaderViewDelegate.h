/* made by EzioChiu.
 */

@protocol NCNotificationListSectionHeaderViewDelegate <NSObject>

@required

- (_UILegibilitySettings *)legibilitySettingsForSectionHeaderView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderView:(NCNotificationListSectionHeaderView *)arg1 didReceiveClearActionForSectionIdentifier:(NSString *)arg2;
- (void)sectionHeaderViewDidDismissForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidTransitionToClearState:(NCNotificationListSectionHeaderView *)arg1;

@end
