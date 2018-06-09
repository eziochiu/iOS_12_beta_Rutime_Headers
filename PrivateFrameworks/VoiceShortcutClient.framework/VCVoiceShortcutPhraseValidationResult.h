/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface VCVoiceShortcutPhraseValidationResult : NSObject <NSSecureCoding> {
    NSString * _phrase;
    NSError * _validationError;
    long long  _validationState;
}

@property (nonatomic, retain) NSString *phrase;
@property (nonatomic, retain) NSError *validationError;
@property (nonatomic) long long validationState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrase:(id)arg1 validationState:(long long)arg2 validationError:(id)arg3;
- (id)phrase;
- (void)setPhrase:(id)arg1;
- (void)setValidationError:(id)arg1;
- (void)setValidationState:(long long)arg1;
- (id)validationError;
- (long long)validationState;

@end
