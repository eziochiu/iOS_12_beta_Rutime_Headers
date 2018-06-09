/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactQuickActionsController : NSObject <CNContactActionsControllerDelegate, CNUIUserActionListConsumer> {
    <CNCancelable> * _actionDisoveryToken;
    NSDictionary * _actionListModelsByActionType;
    NSArray * _actionTypes;
    CNContact * _contact;
    <CNContactQuickActionViewContainer> * _contactQuickActionViewContainer;
    <CNContactQuickActionsControllerDelegate> * _delegate;
    UIAlertController * _disambiguationMenuAlertController;
    CNContactActionsController * _disambiguationMenuController;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNUIUserActionContext> * _userActionContext;
    <CNUIUserActionListDataSource> * _userActionListDataSource;
}

@property (nonatomic, retain) <CNCancelable> *actionDisoveryToken;
@property (nonatomic, retain) NSDictionary *actionListModelsByActionType;
@property (nonatomic, readonly) NSArray *actionTypes;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) <CNContactQuickActionViewContainer> *contactQuickActionViewContainer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactQuickActionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIAlertController *disambiguationMenuAlertController;
@property (nonatomic, retain) CNContactActionsController *disambiguationMenuController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNUIUserActionContext> *userActionContext;
@property (nonatomic, readonly) <CNUIUserActionListDataSource> *userActionListDataSource;

+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void).cxx_destruct;
- (id)actionDisoveryToken;
- (id)actionListModelsByActionType;
- (id)actionTypes;
- (id)allModelsObservable;
- (void)cleanUpAfterLatestActionDiscovery;
- (id)contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (id)contactQuickActionViewContainer;
- (void)dealloc;
- (id)defaultTitleForActionType:(id)arg1;
- (id)delegate;
- (id)disambiguationMenuAlertController;
- (id)disambiguationMenuController;
- (void)discoverActions;
- (void)executeLongPressBehaviorForActionType:(id)arg1;
- (void)executeTapBehaviorForActionType:(id)arg1;
- (id)init;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 userActionListDataSource:(id)arg3 schedulerProvider:(id)arg4 userActionContext:(id)arg5;
- (void)performAction:(id)arg1;
- (void)processDiscoveredModels:(id)arg1;
- (void)reportStoredModel:(id)arg1 forActionType:(id)arg2 toQuickActionContainer:(id)arg3;
- (void)reportStoredModelsToQuickActionContainer;
- (id)schedulerProvider;
- (void)setActionDisoveryToken:(id)arg1;
- (void)setActionListModelsByActionType:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisambiguationMenuAlertController:(id)arg1;
- (void)setDisambiguationMenuController:(id)arg1;
- (void)setupDisambiguationMenuForActionType:(id)arg1;
- (void)showDisambiguationMenuForActionType:(id)arg1;
- (void)storeDiscoveredModels:(id)arg1;
- (void)tearDownDisambiguationMenu;
- (id)userActionContext;
- (id)userActionListDataSource;

@end
