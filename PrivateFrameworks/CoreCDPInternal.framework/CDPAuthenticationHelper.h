/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPAuthenticationHelper : NSObject

+ (id)_authContextForContext:(id)arg1;
+ (void)_authWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (id)_contextForPrimaryAccount;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (void)silentAuthenticationForContext:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(id /* block */)arg1;

@end
