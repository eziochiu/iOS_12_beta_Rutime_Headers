/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserNotificationTopicListModule : HFItemModule {
    HMHome * _home;
    HFUserNotificationServiceTopicItemProvider * _notificationTopicItemProvider;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserNotificationServiceTopicItemProvider *notificationTopicItemProvider;

+ (id)sectionID;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)notificationTopicItemProvider;
- (id)topicForItem:(id)arg1;

@end
