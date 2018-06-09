/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDOpenClient : _LSDClient <_LSDOpenProtocol>

- (void)canOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)failedToOpenApplication:(id)arg1 withURL:(id)arg2;
- (void)getAppLinkOpenStrategyForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getURLOverrideForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getiCloudHostNamesWithCompletionHandler:(id /* block */)arg1;
- (void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openApplicationWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)performOpenOperationWithURL:(id)arg1 applicationIdentifier:(id)arg2 documentIdentifier:(id)arg3 isContentManaged:(bool)arg4 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)resolveAppLinksForURL:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setAppLinkOpenStrategy:(long long)arg1 forBundleIdentifier:(id)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
