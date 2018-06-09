/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INAppTrust : NSObject

+ (bool)_appRequiresExplicitTrust:(id)arg1 withExplicitAppTrustCache:(id)arg2;
+ (bool)_shouldTrustAppForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2;
+ (bool)_shouldTrustExtensionForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2;
+ (id)appsTrustedForLaunch:(id)arg1;
+ (id)extensionsTrustedForLaunch:(id)arg1;
+ (bool)shouldTrustAppForLaunch:(id)arg1;
+ (bool)shouldTrustExtensionForLaunch:(id)arg1;

@end
