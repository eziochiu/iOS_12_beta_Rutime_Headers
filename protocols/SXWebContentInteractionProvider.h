/* made by EzioChiu.
 */

@protocol SXWebContentInteractionProvider <NSObject>

@required

- (<SXWebContentInteraction> *)interaction;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SXWebContentInteraction> *, void*

@end
