/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscriptionController : NSObject <FCAppActivityObserving, FCSubscriptionListObserving> {
    <FCCoreConfigurationManager> * _configurationManager;
    FCThreadSafeMutableSet * _newlyAddedSubscriptions;
    FCNotificationController * _notificationController;
    NSHashTable * _observers;
    FCPurchaseController * _purchaseController;
    FCThreadSafeMutableDictionary * _subscribedTagsByTagID;
    FCSubscriptionList * _subscriptionList;
    FCTagController * _tagController;
}

@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCThreadSafeMutableSet *newlyAddedSubscriptions;
@property (nonatomic, retain) FCNotificationController *notificationController;
@property (nonatomic, copy) NSHashTable *observers;
@property (nonatomic, retain) FCPurchaseController *purchaseController;
@property (nonatomic, retain) FCThreadSafeMutableDictionary *subscribedTagsByTagID;
@property (nonatomic, retain) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagController *tagController;

- (void).cxx_destruct;
- (void)_fetchExtraTagsWithPreSubscribedNotificationSupportWithCompletion:(id /* block */)arg1;
- (void)_fetchMissingTagsWithCompletion:(id /* block */)arg1;
- (void)_fetchTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)_handleNonTagSubscriptionType:(unsigned long long)arg1 addedSubscriptionsByType:(id)arg2 removedSubscriptionsByType:(id)arg3 changedSubscriptionsByType:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_handleTagSubscriptionsAdded:(id)arg1 tagSubscriptionsChanged:(id)arg2 tagSubscriptionsMoved:(id)arg3 tagSubscriptionsRemoved:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)_integrateTags:(id)arg1 eventInitiationLevel:(long long)arg2;
- (void)_notifyOfTagsAdded:(id)arg1 tagsChanged:(id)arg2 tagsMoved:(id)arg3 tagsRemoved:(id)arg4 subscriptionType:(unsigned long long)arg5 eventInitiationLevel:(long long)arg6;
- (void)_notifyOfTagsWithNotificationSupport:(id)arg1;
- (void)_purchaseListDidChange;
- (void)_refreshChannelsWithNotificationsEnabled;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addAutoFavoriteSubscriptionForTagIDs:(id)arg1 groupableSubscriptionForTagIDs:(id)arg2 originProvider:(id /* block */)arg3 eventInitiationLevelProvider:(id /* block */)arg4 completion:(id /* block */)arg5;
- (bool)addGroupableSubscriptionForTagID:(id)arg1 origin:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (bool)addIgnoredSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (bool)addIgnoredSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (bool)addMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (bool)addMutedSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (void)addObserver:(id)arg1;
- (bool)addSubscriptionToTag:(id)arg1 error:(id*)arg2 eventInitiationLevel:(long long)arg3;
- (bool)addSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2 options:(long long)arg3 error:(id*)arg4;
- (bool)addSubscriptionToTag:(id)arg1 notificationsEnabled:(bool)arg2 error:(id*)arg3 eventInitiationLevel:(long long)arg4;
- (id)autoFavoriteTagIDs;
- (id)cachedSubscribedTags;
- (bool)canAddSubscription;
- (bool)canAddSubscriptionWithError:(id*)arg1;
- (id)configurationManager;
- (id)externalSignalDrivenAutoFavorites;
- (void)fetchAllTagsWithCallbackQueue:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchSubscribedTagsWithCallbackQueue:(id)arg1 preferCache:(bool)arg2 completion:(id /* block */)arg3;
- (id)groupableTagIDs;
- (bool)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (bool)hasMutedSubscriptionForTagID:(id)arg1;
- (bool)hasNotificationsEnabledForTag:(id)arg1;
- (bool)hasSubscriptionToTag:(id)arg1;
- (bool)hasSubscriptionToTagID:(id)arg1;
- (id)ignoredTagIDs;
- (id)init;
- (id)initWithSubscriptionList:(id)arg1 tagController:(id)arg2 notificationController:(id)arg3 purchaseController:(id)arg4 configurationManager:(id)arg5 appActivityMonitor:(id)arg6;
- (bool)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)mutedTagIDs;
- (id)newlyAddedSubscriptions;
- (id)newlySubscribedTagIDsInDateRange:(id)arg1;
- (id)notificationController;
- (id)observers;
- (id)orderedCachedSubscribedTags;
- (id)purchaseController;
- (void)refreshSubscriptionTags;
- (void)removeAllAutoFavoriteSubscriptions:(id /* block */)arg1;
- (void)removeAutoFavoriteSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)removeSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2;
- (void)setConfigurationManager:(id)arg1;
- (void)setNewlyAddedSubscriptions:(id)arg1;
- (void)setNotificationController:(id)arg1;
- (bool)setNotificationsEnabled:(bool)arg1 forTag:(id)arg2 error:(id*)arg3;
- (bool)setNotificationsEnabled:(bool)arg1 forTagID:(id)arg2 error:(id*)arg3;
- (void)setObservers:(id)arg1;
- (void)setPurchaseController:(id)arg1;
- (void)setSubscribedTagsByTagID:(id)arg1;
- (void)setSubscriptionList:(id)arg1;
- (void)setTagController:(id)arg1;
- (id)subscribedTagForTagID:(id)arg1;
- (id)subscribedTagIDs;
- (id)subscribedTagIDsWithNotificationsEnabled;
- (id)subscribedTagsByTagID;
- (id)subscriptionForTag:(id)arg1;
- (id)subscriptionForTag:(id)arg1 type:(unsigned long long)arg2;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionList;
- (void)subscriptionList:(id)arg1 didAddSubscriptions:(id)arg2 changeSubscriptions:(id)arg3 moveSubscriptions:(id)arg4 removeSubscriptions:(id)arg5 eventInitiationLevel:(long long)arg6;
- (id)subscriptionSurfacingHeadline:(id)arg1;
- (id)subscriptions;
- (id)subscriptionsWithType:(unsigned long long)arg1;
- (id)tagController;
- (id)tagIDsWithType:(unsigned long long)arg1;

@end
