/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying> {
    NSPredicate * _notificationCondition;
    bool  _notificationsEnabled;
}

@property (nonatomic, retain) NSPredicate *notificationCondition;
@property (getter=areNotificationsEnabled, nonatomic) bool notificationsEnabled;

+ (id)combinedConditionForBulletinBoardNotifications:(id)arg1;

- (void).cxx_destruct;
- (id)applySettingsToBulletinBoardNotifications:(id)arg1;
- (bool)areNotificationsEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBulletinBoardNotifications:(id)arg1;
- (id)initWithNotificationsEnabled:(bool)arg1 condition:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)notificationCondition;
- (void)setNotificationCondition:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;

@end
