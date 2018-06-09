/* made by EzioChiu.
 */

@protocol _SFPBFormattedText <NSObject>

@required

- (_SFPBImage *)glyph;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isBold;
- (bool)isEmphasized;
- (NSData *)jsonData;
- (void)setGlyph:(_SFPBImage *)arg1;
- (void)setIsBold:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setText:(_SFPBText *)arg1;
- (void)setTextColor:(int)arg1;
- (_SFPBText *)text;
- (int)textColor;

@end
