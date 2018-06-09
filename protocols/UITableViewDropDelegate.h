/* made by EzioChiu.
 */

@protocol UITableViewDropDelegate <NSObject>

@required

- (void)tableView:(UITableView *)arg1 performDropWithCoordinator:(id <UITableViewDropCoordinator>)arg2;

@optional

- (bool)tableView:(UITableView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
- (UIDragPreviewParameters *)tableView:(UITableView *)arg1 dropPreviewParametersForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)tableView:(UITableView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)tableView:(UITableView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UITableViewDropProposal *)tableView:(UITableView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;

@end
