/* made by EzioChiu.
 */

@protocol _SFSafeBrowsingWebProcessController <NSObject>

@required

- (void)safeBrowsingCheckFinishedWithSecurityInfo:(_SFSecurityInfo *)arg1 canGoBack:(bool)arg2 localizedStrings:(NSDictionary *)arg3;
- (void)safeBrowsingDatabaseDidUpdate;
- (void)urlPassedSafeBrowsingCheck:(NSURL *)arg1 canCache:(bool)arg2;

@end
