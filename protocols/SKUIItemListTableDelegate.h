/* made by EzioChiu.
 */

@protocol SKUIItemListTableDelegate <NSObject>

@optional

- (bool)itemList:(SKUIItemListTableViewController *)arg1 canRemoveItemAtIndexPath:(NSIndexPath *)arg2;
- (SKUIItemState *)itemList:(SKUIItemListTableViewController *)arg1 didConfirmItemOfferForItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemList:(SKUIItemListTableViewController *)arg1 didDeselectItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemList:(SKUIItemListTableViewController *)arg1 didRemoveItemAtIndexPath:(NSIndexPath *)arg2;
- (void)itemList:(SKUIItemListTableViewController *)arg1 didSelectItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSString *)itemList:(SKUIItemListTableViewController *)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)itemList:(SKUIItemListTableViewController *)arg1 willDisplayCellForItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemListWillBeginDragging:(SKUIItemListTableViewController *)arg1;

@end
