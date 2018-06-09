/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserNotificationManager : NSObject

@property (nonatomic, readonly) bool hasOutstandingNotifications;

+ (id)sharedManager;

- (void)cancelAllNotificationsCompletionBlock:(id /* block */)arg1;
- (void)cancelNotificationEntriesMatchingPredicate:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 displayOnLockScreen:(bool)arg7 displayInAppWhitelistModes:(bool)arg8 dismissAfterTimeInterval:(double)arg9 assertion:(id)arg10 completionBlock:(id /* block */)arg11;
- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(bool)arg6 displayInAppWhitelistModes:(bool)arg7 dismissAfterTimeInterval:(double)arg8 assertion:(id)arg9 completionBlock:(id /* block */)arg10;
- (bool)hasOutstandingNotifications;
- (id)init;
- (void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(id /* block */)arg4;

@end
