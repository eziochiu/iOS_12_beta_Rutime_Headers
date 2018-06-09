/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditLocationItemManager : HFItemManager {
    HFItem * _accessControlItem;
    HFItem * _cameraItem;
    HFItem * _chooseWallpaperItem;
    unsigned long long  _context;
    HFItem * _detailNotesItem;
    HFHomeBuilder * _homeBuilder;
    HFItem * _inviteUsersItem;
    HFItem * _nameItem;
    HUUserNotificationTopicListModule * _notificationSettingsModule;
    HFItem * _removeItem;
    HFResidentDeviceItemProvider * _residentDeviceItemProvider;
    HFItem * _softwareUpdateItem;
    HFItem * _usersItem;
    HFItem * _wallpaperThumbnailItem;
}

@property (nonatomic, retain) HFItem *accessControlItem;
@property (nonatomic, retain) HFItem *cameraItem;
@property (nonatomic, retain) HFItem *chooseWallpaperItem;
@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, retain) HFItem *detailNotesItem;
@property (nonatomic, retain) HFHomeBuilder *homeBuilder;
@property (nonatomic, retain) HFItem *inviteUsersItem;
@property (nonatomic, retain) HFItem *nameItem;
@property (nonatomic, retain) HUUserNotificationTopicListModule *notificationSettingsModule;
@property (nonatomic, retain) HFItem *removeItem;
@property (nonatomic, retain) HFResidentDeviceItemProvider *residentDeviceItemProvider;
@property (nonatomic, retain) HFItem *softwareUpdateItem;
@property (nonatomic, retain) HFItem *usersItem;
@property (nonatomic, retain) HFItem *wallpaperThumbnailItem;

+ (id /* block */)residentDeviceItemComparator;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)arg1;
- (id)accessControlItem;
- (id)cameraItem;
- (id)chooseWallpaperItem;
- (unsigned long long)context;
- (id)detailNotesItem;
- (id)homeBuilder;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 context:(unsigned long long)arg3;
- (id)inviteUsersItem;
- (id)nameItem;
- (id)notificationSettingsModule;
- (id)removeItem;
- (id)residentDeviceItemProvider;
- (void)setAccessControlItem:(id)arg1;
- (void)setCameraItem:(id)arg1;
- (void)setChooseWallpaperItem:(id)arg1;
- (void)setDetailNotesItem:(id)arg1;
- (void)setHomeBuilder:(id)arg1;
- (void)setInviteUsersItem:(id)arg1;
- (void)setNameItem:(id)arg1;
- (void)setNotificationSettingsModule:(id)arg1;
- (void)setRemoveItem:(id)arg1;
- (void)setResidentDeviceItemProvider:(id)arg1;
- (void)setSoftwareUpdateItem:(id)arg1;
- (void)setUsersItem:(id)arg1;
- (void)setWallpaperThumbnailItem:(id)arg1;
- (id)softwareUpdateItem;
- (id)usersItem;
- (id)wallpaperThumbnailItem;

@end
