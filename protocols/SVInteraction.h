/* made by EzioChiu.
 */

@protocol SVInteraction <NSObject>

@required

- (id /* block */)interactionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVInteractionContext> *, void*, id, SEL
- (void)uponInteraction:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVInteractionContext> *, void*

@end
