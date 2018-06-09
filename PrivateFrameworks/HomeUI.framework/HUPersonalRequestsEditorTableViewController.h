/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUPersonalRequestsDevicesModuleControllerDelegate> {
    HUPersonalRequestsDevicesModuleController * _prDevicesModuleController;
    HUPersonalRequestsEditorItemManager * _prEditorItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (nonatomic, retain) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)devicesModuleController:(id)arg1 presentViewController:(id)arg2;
- (id)initWithUserItem:(id)arg1;
- (id)initWithUserItem:(id)arg1 sourceMediaProfileContainer:(id)arg2;
- (id)itemModuleControllers;
- (id)prDevicesModuleController;
- (id)prEditorItemManager;
- (void)setPrEditorItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
