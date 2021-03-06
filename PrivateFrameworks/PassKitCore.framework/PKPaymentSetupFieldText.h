/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldText : PKPaymentSetupField {
    NSString * _displayFormatPlaceholder;
    bool  _luhnCheck;
    unsigned long long  _maxLength;
    unsigned long long  _minLength;
    bool  _numeric;
    bool  _secureText;
    bool  _secureVisibleText;
}

@property (nonatomic, copy) NSString *displayFormatPlaceholder;
@property (getter=useLuhnCheck, nonatomic) bool luhnCheck;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long minLength;
@property (getter=isNumeric, nonatomic) bool numeric;
@property (getter=isSecureText, nonatomic) bool secureText;
@property (getter=isSecureVisibleText, nonatomic) bool secureVisibleText;

- (void).cxx_destruct;
- (id)displayFormatPaddingCharacters;
- (id)displayFormatPaddingPrefix;
- (id)displayFormatPlaceholder;
- (id)displayString;
- (unsigned long long)fieldType;
- (bool)hasDisplayFormat;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isNumeric;
- (bool)isSecureText;
- (bool)isSecureVisibleText;
- (unsigned long long)maxLength;
- (unsigned long long)minLength;
- (void)setCurrentValue:(id)arg1;
- (void)setDisplayFormatPlaceholder:(id)arg1;
- (void)setLuhnCheck:(bool)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setMinLength:(unsigned long long)arg1;
- (void)setNumeric:(bool)arg1;
- (void)setSecureText:(bool)arg1;
- (void)setSecureVisibleText:(bool)arg1;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (id)submissionString;
- (bool)submissionStringMeetsAllRequirements;
- (void)updateDisplayFormat:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;
- (bool)useLuhnCheck;

@end
