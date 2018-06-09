/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSIdentityGlyphInfo : NSGlyphInfo <NSSecureCoding> {
    NSFont * _font;
    unsigned int  _glyph;
}

+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_font;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyph;
- (id)initWithCoder:(id)arg1;
- (id)initWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;

@end
