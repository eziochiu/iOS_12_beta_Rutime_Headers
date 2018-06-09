/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _baseString;
}

+ (id)glyphInfoWithCGGlyph:(unsigned short)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_baseString;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (id)baseString;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyphID;
- (id)glyphName;
- (id)initWithBaseString:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
