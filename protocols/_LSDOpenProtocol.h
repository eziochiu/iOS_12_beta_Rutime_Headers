/* made by EzioChiu.
 */

@protocol _LSDOpenProtocol

@required

- (void)canOpenURL:(void *)arg1 publicSchemes:(void *)arg2 privateSchemes:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURL *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)failedToOpenApplication:(NSString *)arg1 withURL:(NSURL *)arg2;
- (void)getAppLinkOpenStrategyForBundleIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, long long, NSError *, void*
- (void)getURLOverrideForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)getiCloudHostNamesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)openAppLink:(void *)arg1 state:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: LSAppLink *, _LSAppLinkOpenState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openApplicationWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openURL:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openUserActivityWithUniqueIdentifier:(void *)arg1 activityData:(void *)arg2 activityType:(void *)arg3 bundleIdentifier:(void *)arg4 options:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSUUID *, NSData *, NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performOpenOperationWithURL:(void *)arg1 applicationIdentifier:(void *)arg2 documentIdentifier:(void *)arg3 isContentManaged:(void *)arg4 sourceAuditToken:(void *)arg5 userInfo:(void *)arg6 options:(void *)arg7 delegate:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 15: NSURL *, NSString *, NSString *, bool, const struct { unsigned int x1[8]; }*, NSDictionary *, NSDictionary *, <LSOpenResourceOperationDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resolveAppLinksForURL:(void *)arg1 limit:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setAppLinkOpenStrategy:(long long)arg1 forBundleIdentifier:(NSString *)arg2;

@end
