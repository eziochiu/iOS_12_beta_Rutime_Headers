/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate> {
    <HFUserNotificationCustomSettingsPresentationHandling> * _customSettingsPresentationHandler;
    NAFuture * _notificationSettingsFuture;
    NSHashTable * _observers;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic) <HFUserNotificationCustomSettingsPresentationHandling> *customSettingsPresentationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *notificationSettingsFuture;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)addObserver:(id)arg1;
- (id)customSettingsPresentationHandler;
- (id)init;
- (id)notificationSettings;
- (id)notificationSettingsFuture;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setCustomSettingsPresentationHandler:(id)arg1;
- (void)setNotificationSettingsFuture:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
