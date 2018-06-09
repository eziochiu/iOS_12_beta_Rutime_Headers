/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIDefaultUserActionFetcher : NSObject <CNUIDefaultUserActionFetcher> {
    CRRecentContactsLibrary * _library;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CRRecentContactsLibrary *library;
@property (readonly) Class superclass;

+ (id)defaultActionItemForActionItem:(id)arg1 recentContacts:(id)arg2;
+ (bool)doesRecentContact:(id)arg1 matchUserActionItem:(id)arg2;
+ (id)queryForUserActionItem:(id)arg1;
+ (id)recentContactsForUserActionItem:(id)arg1 recentsLibrary:(id)arg2 scheduler:(id)arg3;

- (void).cxx_destruct;
- (id)defaultActionItemForActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;
- (id)initWithRecentsLibrary:(id)arg1;
- (id)library;
- (id)observableForDefaultActionsChanged;

@end
