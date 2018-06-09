/* made by EzioChiu.
 */

@protocol RPBroadcastActivityCommunicationHostProtocol

@required

- (oneway void)extensionDidFinishWithLaunchURL:(NSURL *)arg1 broadcastURL:(NSURL *)arg2 extensionBundleID:(NSString *)arg3 broadcastConfigurationData:(NSData *)arg4 userInfo:(NSDictionary *)arg5 cancelled:(bool)arg6;
- (oneway void)extensionDidFinishWithLaunchURL:(NSURL *)arg1 broadcastURL:(NSURL *)arg2 extensionBundleID:(NSString *)arg3 cancelled:(bool)arg4;
- (oneway void)presentationInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, unsigned long long, void*

@end
