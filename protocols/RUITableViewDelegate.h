/* made by EzioChiu.
 */

@protocol RUITableViewDelegate

@required

- (bool)tableViewOM:(RUITableView *)arg1 deleteRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableViewOM:(void *)arg1 elementDidChange:(void *)arg2 action:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: RUITableView *, RUIElement *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)tableViewOMDidChange:(RUITableView *)arg1;
- (void)tableViewOMSubmitForm:(RUITableView *)arg1;

@end
