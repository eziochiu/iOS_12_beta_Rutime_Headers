/* made by EzioChiu.
 */

@protocol SFMediaItem <NSObject>

@required

- (NSArray *)buyOptions;
- (NSString *)contentAdvisory;
- (SFImage *)contentAdvisoryImage;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFImage *)overlayImage;
- (SFPunchout *)punchout;
- (SFImage *)reviewGlyph;
- (NSString *)reviewText;
- (void)setBuyOptions:(NSArray *)arg1;
- (void)setContentAdvisory:(NSString *)arg1;
- (void)setContentAdvisoryImage:(SFImage *)arg1;
- (void)setOverlayImage:(SFImage *)arg1;
- (void)setPunchout:(SFPunchout *)arg1;
- (void)setReviewGlyph:(SFImage *)arg1;
- (void)setReviewText:(NSString *)arg1;
- (void)setSubtitleCustomLineBreaking:(NSArray *)arg1;
- (void)setSubtitleText:(SFText *)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSArray *)subtitleCustomLineBreaking;
- (SFText *)subtitleText;
- (SFImage *)thumbnail;
- (NSString *)title;

@end
