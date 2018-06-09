/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMDeviceIdentity : NSObject

+ (id)identityWithServerCapabilities:(id)arg1 identityPersistentID:(id)arg2 error:(id*)arg3;

- (void)deviceIdentityWithCompletion:(id /* block */)arg1;
- (void)signData:(id)arg1 detachedSignature:(bool)arg2 completion:(id /* block */)arg3;
- (void)signPropertyList:(id)arg1 detachedSignature:(bool)arg2 completion:(id /* block */)arg3;
- (bool)validateIdentityForServer:(struct __SecTrust { }*)arg1;

@end
