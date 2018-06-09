/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUStatusAndNotificationsItemManager : HFItemManager {
    HFStaticItem * _allowNotificationsItem;
    HUTriggerConditionEditorItemModule * _conditionModule;
    HFStaticItem * _includeInStatusItem;
    HFItem<HFServiceLikeItem> * _serviceItem;
    bool  _showStatusSection;
}

@property (nonatomic, retain) HFStaticItem *allowNotificationsItem;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionModule;
@property (nonatomic, retain) HFStaticItem *includeInStatusItem;
@property (nonatomic, readonly) HFUserNotificationServiceSettings *notificationSettings;
@property (nonatomic, readonly) <HFUserNotificationServiceSettingsProviding> *notificationSettingsProvider;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceItem;
@property (nonatomic) bool showStatusSection;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_updateNotificationSettings:(id)arg1;
- (id)allowNotificationsItem;
- (id)conditionModule;
- (id)homeStatusVisibleObject;
- (id)includeInStatusItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithServiceItem:(id)arg1 delegate:(id)arg2 home:(id)arg3;
- (id)notificationSettings;
- (id)notificationSettingsProvider;
- (id)serviceItem;
- (void)setAllowNotificationsItem:(id)arg1;
- (void)setIncludeInStatusItem:(id)arg1;
- (void)setShowStatusSection:(bool)arg1;
- (bool)showStatusSection;
- (id)updateAllowNotifications:(bool)arg1;
- (id)updateNotificationCondition:(id)arg1;

@end
