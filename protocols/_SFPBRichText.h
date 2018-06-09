/* made by EzioChiu.
 */

@protocol _SFPBRichText <NSObject>

@required

- (void)addFormattedTextPieces:(_SFPBFormattedText *)arg1;
- (void)addIcons:(_SFPBImage *)arg1;
- (void)clearFormattedTextPieces;
- (void)clearIcons;
- (NSString *)contentAdvisory;
- (NSArray *)formattedTextPieces;
- (_SFPBFormattedText *)formattedTextPiecesAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedTextPiecesCount;
- (NSArray *)icons;
- (_SFPBImage *)iconsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContentAdvisory:(NSString *)arg1;
- (void)setFormattedTextPieces:(NSArray *)arg1;
- (void)setIcons:(NSArray *)arg1;
- (void)setStarRating:(_SFPBGraphicalFloat *)arg1;
- (void)setText:(_SFPBText *)arg1;
- (_SFPBGraphicalFloat *)starRating;
- (_SFPBText *)text;

@end
