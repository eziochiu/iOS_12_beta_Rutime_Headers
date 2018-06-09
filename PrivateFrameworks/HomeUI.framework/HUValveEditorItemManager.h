/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUValveEditorItemManager : HFItemManager <HUControlPanelControllerDelegate> {
    HUControlPanelController * _controlPanelController;
    HFControlPanelItemProvider * _controlPanelItemProvider;
    unsigned long long  _editorMode;
    HFStaticItem * _identifyItem;
    HFItem * _nameItem;
    HFServiceBuilder * _serviceBuilder;
    HFValveServiceItem * _sourceValveItem;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, retain) HUControlPanelController *controlPanelController;
@property (nonatomic, retain) HFControlPanelItemProvider *controlPanelItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long editorMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFStaticItem *identifyItem;
@property (nonatomic, retain) HFItem *nameItem;
@property (nonatomic, retain) HFServiceBuilder *serviceBuilder;
@property (nonatomic, retain) HFValveServiceItem *sourceValveItem;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (readonly) Class superclass;

+ (id)preferredSectionSortArray;
+ (id /* block */)sortComparatorForValveEditorSections;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_characteristicTypesForControlPanelItem:(id)arg1;
- (id)_characteristicsAffectedByControlItem:(id)arg1;
- (id)controlPanelController;
- (void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2;
- (void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2;
- (id)controlPanelItemProvider;
- (unsigned long long)editorMode;
- (id)identifyItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 editorMode:(unsigned long long)arg3;
- (id)nameItem;
- (id)serviceBuilder;
- (void)setControlPanelController:(id)arg1;
- (void)setControlPanelItemProvider:(id)arg1;
- (void)setIdentifyItem:(id)arg1;
- (void)setNameItem:(id)arg1;
- (void)setServiceBuilder:(id)arg1;
- (void)setSourceValveItem:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)sourceValveItem;
- (id)staticItemProvider;

@end
