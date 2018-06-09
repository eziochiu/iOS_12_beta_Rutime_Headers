/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSApplicationLauncher : NSObject {
    NSMutableDictionary * _bundleIdentifierToAssertions;
    UNSLocationMonitor * _locationMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    FBSSystemService * _systemService;
}

- (void).cxx_destruct;
- (id)_queue_actionForNotificationResponse:(id)arg1 bundleIdentifier:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_queue_addProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (void)_queue_backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_queue_newProcessAssertionForBundleID:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 watchdogInterval:(double)arg5 acquisitionHandler:(id /* block */)arg6 invalidationHandler:(id /* block */)arg7;
- (void)_queue_removeAllProcessAssertionsAndInvalidate:(bool)arg1;
- (void)_queue_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(bool)arg3;
- (void)_queue_removeProcessAssertionsHavingReason:(unsigned int)arg1 forBundleID:(id)arg2 invalidate:(bool)arg3;
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_removeAllProcessAssertionsAndInvalidate:(bool)arg1;
- (void)backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithSystemService:(id)arg1 locationMonitor:(id)arg2;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
