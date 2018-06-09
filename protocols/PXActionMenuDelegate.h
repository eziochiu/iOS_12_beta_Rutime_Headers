/* made by EzioChiu.
 */

@protocol PXActionMenuDelegate <NSObject>

@required

- (bool)actionMenu:(void *)arg1 dismissViewController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: PXActionMenuController *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)actionMenu:(PXActionMenuController *)arg1 presentViewController:(UIViewController *)arg2;

@optional

- (void)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 didChangeState:(unsigned long long)arg3;

@end
