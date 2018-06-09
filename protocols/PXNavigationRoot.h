/* made by EzioChiu.
 */

@protocol PXNavigationRoot <NSObject>

@required

- (UINavigationController *)navigationController;
- (UIBarButtonItem *)navigationDisplayModeButtonItem;
- (NSString *)navigationIdentifier;
- (NSString *)navigationTitle;
- (void)setNavigationDisplayModeButtonItem:(UIBarButtonItem *)arg1;

@optional

- (bool)canProcessNavigationListItem:(id <PXNavigationListItem>)arg1;
- (PXNavigationListDataSourceManager *)navigationListDataSourceManager;
- (void)processNavigationListItem:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <PXNavigationListItem> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
