/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal> {
    <CDPAuthProviderInternal> * _authProvider;
    CDPContext * _context;
    NSDictionary * _recoveredInfo;
    NSString * _recoveryKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *recoveredInfo;
@property (nonatomic, copy) NSString *recoveryKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cdpErrorFromAuthKitError:(id)arg1;
- (void)confirmRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRecoveryKey:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 authProvider:(id)arg2;
- (id)recoveredInfo;
- (id)recoveryKey;
- (void)setRecoveredInfo:(id)arg1;
- (void)setRecoveryKey:(id)arg1;

@end
