/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup> {
    PSUICellularPlanManagerCache * _cellularPlanManager;
    CTCellularPlanManager * _ctCellularPlanManager;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)carrierItemPressed:(id)arg1;
- (bool)hasCarrierItems;
- (id)init;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;
- (id)listController;
- (void)setListController:(id)arg1;
- (id)specifiers;
- (id)specifiersForCarrierItems;

@end
