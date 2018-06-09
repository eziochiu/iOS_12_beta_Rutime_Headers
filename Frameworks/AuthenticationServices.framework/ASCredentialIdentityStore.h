/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASCredentialIdentityStore : NSObject {
    SFCredentialProviderExtensionHelperProxy * _helperProxy;
}

+ (id)sharedStore;

- (void).cxx_destruct;
- (id)_initCredentialIdentityStore;
- (void)getCredentialIdentityStoreStateWithCompletion:(id /* block */)arg1;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;

@end
