/* made by EzioChiu.
 */

@protocol SVVideoViewControllerSizeObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoViewControllerSizeObserving> *, void*, id, SEL
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoViewControllerSizeObserving> *, void*
- (struct CGSize { double x1; double x2; })size;

@end
