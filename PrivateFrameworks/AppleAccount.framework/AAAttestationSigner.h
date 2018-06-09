/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAttestationSigner : NSObject {
    NSObject<OS_dispatch_queue> * _attestationQueue;
}

+ (id)sharedSigner;

- (void).cxx_destruct;
- (void)_generateAttestationWithCertificates:(id)arg1 completion:(id /* block */)arg2;
- (void)_generateSignatureForData:(id)arg1 withReferenceKey:(struct __SecKey { }*)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
