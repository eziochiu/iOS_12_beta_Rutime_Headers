/* made by EzioChiu.
 */

@protocol WKWebProcessPlugIn <NSObject>

@optional

- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 didCreateBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg2;
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 initializeWithObject:(id)arg2;
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 willDestroyBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg2;

@end
