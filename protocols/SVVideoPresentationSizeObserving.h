/* made by EzioChiu.
 */

@protocol SVVideoPresentationSizeObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoPresentationSizeObserving> *, void*, id, SEL
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoPresentationSizeObserving> *, void*
- (struct CGSize { double x1; double x2; })presentationSize;

@end
