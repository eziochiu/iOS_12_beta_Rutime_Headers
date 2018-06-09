/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQDaemonOfferManager : NSObject {
    FLFollowUpController * _followUpController;
    NSURLSession * _sharedURLSession;
}

@property (getter=isBuddyOfferEnabled, nonatomic) bool buddyOfferEnabled;
@property (getter=isLegacyDeviceStorageLevelNotificationEnabled, nonatomic) bool legacyDeviceStorageLevelNotificationEnabled;
@property (nonatomic) bool shouldDirectToStorageManagement;
@property (getter=isSimulatedDeviceStorageAlmostFull, nonatomic) bool simulatedDeviceStorageAlmostFull;
@property (nonatomic, retain) NSNumber *simulatedPhotosLibrarySize;
@property (nonatomic) bool useHysteresisForDeviceStorageAlmostFull;

+ (id)ckBackupDeviceID;
+ (id)sharedDaemonOfferManager;

- (void).cxx_destruct;
- (id)URLForAccount:(id)arg1 quotaKey:(id)arg2;
- (void)_addCommonHeadersToRequest:(id)arg1 account:(id)arg2;
- (void)_addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2;
- (bool)_attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;
- (void)_clearStorageManagementFollowup;
- (void)_daemonOfferStubsDictionaryForAccount:(id)arg1 isForBuddy:(bool)arg2 completion:(id /* block */)arg3;
- (void)_fetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchDaemonOfferStubsForAccount:(id)arg1 isForBuddy:(bool)arg2 completion:(id /* block */)arg3;
- (void)_fetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 completion:(id /* block */)arg5;
- (bool)_isBackupEnabledForAccount:(id)arg1;
- (id)_placeholderOfferForAccount:(id)arg1 isForBuddy:(bool)arg2 error:(id)arg3;
- (void)_postDaemonOfferChangedDueToPushDarwinNotification;
- (void)_postFollowupForDaemonOffer:(id)arg1 completion:(id /* block */)arg2;
- (void)_postOfferType:(id)arg1 isForBuddy:(bool)arg2;
- (void)_postStorageManagementFollowup;
- (void)_processPushNotificationDictionary:(id)arg1 completion:(id /* block */)arg2;
- (id)_pushNotificationDictionary;
- (void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(bool)arg2 choiceHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_sanitizedNotificationDictionary:(id)arg1 account:(id)arg2;
- (void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(id /* block */)arg5;
- (id)_storageManagementFollowupActions;
- (id)_storageManagementFollowupItem;
- (id)_storageManagementFollowupNotification;
- (void)_teardownCachedBuddyOffer;
- (void)_teardownCachedOfferAndNotify:(bool)arg1;
- (void)_teardownCachedOffersAndNotify:(bool)arg1;
- (void)_updateOffer:(id)arg1 buttonId:(id)arg2 info:(id)arg3 account:(id)arg4 accountStore:(id)arg5 completion:(id /* block */)arg6;
- (void)_updateQuotaForAccount:(id)arg1 withServerDictionary:(id)arg2;
- (bool)_useFetchOffersDataDirectly;
- (void)clearFollowupsWithCompletion:(id /* block */)arg1;
- (void)daemonBuddyOfferDictionaryForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)daemonOfferDictionaryForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)daemonOfferSource;
- (void)forcePostFollowup;
- (id)init;
- (bool)isBuddyOfferEnabled;
- (bool)isLegacyDeviceStorageLevelNotificationEnabled;
- (bool)isSimulatedDeviceStorageAlmostFull;
- (void)postBuddyOfferType:(id)arg1;
- (void)postOfferType:(id)arg1;
- (void)processPushNotificationDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)reconsiderOffersWithCompletion:(id /* block */)arg1;
- (void)setBuddyOfferEnabled:(bool)arg1;
- (void)setLegacyDeviceStorageLevelNotificationEnabled:(bool)arg1;
- (void)setShouldDirectToStorageManagement:(bool)arg1;
- (void)setSimulatedDeviceStorageAlmostFull:(bool)arg1;
- (void)setSimulatedPhotosLibrarySize:(id)arg1;
- (void)setUseHysteresisForDeviceStorageAlmostFull:(bool)arg1;
- (bool)shouldDirectToStorageManagement;
- (id)simulatedPhotosLibrarySize;
- (id)soonestOfferOrStubExpirationDate;
- (void)startDirectingToStorageManagement;
- (void)stopDirectingToStorageManagement;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffer;
- (void)teardownCachedOffers;
- (void)teardownOffersForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(id /* block */)arg5;
- (bool)useHysteresisForDeviceStorageAlmostFull;

@end
