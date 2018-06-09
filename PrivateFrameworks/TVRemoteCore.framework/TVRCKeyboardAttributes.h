/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCKeyboardAttributes : NSObject <NSSecureCoding> {
    TVRCPINEntryAttributes * _PINEntryAttributes;
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    bool  _enablesReturnKeyAutomatically;
    long long  _keyboardType;
    bool  _likelyPINEntry;
    NSString * _prompt;
    long long  _returnKeyType;
    RTIDataPayload * _rtiDataPayload;
    bool  _secure;
    long long  _spellCheckingType;
    NSString * _title;
}

@property (nonatomic, retain) TVRCPINEntryAttributes *PINEntryAttributes;
@property (getter=_autocapitalizationType, setter=_setAutocapitalizationType:, nonatomic) long long autocapitalizationType;
@property (getter=_autocorrectionType, setter=_setAutocorrectionType:, nonatomic) long long autocorrectionType;
@property (getter=_enablesReturnKeyAutomatically, setter=_setEnablesReturnKeyAutomatically:, nonatomic) bool enablesReturnKeyAutomatically;
@property (getter=_keyboardType, setter=_setKeyboardType:, nonatomic) long long keyboardType;
@property (getter=_isLikelyPINEntry, setter=_setLikelyPINEntry:, nonatomic) bool likelyPINEntry;
@property (nonatomic, copy) NSString *prompt;
@property (getter=_returnKeyType, setter=_setReturnKeyType:, nonatomic) long long returnKeyType;
@property (nonatomic, retain) RTIDataPayload *rtiDataPayload;
@property (getter=_isSecure, setter=_setSecure:, nonatomic) bool secure;
@property (getter=_spellCheckingType, setter=_setSpellCheckingType:, nonatomic) long long spellCheckingType;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PINEntryAttributes;
- (long long)_autocapitalizationType;
- (long long)_autocorrectionType;
- (bool)_enablesReturnKeyAutomatically;
- (id)_init;
- (bool)_isLikelyPINEntry;
- (bool)_isSecure;
- (long long)_keyboardType;
- (long long)_returnKeyType;
- (void)_setAutocapitalizationType:(long long)arg1;
- (void)_setAutocorrectionType:(long long)arg1;
- (void)_setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)_setKeyboardType:(long long)arg1;
- (void)_setLikelyPINEntry:(bool)arg1;
- (void)_setReturnKeyType:(long long)arg1;
- (void)_setSecure:(bool)arg1;
- (void)_setSpellCheckingType:(long long)arg1;
- (long long)_spellCheckingType;
- (void)applyToTextField:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributes:(id)arg1;
- (id)prompt;
- (id)rtiDataPayload;
- (void)setPINEntryAttributes:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRtiDataPayload:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
