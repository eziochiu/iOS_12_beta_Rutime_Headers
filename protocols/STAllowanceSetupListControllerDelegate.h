/* made by EzioChiu.
 */

@protocol STAllowanceSetupListControllerDelegate <NSObject>

@required

- (void)allowanceSetupListController:(STAllowanceSetupListController *)arg1 didSelectAllowanceCategories:(NSArray *)arg2;
- (void)allowanceSetupListControllerDidCancel:(STAllowanceSetupListController *)arg1;

@end
