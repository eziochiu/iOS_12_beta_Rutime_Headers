/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSettingsAuthentication : NSObject

+ (void)_authenticateForSettings:(id)arg1 allowAuthenticationReuse:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (void)authenticateForSettings:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)pushSettingsAfterAuthentication:(id)arg1 onBehalfOfViewController:(id)arg2 resourceDictionary:(id)arg3 completionHandler:(id /* block */)arg4;

@end
