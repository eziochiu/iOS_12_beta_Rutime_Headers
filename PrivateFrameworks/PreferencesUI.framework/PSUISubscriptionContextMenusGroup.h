/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISubscriptionContextMenusGroup : NSObject <PSSpecifierGroup> {
    PSUICallingSubgroup * _callingSubgroup;
    PSUICarrierSpaceGroup * _carrierSpaceSubgroup;
    CTCellularPlanItem * _cellularPlanItem;
    CTCellularPlanManager * _cellularPlanManager;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    PSUINetworkAndSIMSubgroup * _networkAndSIMSubgroup;
    PSSpecifier * _parentSpecifier;
    PSUICellularPlanManagerCache * _planManagerCache;
    bool  _popViewControllerOnPlanDeletion;
    PSSimStatusCache * _simStatusCache;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (nonatomic, retain) PSUICallingSubgroup *callingSubgroup;
@property (nonatomic, retain) PSUICarrierSpaceGroup *carrierSpaceSubgroup;
@property (nonatomic, retain) CTCellularPlanItem *cellularPlanItem;
@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) PSUINetworkAndSIMSubgroup *networkAndSIMSubgroup;
@property (nonatomic) PSSpecifier *parentSpecifier;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic) bool popViewControllerOnPlanDeletion;
@property (nonatomic, retain) PSSimStatusCache *simStatusCache;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callingSubgroup;
- (id)carrierSpaceSubgroup;
- (id)cellularPlanItem;
- (id)cellularPlanManager;
- (id)groupSpecifier;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 callingSubgroup:(id)arg4 carrierSpaceSubgroup:(id)arg5 networkAndSIMSubgroup:(id)arg6 simStatusCache:(id)arg7 planManagerCache:(id)arg8 cellularPlanManager:(id)arg9 popViewControllerOnPlanDeletion:(bool)arg10;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 popViewControllerOnPlanDeletion:(bool)arg4;
- (id)listController;
- (id)networkAndSIMSubgroup;
- (id)parentSpecifier;
- (id)planManagerCache;
- (bool)popViewControllerOnPlanDeletion;
- (void)setCallingSubgroup:(id)arg1;
- (void)setCarrierSpaceSubgroup:(id)arg1;
- (void)setCellularPlanItem:(id)arg1;
- (void)setCellularPlanManager:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setNetworkAndSIMSubgroup:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPopViewControllerOnPlanDeletion:(bool)arg1;
- (void)setSimStatusCache:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (id)simStatusCache;
- (id)specifiers;
- (id)subscriptionContext;
- (void)viewWillAppear;

@end
