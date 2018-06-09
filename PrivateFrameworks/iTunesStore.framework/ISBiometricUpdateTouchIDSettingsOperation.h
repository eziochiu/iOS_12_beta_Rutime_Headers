/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation {
    NSNumber * _accountIdentifier;
    NSString * _attestationStringExtended;
    NSString * _attestationStringPrimary;
    ISBiometricStore * _biometricStore;
    NSArray * _certChainExtended;
    NSArray * _certChainPrimary;
    bool  _regeneratePublicKey;
    id /* block */  _resultBlock;
    bool  _shouldSuppressAuthPrompts;
    long long  _status;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSString *attestationStringExtended;
@property (nonatomic, copy) NSString *attestationStringPrimary;
@property (nonatomic, retain) ISBiometricStore *biometricStore;
@property (nonatomic, copy) NSArray *certChainExtended;
@property (nonatomic, copy) NSArray *certChainPrimary;
@property bool regeneratePublicKey;
@property (copy) id /* block */ resultBlock;
@property bool shouldSuppressAuthPrompts;
@property (readonly) long long status;

- (void).cxx_destruct;
- (id)_newUpdateTouchIDSettingsOperationWithTwoKeys;
- (id)accountIdentifier;
- (id)attestationStringExtended;
- (id)attestationStringPrimary;
- (id)biometricStore;
- (id)certChainExtended;
- (id)certChainPrimary;
- (id)initWithAccountIdentifier:(id)arg1;
- (bool)regeneratePublicKey;
- (id /* block */)resultBlock;
- (void)run;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAttestationStringExtended:(id)arg1;
- (void)setAttestationStringPrimary:(id)arg1;
- (void)setBiometricStore:(id)arg1;
- (void)setCertChainExtended:(id)arg1;
- (void)setCertChainPrimary:(id)arg1;
- (void)setRegeneratePublicKey:(bool)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setShouldSuppressAuthPrompts:(bool)arg1;
- (bool)shouldSuppressAuthPrompts;
- (long long)status;

@end
