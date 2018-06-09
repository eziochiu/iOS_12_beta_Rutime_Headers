/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAppNotificationsCell : PSTableCell {
    UIImageView * _itemIconView;
    UILabel * _itemNameLabel;
    UIImageView * _notificationDot;
    NSLayoutConstraint * _notificationDotLeadingConstraint;
    UILabel * _notificationsLabel;
    STUsageItem * _usageItem;
}

@property (nonatomic, retain) UIImageView *itemIconView;
@property (nonatomic, retain) UILabel *itemNameLabel;
@property (nonatomic, retain) UIImageView *notificationDot;
@property (nonatomic, retain) NSLayoutConstraint *notificationDotLeadingConstraint;
@property (nonatomic, retain) UILabel *notificationsLabel;
@property (nonatomic, retain) STUsageItem *usageItem;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)itemIconView;
- (id)itemNameLabel;
- (id)notificationDot;
- (id)notificationDotLeadingConstraint;
- (id)notificationsLabel;
- (void)setItemIconView:(id)arg1;
- (void)setItemNameLabel:(id)arg1;
- (void)setNotificationDot:(id)arg1;
- (void)setNotificationDotLeadingConstraint:(id)arg1;
- (void)setNotificationsLabel:(id)arg1;
- (void)setUsageItem:(id)arg1;
- (void)setValue:(id)arg1;
- (id)usageItem;

@end
