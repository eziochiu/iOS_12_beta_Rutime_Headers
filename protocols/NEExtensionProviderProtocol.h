/* made by EzioChiu.
 */

@protocol NEExtensionProviderProtocol <NSObject>

@required

- (void)dispose;
- (void)setConfiguration:(NEConfiguration *)arg1 extensionIdentifier:(NSString *)arg2 deviceIdentifier:(NSString *)arg3;
- (void)sleepWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopWithReason:(int)arg1;
- (void)wake;

@end
