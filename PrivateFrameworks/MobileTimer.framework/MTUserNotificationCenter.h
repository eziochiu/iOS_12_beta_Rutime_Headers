/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter> {
    UNUserNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

+ (id)_bedtimeFormatter;
+ (id)_bundleIDForPlatform;
+ (id)_durationComponentsFormatter;
+ (id)_earlyWakeUpIdentifier:(id)arg1;
+ (id)_goToBedIdentifier:(id)arg1;
+ (void)_setEarlyWakeUpTitleAndBody:(id)arg1 forEarlyWakeUpNotification:(id)arg2;
+ (void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forEarlyWakeUpNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (id)_snoozeCountdownIdentifier:(id)arg1;
+ (id)categoryForScheduledAlarm:(id)arg1;
+ (id)categoryForScheduledTimer:(id)arg1;
+ (id)contentForScheduledAlarm:(id)arg1;
+ (id)contentForScheduledTimer:(id)arg1;
+ (id)launchURLForScheme:(id)arg1;
+ (id)requestIdentifierForScheduledAlarm:(id)arg1;
+ (id)userInfoForAlarm:(id)arg1;
+ (id)userInfoForTimer:(id)arg1;

- (void).cxx_destruct;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissNotificationsForTimer:(id)arg1;
- (void)dismissNotificationsWithIdentifiers:(id)arg1;
- (void)dismissPreviousNotificationsForScheduledAlarm:(id)arg1;
- (id)init;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(id /* block */)arg1;
- (id)notificationCategories;
- (id)notificationCenter;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)registerResponseDelegate:(id)arg1;
- (void)setNotificationCenter:(id)arg1;

@end
