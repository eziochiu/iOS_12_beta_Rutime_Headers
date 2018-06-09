/* made by EzioChiu.
 */

@protocol _SFPBMediaItem <NSObject>

@required

- (void)addBuyOptions:(_SFPBMediaOffer *)arg1;
- (void)addSubtitleCustomLineBreaking:(NSString *)arg1;
- (NSArray *)buyOptions;
- (_SFPBMediaOffer *)buyOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buyOptionsCount;
- (void)clearBuyOptions;
- (void)clearSubtitleCustomLineBreaking;
- (NSString *)contentAdvisory;
- (_SFPBImage *)contentAdvisoryImage;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBImage *)overlayImage;
- (_SFPBPunchout *)punchout;
- (_SFPBImage *)reviewGlyph;
- (NSString *)reviewText;
- (void)setBuyOptions:(NSArray *)arg1;
- (void)setContentAdvisory:(NSString *)arg1;
- (void)setContentAdvisoryImage:(_SFPBImage *)arg1;
- (void)setOverlayImage:(_SFPBImage *)arg1;
- (void)setPunchout:(_SFPBPunchout *)arg1;
- (void)setReviewGlyph:(_SFPBImage *)arg1;
- (void)setReviewText:(NSString *)arg1;
- (void)setSubtitleCustomLineBreakings:(NSArray *)arg1;
- (void)setSubtitleText:(_SFPBText *)arg1;
- (void)setThumbnail:(_SFPBImage *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleCustomLineBreakingCount;
- (NSArray *)subtitleCustomLineBreakings;
- (_SFPBText *)subtitleText;
- (_SFPBImage *)thumbnail;
- (NSString *)title;

@end
