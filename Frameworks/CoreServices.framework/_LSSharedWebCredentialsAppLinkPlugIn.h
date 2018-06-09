/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn

- (bool)appHasApproval:(id)arg1;
- (id)appLinksForSWCResults:(id)arg1 useDetailsDictionary:(bool)arg2;
- (id)applicationProxiesForSWCResults:(id)arg1 useDetailsDictionary:(bool)arg2;
- (id)callingBundleIdentifier;
- (void)getAppLinksForServiceAtIndex:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getAppLinksWithCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
