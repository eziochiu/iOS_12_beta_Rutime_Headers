/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *dominantScript;
@property (readonly, copy) NSDictionary *languageMap;

+ (id)_orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;
+ (id)_scriptNameForScriptIndex:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultOrthographyForLanguage:(id)arg1;
+ (void)initialize;
+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)allLanguages;
- (id)allScripts;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)arg1;
- (id)dominantScript;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)languageMap;
- (id)languagesForScript:(id)arg1;
- (unsigned int)orthographyFlags;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
