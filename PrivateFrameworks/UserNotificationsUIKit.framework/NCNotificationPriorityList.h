/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationPriorityList : NCNotificationListSection

- (long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2;
- (id)allNonPersistentRequests;
- (id)clearAllRequests;
- (id)clearNonPersistentRequests;
- (id)clearRequestsPassingTest:(id /* block */)arg1;

@end
