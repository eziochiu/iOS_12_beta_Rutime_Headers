/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationEventTracker : NSObject {
    ATXNotificationsLoggingClient * _logger;
    PETScalarEventTracker * _longLookCustomActionTracker;
    PETScalarEventTracker * _longLookDefaultActionTracker;
    PETScalarEventTracker * _longLookDismissTracker;
    PETScalarEventTracker * _longLookPresentationTracker;
    PETScalarEventTracker * _longLookReparkTracker;
    PETScalarEventTracker * _notificationCenterClearAllTracker;
    PETScalarEventTracker * _notificationCenterClearDayTracker;
    PETScalarEventTracker * _shortLookClearTracker;
    PETScalarEventTracker * _shortLookDefaultActionTracker;
    PETScalarEventTracker * _shortLookDismissTracker;
}

+ (id)createATXNotificationInterfaceFromRequest:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_attachmentCountProperty;
- (id)_customActionsCountProperty;
- (id)_customExtensionProperty;
- (id)_destinationProperty;
- (id)_firstPartyAppProperty;
- (id)_longLookCustomActionTracker;
- (id)_longLookDefaultActionTracker;
- (id)_longLookDismissTracker;
- (id)_longLookPresentationTracker;
- (id)_longLookReparkTracker;
- (id)_notificationCenterClearAllTracker;
- (id)_notificationCenterClearDayTracker;
- (id)_primaryAttachmentTypeProperty;
- (id)_shortLookClearTracker;
- (id)_shortLookDefaultActionTracker;
- (id)_shortLookDismissTracker;
- (id)_textInputProperty;
- (id)_triggerPropertyForEvent:(id)arg1;
- (void)defaultActionForNotification:(id)arg1;
- (void)dismissActionForNotification:(id)arg1;
- (id)init;
- (void)longLookCustomAction:(id)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDidPresentForNotificationRequest:(id)arg1;
- (void)longLookDismissInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookReparkInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)notificationCenterClearAll;
- (void)notificationCenterDayCleared;
- (id)notificationDestinationForState:(id)arg1;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)arg1;
- (void)pulldownActionForNotification:(id)arg1;
- (void)realTimeTuningOutcome:(long long)arg1;
- (void)realTimeTuningTrigger:(long long)arg1;
- (void)receivedNotification:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)removedNotificationFromAllFeeds:(id)arg1;
- (void)removedNotificationFromLockScreen:(id)arg1;
- (void)shortLookClearedForNotificationRequest:(id)arg1 withState:(id)arg2;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)shortLookDismissInvokedForNotificationRequest:(id)arg1 withState:(id)arg2;
- (void)silenceActionForNotification:(id)arg1;
- (void)tappedCoalescedNotification:(id)arg1 inBundle:(id)arg2;

@end
