/* made by EzioChiu.
 */

@protocol SKStoreRemoteViewControllerDelegate <NSObject>

@required

- (void)storeRemoteViewController:(SKStoreRemoteViewController *)arg1 presentRequestedViewControllerWithIdentifier:(NSString *)arg2;
- (void)storeRemoteViewControllerNeedsTabSelection:(SKStoreRemoteViewController *)arg1;

@optional

- (void)storeRemoteViewControllerTerminatedWithError:(NSError *)arg1;

@end
