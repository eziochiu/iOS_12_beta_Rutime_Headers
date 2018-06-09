/* made by EzioChiu.
 */

@protocol APUILongLookViewControllerDataSource

@required

- (NSString *)bundleIdentifierForAppIconInLongLook:(APUILongLookViewController *)arg1;
- (bool)fetchViewControllerForContentViewInLongLook:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: APUILongLookViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (NSArray *)interfaceActionsForLongLook:(APUILongLookViewController *)arg1;
- (double)preferredContentHeightForLongLook:(APUILongLookViewController *)arg1;
- (NSString *)titleForLongLookHeaderInLongLook:(APUILongLookViewController *)arg1;

@end
