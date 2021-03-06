/* made by EzioChiu.
 */

@protocol CNPromise <NSObject>

@required

- (id /* block */)boolErrorCompletionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 6: id /* block */, bool, NSError *, void*, id, SEL
- (id /* block */)completionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 9: id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*, id, SEL
- (id /* block */)completionHandlerAdapterWithDefaultValue:(void *)arg1; // needs 1 arg types, found 10: id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*, id, SEL, id
- (id /* block */)errorOnlyCompletionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (bool)finishWithError:(NSError *)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(NSError *)arg2;

@end
