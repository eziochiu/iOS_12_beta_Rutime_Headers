/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNUserNotificationCenter : NSObject <UNUserNotificationCenterDelegateConnectionListenerDelegate, UNUserNotificationServiceConnectionObserver> {
    NSString * _bundleIdentifier;
    <UNUserNotificationCenterDelegate> * _delegate;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsContentExtensions;

+ (id)currentNotificationCenter;
+ (bool)supportsContentExtensions;

- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)bundleIdentifier;
- (id)delegate;
- (void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)arg1;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCategories:(id)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)setWantsNotificationResponsesDelivered;
- (bool)supportsContentExtensions;

@end
