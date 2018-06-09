/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDCloudStoreNotificationCoordinator : NSObject <PDCloudStoreContainerDelegate, PDPushNotificationConsumer, PDScheduledActivityClient, PKCloudStoreCoordinatorDelegate> {
    PDApplePayCloudStoreContainer * _applePayContainer;
    NSMutableArray * _containers;
    NSMutableDictionary * _containersCurrentlyProcessingPushNotifications;
    NSMutableDictionary * _containersThatShouldProcessPushNotifications;
    NSHashTable * _observers;
    PDPassCloudStoreContainer * _passContainer;
    PDPushNotificationManager * _pushNotificationManager;
    NSSet * _pushTopics;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) PDApplePayCloudStoreContainer *applePayContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PDPassCloudStoreContainer *passContainer;
@property (readonly) Class superclass;

+ (bool)canInitalizeCloudStoreWithWebService:(id)arg1;
+ (void)invalidateServerChangeTokens;

- (void).cxx_destruct;
- (id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1;
- (id)_containerForItemType:(unsigned long long)arg1;
- (id)_containerWithIdentifier:(id)arg1;
- (id)_containerWithZoneName:(id)arg1;
- (id)_errorWithCode:(long long)arg1 description:(id)arg2;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 completion:(id /* block */)arg2;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 shouldScheduleBackgroundActivity:(bool)arg2 completion:(id /* block */)arg3;
- (double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1;
- (void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2;
- (void)_processCloudStorePushNotificationForContainer:(id)arg1;
- (void)_recordAggdCloudStoreBackgroundContainerSetupResult:(bool)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2;
- (void)_registerForPushNotifications;
- (void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1;
- (void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
- (bool)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
- (void)_unregisterForPushNotifications;
- (void)_unscheduleBackgroundContainerSetupActivities;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (id)applePayContainer;
- (void)applyPushNotificationToken:(id)arg1;
- (bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (void)cloudStoreContainer:(id)arg1 createdZoneWithName:(id)arg2;
- (void)cloudStoreContainer:(id)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)initWithPushNotificationManager:(id)arg1;
- (id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3 initalizeCloudStoreManager:(bool)arg4;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(id /* block */)arg3;
- (void)noteCloudSyncPassesSwitchChanged;
- (id)passContainer;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (id)pushNotificationTopics;
- (void)registerObserver:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (void)resetContainerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setApplePayContainer:(id)arg1;
- (void)setPassContainer:(id)arg1;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(id /* block */)arg3;

@end
