/* made by EzioChiu.
 */

@protocol PKGroupsControllerDelegate <NSObject>

@required

- (void)groupsController:(PKGroupsController *)arg1 didInsertGroup:(PKGroup *)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(PKGroupsController *)arg1 didMoveGroup:(PKGroup *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(PKGroupsController *)arg1 didRemoveGroup:(PKGroup *)arg2 atIndex:(unsigned long long)arg3;

@optional

- (NSArray *)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(PKGroupsController *)arg1;

@end
