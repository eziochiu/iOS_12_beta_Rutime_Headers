/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLNotificationUNCenter : NSObject {
    NSMutableDictionary * _currentNotificationsInUNC;
    <PLNotificationUNCenterDelegate> * _delegate;
    UNUserNotificationCenter * _unc;
}

@property (nonatomic) <PLNotificationUNCenterDelegate> *delegate;

+ (id)_UNCategoryFromNotificationType:(long long)arg1;
+ (id)_UNNotificationInitialize;
+ (id)_UNRequestIdentifierForCategory:(id)arg1 keyObjectUUID:(id)arg2;
+ (id)_UNRequestIdentifierForNotification:(id)arg1;
+ (id)_categoryIdentifierForNotification:(id)arg1;
+ (id)_contentUserInfoForNotification:(id)arg1;
+ (id)_expiringCMMCategory;
+ (id)_invitationsCategoryWithJunkAction:(bool)arg1;
+ (id)_readyToViewInvitationCMMCategory;
+ (id)_soundForNotification:(id)arg1;
+ (id)_suggestedCMMCategory;
+ (id)_topicIdentifiersForNotificationType:(long long)arg1;
+ (id)_updatesCategory;
+ (id)_updatesCommentedCategory;
+ (id)_updatesLikedCategory;

- (void).cxx_destruct;
- (id)_makeTempThumbnailFileForNotification:(id)arg1;
- (id)_notificationContentWithNotification:(id)arg1 withImageURL:(id)arg2 sound:(bool)arg3;
- (void)_updateAppBadge;
- (id)delegate;
- (id)existingNotificationForKeyObjectUUID:(id)arg1 inType:(long long)arg2;
- (id)existingNotificationForNotification:(id)arg1;
- (id)existingNotifications;
- (id)existingNotificationsForKeyObjectUUID:(id)arg1 inTypes:(id)arg2;
- (id)init;
- (void)removeAllNotifications;
- (void)removeNotificationsForNotifications:(id)arg1;
- (void)sendNotificationForNotification:(id)arg1;
- (void)sendNotificationForNotification:(id)arg1 withAttachmentURL:(id)arg2 forceToSound:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)updateBadgeCountWithDelay:(unsigned long long)arg1;
- (void)updateNotificationWithNotification:(id)arg1 imageData:(id)arg2;

@end
