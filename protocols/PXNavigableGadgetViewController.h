/* made by EzioChiu.
 */

@protocol PXNavigableGadgetViewController <NSObject>

@required

- (bool)navigateToFirstGadgetWithType:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)navigateToFirstGadgetWithTypeDeferIfNeeded:(void *)arg1 animated:(void *)arg2 nestedNavigationBlock:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXGadget> *, void*
- (bool)navigateToGadget:(id <PXGadget>)arg1 animated:(bool)arg2;
- (bool)navigateToGadgetWithIdDeferIfNeeded:(void *)arg1 animated:(void *)arg2 nestingNavigationBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXGadget> *, void*

@end
