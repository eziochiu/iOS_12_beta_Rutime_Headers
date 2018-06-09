/* made by EzioChiu.
 */

@protocol _UIBarButtonItemViewOwner <NSObject>

@required

- (void)_itemCustomViewDidChange:(UIBarButtonItem *)arg1 fromView:(UIView *)arg2;
- (void)_itemDidChangeHiddenState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeSelectionState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeWidth:(UIBarButtonItem *)arg1;
- (void)_itemStandardViewNeedsUpdate:(UIBarButtonItem *)arg1;

@end
