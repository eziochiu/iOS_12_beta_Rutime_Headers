/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCoalescingManager : NSObject {
    NSMapTable * _coalescingIdentifiersCache;
    <NCNotificationListCoalescingManagerDelegate> * _delegate;
    bool  _deviceAuthenticated;
    NCNotificationRequest * _notificationRequestPresentedInLongLook;
    NSMutableSet * _requestsToRemoveOnLongLookDismissal;
    NSMutableDictionary * _sectionContentProviders;
}

@property (nonatomic, retain) NSMapTable *coalescingIdentifiersCache;
@property (nonatomic) <NCNotificationListCoalescingManagerDelegate> *delegate;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;
@property (nonatomic, retain) NCNotificationRequest *notificationRequestPresentedInLongLook;
@property (nonatomic, retain) NSMutableSet *requestsToRemoveOnLongLookDismissal;
@property (nonatomic, retain) NSMutableDictionary *sectionContentProviders;

- (void).cxx_destruct;
- (void)_coalesceNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (id)_contentProvidersForSection:(unsigned long long)arg1;
- (void)_enumerateAllContentProvidersInSection:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)_enumerateAllContentProvidersWithBlock:(id /* block */)arg1;
- (void)_enumerateAllGroupingSectionsUsingBlock:(id /* block */)arg1;
- (void)_migrateNotificationContentProvidersFromSection:(unsigned long long)arg1 toSection:(unsigned long long)arg2 forNotificationRequestsPassingTest:(id /* block */)arg3;
- (id)_newContentProviderForNotificationRequest:(id)arg1;
- (void)_reloadAllLeadingCoalescedNotificationRequests;
- (void)_removeContentProvider:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_removeNotificationRequest:(id)arg1 fromSectionsOtherThanSection:(unsigned long long)arg2;
- (id)_sectionIdentifierForNotificationRequest:(id)arg1;
- (void)_swapNotificationRequest:(id)arg1 withNewRequest:(id)arg2 inSection:(unsigned long long)arg3;
- (id)_threadIdentifierForNotificationRequest:(id)arg1;
- (void)_updateForRemovedNotificationRequests:(id)arg1 forLeadingNotificationRequest:(id)arg2 inSection:(unsigned long long)arg3;
- (void)_updateOnModifyingNotificationRequest:(id)arg1;
- (void)_updateOnRemovingNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (void)clearContentProviderForNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (void)clearFromIncomingSectionNotificationRequestsCoalescedWithRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (void)clearNotificationRequestsCoalescedWithRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (void)coalesceNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (id)coalescingIdentifierForNotificationRequest:(id)arg1;
- (id)coalescingIdentifiersCache;
- (id)contentProviderForNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2 createNewIfNecessary:(bool)arg3;
- (id)delegate;
- (void)expandCoalescedBundleForNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2 delayAnimation:(bool)arg3;
- (void)expandCoalescedBundleForNotificationRequestsPassingTest:(id /* block */)arg1 inSection:(unsigned long long)arg2 delayAnimation:(bool)arg3;
- (id)getCoalescedNotificationRequestsAndClearContentProviderForLeadingNotificationRequest:(id)arg1 inGroupingSection:(unsigned long long)arg2;
- (id)init;
- (bool)isCoalescingNotificationRequest:(id)arg1;
- (bool)isDeviceAuthenticated;
- (void)migrateNotificationContentProvidersFromSection:(unsigned long long)arg1 toSection:(unsigned long long)arg2 forNotificationRequestsPassingTest:(id /* block */)arg3;
- (void)modifyCoalescedNotificationRequest:(id)arg1;
- (id)notificationRequestPresentedInLongLook;
- (void)recoalesceNotificationRequests:(id)arg1 inSection:(unsigned long long)arg2 delayAnimation:(bool)arg3;
- (void)removeCoalescedNotificationRequest:(id)arg1 inSection:(unsigned long long)arg2;
- (id)requestsToRemoveOnLongLookDismissal;
- (id)sectionContentProviders;
- (void)setCoalescingIdentifiersCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setNotificationRequestPresentedInLongLook:(id)arg1;
- (void)setRequestsToRemoveOnLongLookDismissal:(id)arg1;
- (void)setSectionContentProviders:(id)arg1;

@end
