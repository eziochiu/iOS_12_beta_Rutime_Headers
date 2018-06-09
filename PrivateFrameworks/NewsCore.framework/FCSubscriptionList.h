/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscriptionList : FCPrivateDataController {
    NSSet * _autoFavoriteTagIDs;
    NSSet * _groupableTagIDs;
    NSSet * _ignoredTagIDs;
    FCMTWriterMutexLock * _itemsLock;
    NSMutableDictionary * _mutableSubscriptionsBySubscriptionID;
    NSSet * _mutedTagIDs;
    NSOrderedSet * _orderedSubscribedTagIDs;
    NSSet * _subscribedTagIDs;
    <FCTagRanking> * _subscribedTagRanker;
}

@property (nonatomic, readonly, copy) NSSet *allSubscribedTagIDs;
@property (nonatomic, copy) NSSet *autoFavoriteTagIDs;
@property (nonatomic, copy) NSSet *groupableTagIDs;
@property (nonatomic, copy) NSSet *ignoredTagIDs;
@property (nonatomic, retain) FCMTWriterMutexLock *itemsLock;
@property (nonatomic, retain) NSMutableDictionary *mutableSubscriptionsBySubscriptionID;
@property (nonatomic, copy) NSSet *mutedTagIDs;
@property (nonatomic, copy) NSOrderedSet *orderedSubscribedTagIDs;
@property (nonatomic, copy) NSSet *subscribedTagIDs;
@property (nonatomic, retain) <FCTagRanking> *subscribedTagRanker;
@property (nonatomic, readonly, copy) NSDictionary *subscriptionsBySubscriptionID;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;
+ (id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_addRemoteSubscriptions:(id)arg1;
- (void)_assignOrderToTagSubscriptions:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (id)_newSubscriptionOrder;
- (long long)_orderOfHighestRankedTagSubscription;
- (unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)arg1;
- (id)_reconcileSubscriptions:(id)arg1;
- (void)_regenerateSortedSubscriptions;
- (void)_removeRemoteSubscription:(id)arg1;
- (void)_removeRemoteSubscriptions:(id)arg1;
- (id)_subscriptionFromRecord:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(bool)arg5 eventInitiationLevel:(long long)arg6;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 originProvider:(id /* block */)arg3 eventInitiationLevelProvider:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 originProvider:(id /* block */)arg3 groupID:(id)arg4 notificationsEnabled:(bool)arg5 eventInitiationLevelProvider:(id /* block */)arg6 completion:(id /* block */)arg7;
- (id)allSubscribedTagIDs;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (id)autoFavoriteTagIDs;
- (bool)canAddSubscription;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)groupableTagIDs;
- (void)handleSyncCompletion;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (bool)hasMutedSubscriptionForTagID:(id)arg1;
- (bool)hasNotificationsEnabledForTagID:(id)arg1;
- (bool)hasSubscriptionForTagID:(id)arg1;
- (id)ignoredTagIDs;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)itemsLock;
- (void)loadLocalCachesFromStore;
- (bool)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)mutableSubscriptionsBySubscriptionID;
- (id)mutedTagIDs;
- (id)orderedSubscribedTagIDs;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 eventInitiationLevel:(long long)arg3 completion:(id /* block */)arg4;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setGroupableTagIDs:(id)arg1;
- (void)setIgnoredTagIDs:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (void)setMutableSubscriptionsBySubscriptionID:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (bool)setNotificationsEnabled:(bool)arg1 forTagID:(id)arg2;
- (void)setOrderedSubscribedTagIDs:(id)arg1;
- (void)setSubscribedTagIDs:(id)arg1;
- (void)setSubscribedTagRanker:(id)arg1;
- (id)subscribedTagIDs;
- (id)subscribedTagRanker;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (id)subscriptionForTagIDOfAnyType:(id)arg1;
- (id)subscriptionsBySubscriptionID;
- (id)subscriptionsForType:(unsigned long long)arg1;
- (id)t_reconcileSubscriptions:(id)arg1;

@end
