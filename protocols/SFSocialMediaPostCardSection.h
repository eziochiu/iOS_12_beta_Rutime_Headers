/* made by EzioChiu.
 */

@protocol SFSocialMediaPostCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)footnote;
- (NSString *)handle;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSData *)jsonData;
- (NSString *)name;
- (NSNumber *)nameMaxLines;
- (bool)nameNoWrap;
- (SFImage *)picture;
- (SFRichText *)post;
- (SFImage *)profilePicture;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setHandle:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setName:(NSString *)arg1;
- (void)setNameMaxLines:(NSNumber *)arg1;
- (void)setNameNoWrap:(bool)arg1;
- (void)setPicture:(SFImage *)arg1;
- (void)setPost:(SFRichText *)arg1;
- (void)setProfilePicture:(SFImage *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTimestamp:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setVerifiedGlyph:(SFImage *)arg1;
- (NSString *)timestamp;
- (NSString *)type;
- (SFImage *)verifiedGlyph;

@end
