/* made by EzioChiu.
 */

@protocol SFBrowserRemoteViewControllerDelegate <NSObject>

@required

- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didFinishInitialLoad:(bool)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 executeCustomActivityProxyID:(NSNumber *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 fetchActivityViewControllerInfoForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 initialLoadDidRedirectToURL:(NSURL *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 setSwipeGestureEnabled:(bool)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)remoteViewControllerDidLoadWebView:(SFBrowserRemoteViewController *)arg1;
- (void)remoteViewControllerWillDismiss:(SFBrowserRemoteViewController *)arg1;

@optional

- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(bool)arg3;

@end
