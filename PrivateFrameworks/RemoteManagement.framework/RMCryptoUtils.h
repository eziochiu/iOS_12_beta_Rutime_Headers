/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCryptoUtils : NSObject

+ (id)signData:(id)arg1 withIdentity:(struct __SecIdentity { }*)arg2 withAdditionalCertificates:(id)arg3 detachedSignature:(bool)arg4 error:(id*)arg5;
+ (id)signPropertyList:(id)arg1 withIdentity:(struct __SecIdentity { }*)arg2 withAdditionalCertificates:(id)arg3 detachedSignature:(bool)arg4 error:(id*)arg5;

@end
