/* made by EzioChiu.
 */

@protocol ADSession_RPC

@required

- (void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(NSString *)arg1;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(ADAdImpressionPublicAttributes *)arg1 identifier:(NSString *)arg2;
- (void)_remote_adImpressionReportedWithIdentifier:(NSString *)arg1;
- (void)_remote_closeClientAdSpaceWithIdentifier:(NSString *)arg1;
- (void)_remote_configVersionDidChange:(NSString *)arg1;
- (void)_remote_contentProxyURLConnectDidChange:(NSURL *)arg1;
- (void)_remote_contentProxyURLDidChange:(NSURL *)arg1;
- (void)_remote_creativeWithAdSpaceIdentifier:(NSString *)arg1 didFailWithError:(NSError *)arg2;
- (void)_remote_deviceInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ADDeviceInfo *, void*
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(NSString *)arg1;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_remote_openURL:(NSURL *)arg1 forAdSpaceWithIdentifier:(NSString *)arg2;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_proxyTypeDidChange:(long long)arg1;
- (void)_remote_requestViewControllerWithClassName:(NSString *)arg1 forAdSpaceControllerWithIdentifier:(NSString *)arg2 forAdSpaceWithIdentifier:(NSString *)arg3;
- (void)_remote_setRequiresFastVisibilityTestOnly:(bool)arg1 withIdentifier:(NSString *)arg2;

@end
