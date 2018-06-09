/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol> {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (id)_proxyObject;
- (void)dealloc;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)getCredentialProviderExtensionStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;

@end
