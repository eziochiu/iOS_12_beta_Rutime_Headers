/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPRecoveryKeyValidatorProxyImpl : NSObject <CDPRecoveryKeyValidator> {
    <CDPRecoveryKeyValidator> * _validator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)confirmRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (bool)confirmRecoveryKey:(id)arg1 error:(id*)arg2;
- (void)generateRecoveryKey:(id /* block */)arg1;
- (id)generateRecoveryKeyWithError:(id*)arg1;
- (id)initWithRemoteObject:(id)arg1;

@end
