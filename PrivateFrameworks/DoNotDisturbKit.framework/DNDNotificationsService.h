/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
 */

@interface DNDNotificationsService : NSObject <DNDSettingsUpdateListener, DNDStateUpdateListener, UNUserNotificationCenterDelegate> {
    bool  _basicActive;
    bool  _bedtimeActive;
    DNDBehaviorSettings * _currentBehaviorSettings;
    DNDState * _currentState;
    bool  _doNotDisturbActive;
    bool  _drivingActive;
    DNDModeAssertionService * _notificationsAssertionService;
    UNUserNotificationCenter * _notificationsCenter;
    DNDSettingsService * _notificationsSettingsService;
    DNDStateService * _notificationsStateService;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _workoutActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attachmentForIdentifier:(id)arg1;
- (void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(bool)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (void)resume;
- (void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
