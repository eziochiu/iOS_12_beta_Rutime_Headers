/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUZoneModuleController : HUItemTableModuleController <UITextFieldDelegate> {
    HUEditableTextCell * _createNewZoneCell;
    HUTitleValueCell * _currentZoneItemCell;
    HMRoom * _room;
}

@property (nonatomic) HUEditableTextCell *createNewZoneCell;
@property (nonatomic) HUTitleValueCell *currentZoneItemCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFZoneModule *module;
@property (nonatomic, retain) HMRoom *room;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCreateNewZoneItem:(id)arg1 forCell:(id)arg2 animated:(bool)arg3;
- (void)_configureCurrentZonesItem:(id)arg1 forCell:(id)arg2 animated:(bool)arg3;
- (void)_configureZoneBuilderItem:(id)arg1 forCell:(id)arg2 animated:(bool)arg3;
- (void)_configureZoneItem:(id)arg1 forCell:(id)arg2 animated:(bool)arg3;
- (id)_createNewZoneWithName:(id)arg1;
- (id)_didSelectZoneBuilderItem:(id)arg1;
- (id)_didSelectZoneItem:(id)arg1;
- (void)_updateCreateNewZoneCellText:(bool)arg1;
- (bool)_validateNewZoneName:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)createNewZoneCell;
- (id)currentZoneItemCell;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)finishZoneNameEditing;
- (id)initWithModule:(id)arg1 room:(id)arg2;
- (id)room;
- (void)setCreateNewZoneCell:(id)arg1;
- (void)setCurrentZoneItemCell:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
