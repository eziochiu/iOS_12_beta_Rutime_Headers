/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFCredentialStore : NSObject {
    id  _credentialStoreInternal;
    <NSXPCProxyCreating> * _serverConnection;
    NSError * _serverError;
}

+ (id)_serverConnectionWithError:(id*)arg1;
+ (id)defaultCredentialStore;

- (void).cxx_destruct;
- (id)_init;
- (void)addCredential:(id)arg1 withAccessPolicy:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)fetchPasswordCredentialForPersistentIdentifier:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)lookupCredentialsForServiceIdentifiers:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)removeCredentialWithPersistentIdentifier:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)replaceOldCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)serverProxyWithBooleanHandler:(id /* block */)arg1;
- (id)serverProxyWithDualResultHandler:(id /* block */)arg1;
- (id)serverProxyWithResultHandler:(id /* block */)arg1;

@end
