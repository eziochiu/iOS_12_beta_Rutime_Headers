/* made by EzioChiu.
 */

@protocol INCExtensionProxy

@required

- (void)confirmIntentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, INCExtensionError *, void*
- (void)handleIntentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, INCExtensionError *, void*
- (void)resolveIntentSlotKeyPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)resolveIntentSlotKeyPaths:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, INIntent *, NSDictionary *, void*

@optional

- (id /* block */)backgroundAppHandler:(void *)arg1; // needs 1 arg types, found 12: id /* block */, NSString *, id /* block */, void*, void, id /* block */, INIntentResponse *, NSError *, void*, void*, id, SEL
- (void)setBackgroundAppHandler:(void *)arg1; // needs 1 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, id /* block */, void*, void, id /* block */, INIntentResponse *, NSError *, void*, void*

@end
