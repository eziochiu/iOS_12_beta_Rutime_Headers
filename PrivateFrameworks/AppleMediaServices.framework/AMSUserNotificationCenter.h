/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate> {
    NSString * _bundleIdentifier;
    UNUserNotificationCenter * _center;
    <AMSUserNotificationCenterDelegate> * _delegate;
    bool  _runningInDaemon;
}

@property (nonatomic, readonly) NSArray *activeNotifications;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly) UNUserNotificationCenter *center;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool runningInDaemon;
@property (readonly) Class superclass;

+ (id)currentCenter;

- (void).cxx_destruct;
- (id)_createUNNotificationFromNotification:(id)arg1;
- (bool)_requestPermission;
- (id)activeNotifications;
- (id)bundleIdentifier;
- (id)center;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 runningInDaemon:(bool)arg2;
- (void)postNotification:(id)arg1;
- (void)removeNotification:(id)arg1;
- (bool)runningInDaemon;
- (void)setDelegate:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
