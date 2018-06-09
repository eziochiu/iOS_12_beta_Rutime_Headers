/* made by EzioChiu.
 */

@protocol NCNotificationManagementControllerSettingsDelegate <NSObject>

@required

- (NCNotificationSectionSettings *)notificationManagementController:(id <NCNotificationManagementController>)arg1 sectionSettingsForSectionId:(NSString *)arg2;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4 subSectionIdentifier:(NSString *)arg5;

@end
