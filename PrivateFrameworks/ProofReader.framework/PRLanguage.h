/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRLanguage : NSObject {
    unsigned int  _encoding;
    NSString * _fallbackLocalization;
    NSString * _identifier;
    unsigned char  _languageCode;
    unsigned char  _languageDialect;
    unsigned char  _languageMode;
    NSString * _localization;
    unsigned long long  _orthoIndex;
}

+ (id)dataBundle;
+ (unsigned int)encodingForOrthographyIndex:(unsigned long long)arg1;
+ (id)fallbackLocalizationForLanguage:(id)arg1;
+ (void)getCodesForLanguage:(id)arg1 languageCode:(char *)arg2 languageDialect:(char *)arg3 languageMode:(char *)arg4;
+ (id)languageWithIdentifier:(id)arg1;
+ (id)localizationForLanguage:(id)arg1;
+ (id)localizationsForLanguage:(id)arg1;
+ (unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1;

- (unsigned char)accents;
- (void)dealloc;
- (unsigned int)encoding;
- (id)fallbackLocalization;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isDanish;
- (bool)isDutch;
- (bool)isEnglish;
- (bool)isFinnish;
- (bool)isFrench;
- (bool)isGerman;
- (bool)isItalian;
- (bool)isKorean;
- (bool)isNorwegian;
- (bool)isPolish;
- (bool)isPortuguese;
- (bool)isRussian;
- (bool)isSpanish;
- (bool)isSwedish;
- (bool)isTurkish;
- (unsigned char)languageCode;
- (unsigned char)languageDialect;
- (unsigned char)languageMode;
- (id)localization;
- (unsigned char)oneLetterWords;
- (unsigned long long)orthographyIndex;
- (unsigned char)twoLetterWords;

@end
