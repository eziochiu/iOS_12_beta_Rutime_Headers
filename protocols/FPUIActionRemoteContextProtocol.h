/* made by EzioChiu.
 */

@protocol FPUIActionRemoteContextProtocol <NSObject>

@required

- (void)_cancelRequestWithError:(NSError *)arg1;
- (void)_completeRequest;
- (void)_openExtensionURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
