/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFExternalCredentialIdentityStoreManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_credentialIdentityStoreForBundleIdentifier:(id)arg1;
- (void)getCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getPrimaryCredentialIdentityStoreWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)removeCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
