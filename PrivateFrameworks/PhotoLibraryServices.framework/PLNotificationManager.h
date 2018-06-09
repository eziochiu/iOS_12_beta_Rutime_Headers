/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLNotificationManager : NSObject <PLNotificationUNCenterDelegate> {
    PLNotificationUNCenter * _UNCenter;
    void * _addressBook;
    int  _alertFiltrationEnabled;
    bool  _badgeCountIsInvalid;
    bool  _enableTemporaryDebugMode;
    NSObject<OS_dispatch_queue> * _isolationQueue;
}

@property (nonatomic, retain) PLNotificationUNCenter *UNCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bestDateForDeliveringNotificationWithError:(id*)arg1;
+ (id)_notificationDeliveryDate;
+ (struct NSObject { Class x1; }*)filteredAlbumListForContentMode:(int)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)UNCenter;
- (bool)_alertFiltrationEnabled;
- (unsigned long long)_appBadgeCount;
- (void)_deleteNotificationsForAlbumWithUUID:(id)arg1 notificationTypes:(id)arg2;
- (void)_deleteNotificationsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeNotifications:(bool)arg2 shouldDeletePhotosAddedToAlbumNotifications:(bool)arg3;
- (void)_deleteNotificationsForMemoriesWithUUID:(id)arg1 notificationTypes:(id)arg2;
- (void)_deleteNotificationsForObjectWithUUID:(id)arg1 notificationDictionaryKey:(id)arg2 notificationTypes:(id)arg3;
- (id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (id)_initSharedInstance;
- (bool)_isMyEmailAddress:(id)arg1;
- (id)_memoryNotificationFromDictionaryRepresentation:(id)arg1;
- (bool)_notificationType:(long long)arg1 matchesCommentsOrLikeNotifications:(bool)arg2 andPhotosAddedToAlbumNotifications:(bool)arg3;
- (void)_resetAlertFiltration;
- (bool)_shouldAllowAlertsFromContactWithEmail:(id)arg1;
- (void*)addressBook;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)currentAppBadgeCountForNotificationUNCenter:(id)arg1;
- (void)dealloc;
- (void)discardAllNotifications;
- (bool)enableTemporaryDebugMode;
- (void)getThumbnailImageDataAssetUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteDidDeleteSharedAlbum:(id)arg1;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteDidReceiveAssets:(id)arg1 forSharedAlbum:(id)arg2 mstreamdInfo:(id)arg3;
- (void)noteDidReceiveCMMInvitationWithMomentShare:(id)arg1;
- (void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)arg1;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)arg1;
- (void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteSharedAlbumUnseenStatusDidChange:(id)arg1;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1;
- (void)noteUserAssetsAreReadyForMomentShare:(id)arg1;
- (void)noteUserDidChangeStatusForMomentShare:(id)arg1;
- (void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)arg1;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteUserDidLeavePhotosApplication;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)arg1;
- (void)noteUserDidReadCommentOnSharedAsset:(id)arg1;
- (void)noteUserDidViewCloudFeedContent:(long long)arg1;
- (void)postNotificationForExpiringCMMsWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (void)postNotificationForInterestingMemoryWithUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)postNotificationForSuggestedCMMWithUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)removeNotificationForInterestingMemoryWithUUID:(id)arg1;
- (void)removeNotificationForSuggestedCMMWithUUID:(id)arg1;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)sendResponse:(bool)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2;
- (void)setEnableTemporaryDebugMode:(bool)arg1;
- (void)setUNCenter:(id)arg1;
- (void)triggerNotificationThumbnailUpdateForAsset:(id)arg1;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;

@end
