/* made by EzioChiu.
 */

@protocol CKBrowserViewControllerStoreSendDelegate <CKBrowserViewControllerSendDelegate>

@required

- (void)didBeginInstallingAppWithBundleIdentifier:(NSString *)arg1;

@optional

- (void)openAppExtensionWithAdamID:(NSNumber *)arg1;

@end
