/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAllowanceListController : PSListController <STAllowanceDetailListControllerDelegate, STAllowanceSetupListControllerDelegate> {
    PSSpecifier * _addAllowanceSpecifier;
    NSObject<STTimeAllowancesViewModelCoordinator> * _coordinator;
}

@property (nonatomic, retain) PSSpecifier *addAllowanceSpecifier;
@property (nonatomic, retain) NSObject<STTimeAllowancesViewModelCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAllowance:(id)arg1;
- (id)addAllowanceSpecifier;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)allowanceSetupListController:(id)arg1 didSelectAllowanceCategories:(id)arg2;
- (void)allowanceSetupListControllerDidCancel:(id)arg1;
- (id)budgetDetailText:(id)arg1;
- (id)budgetSpecifiers;
- (id)coordinator;
- (void)dealloc;
- (id)emptyGroupSpecifier;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAddAllowanceSpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)showBudgetDetailController:(id)arg1;
- (id)specifiers;

@end
