/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUStatusAndNotificationsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate> {
    HUTriggerConditionEditorItemModuleController * _conditionModuleController;
    HFItem<HFServiceLikeItem> * _item;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *item;
@property (nonatomic, readonly) HUStatusAndNotificationsItemManager *itemManager;
@property (nonatomic) bool showStatusSection;
@property (readonly) Class superclass;
@property (nonatomic) bool useServiceNameAsTitle;

- (void).cxx_destruct;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 didUpdateConditionCollection:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (id)conditionModuleController;
- (id)initWithServiceItem:(id)arg1 home:(id)arg2;
- (id)item;
- (id)itemModuleControllers;
- (void)setItem:(id)arg1;
- (void)setShowStatusSection:(bool)arg1;
- (void)setUseServiceNameAsTitle:(bool)arg1;
- (bool)showStatusSection;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (bool)useServiceNameAsTitle;

@end
