/* made by EzioChiu.
 */

@protocol CNUIUserActionListDataSource <NSObject>

@required

+ (NSArray *)allActionTypes;
+ (NSArray *)allSupportedActionTypes;
+ (NSArray *)allSupportedActionTypesWithCapabilities:(id <CNCapabilities>)arg1;

- (NSArray *)actionTypesForConsumer:(id <CNUIUserActionListConsumer>)arg1;
- (CNObservable *)consumer:(id <CNUIUserActionListConsumer>)arg1 actionModelsForActionType:(NSString *)arg2;
- (<CNCancelable> *)consumer:(void *)arg1 actionModelsForActionType:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: <CNUIUserActionListConsumer> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNUIUserActionListModel *, void*
- (UIImage *)consumer:(id <CNUIUserActionListConsumer>)arg1 imageForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedButtonDisplayNameForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForButtonWithDefaultAction:(CNUIUserActionItem *)arg2 actionType:(NSString *)arg3;
- (void)setContact:(CNContact *)arg1;
- (void)setTracksChanges:(bool)arg1;
- (CNFuture *)thirdPartyActionsForContactProperty:(CNContactProperty *)arg1;
- (CNFuture *)thirdPartyActionsForCurrentContactAndPropertyKey:(NSString *)arg1 identifier:(NSString *)arg2;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (bool)tracksChanges;

@end