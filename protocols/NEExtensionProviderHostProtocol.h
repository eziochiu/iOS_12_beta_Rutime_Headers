/* made by EzioChiu.
 */

@protocol NEExtensionProviderHostProtocol <NSObject>

@required

- (void)displayMessage:(void *)arg1 message:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)startedWithError:(NSError *)arg1;

@end
