/* made by EzioChiu.
 */

@protocol SUClientInterfaceDelegatePrivate <SUClientInterfaceDelegate>

@optional

- (void)clientInterface:(void *)arg1 dismissSafariViewControllerAnimated:(void *)arg2 fromViewController:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SUClientInterface *, bool, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clientInterface:(void *)arg1 dismissViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SUClientInterface *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clientInterface:(SUClientInterface *)arg1 dispatchOnPageResponseWithData:(NSData *)arg2 response:(NSHTTPURLResponse *)arg3;
- (void)clientInterface:(void *)arg1 dispatchXEvent:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: SUClientInterface *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)clientInterface:(SUClientInterface *)arg1 isAllowedToOpenExternalURL:(NSURL *)arg2;
- (void)clientInterface:(void *)arg1 presentSafariViewControllerWithURL:(void *)arg2 fromViewController:(void *)arg3 animated:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: SUClientInterface *, NSURL *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clientInterface:(SUClientInterface *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 willPresentViewController:(UIViewController *)arg2;

@end
