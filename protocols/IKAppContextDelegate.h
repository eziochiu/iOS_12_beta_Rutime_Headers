/* made by EzioChiu.
 */

@protocol IKAppContextDelegate <NSObject>

@required

- (<IKAppDeviceConfig> *)deviceConfigForContext:(IKAppContext *)arg1;

@optional

- (void)appContext:(IKAppContext *)arg1 didFailWithError:(NSError *)arg2;
- (void)appContext:(IKAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2;
- (void)appContext:(IKAppContext *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appContext:(IKAppContext *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
- (void)appContext:(IKAppContext *)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
- (void)appContext:(IKAppContext *)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(NSDictionary *)arg3;
- (bool)appContext:(IKAppContext *)arg1 validateDOMDocument:(IKDOMDocument *)arg2 inContext:(JSContext *)arg3 error:(id*)arg4;
- (<IKAppNavigationController> *)modalControllerForContext:(IKAppContext *)arg1;
- (<IKAppNavigationController> *)navigationControllerForContext:(IKAppContext *)arg1;
- (<IKAppMediaItem> *)objectForMediaItem:(IKAppMediaItemBridge *)arg1;
- (<IKAppPlayer> *)objectForPlayer:(IKAppPlayerBridge *)arg1;
- (<IKAppPlaylist> *)objectForPlaylist:(IKAppPlaylistBridge *)arg1;
- (NSData *)sourceApplicationAuditTokenDataForContext:(IKAppContext *)arg1;
- (NSString *)sourceApplicationBundleIdentifierForContext:(IKAppContext *)arg1;
- (IKAppTabBar *)tabBarForContext:(IKAppContext *)arg1;
- (NSURLSessionConfiguration *)xhrSessionConfigurationForContext:(IKAppContext *)arg1;

@end
