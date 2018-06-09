/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STNotificationSummaryCell : PSTableCell {
    UILabel * _averageNotificationsLabel;
    STUsageGraphView * _graphView;
    UIImageView * _notificationDot;
    UILabel * _notificationsLabel;
}

@property (nonatomic, retain) UILabel *averageNotificationsLabel;
@property (nonatomic, retain) STUsageGraphView *graphView;
@property (nonatomic, retain) UIImageView *notificationDot;
@property (nonatomic, retain) UILabel *notificationsLabel;

- (void).cxx_destruct;
- (id)averageNotificationsLabel;
- (bool)canReload;
- (id)graphView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)notificationDot;
- (id)notificationsLabel;
- (void)setAverageNotificationsLabel:(id)arg1;
- (void)setGraphView:(id)arg1;
- (void)setNotificationDot:(id)arg1;
- (void)setNotificationsLabel:(id)arg1;
- (void)setValue:(id)arg1;

@end
