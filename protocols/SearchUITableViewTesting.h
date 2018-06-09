/* made by EzioChiu.
 */

@protocol SearchUITableViewTesting <NSObject>

@required

- (id /* block */)cellWillDisplayHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSString *, NSString *, void*, id, SEL
- (SearchUITableModel *)currentTableModel;
- (UINavigationController *)navigationController;
- (void)performScrollTestWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setCellWillDisplayHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*
- (void)setTableViewDidUpdateHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchUITableModel *, void*
- (void)setTableViewWillUpdateHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchUITableModel *, void*
- (id /* block */)tableViewDidUpdateHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SearchUITableModel *, void*, id, SEL
- (id /* block */)tableViewWillUpdateHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SearchUITableModel *, void*, id, SEL
- (void)tapAtIndexPath:(NSIndexPath *)arg1;

@end
