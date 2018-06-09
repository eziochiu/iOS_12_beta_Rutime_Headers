/* made by EzioChiu.
 */

@protocol _SFPBDescriptionCardSection <NSObject>

@required

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)addRichDescriptions:(_SFPBRichText *)arg1;
- (_SFPBImage *)attributionGlyph;
- (NSString *)attributionText;
- (_SFPBURL *)attributionURL;
- (_SFPBColor *)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (void)clearRichDescriptions;
- (bool)descriptionExpand;
- (int)descriptionSize;
- (_SFPBText *)descriptionText;
- (int)descriptionWeight;
- (NSString *)expandText;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (_SFPBImage *)image;
- (int)imageAlign;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (NSArray *)richDescriptions;
- (_SFPBRichText *)richDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)richDescriptionsCount;
- (int)separatorStyle;
- (void)setAttributionGlyph:(_SFPBImage *)arg1;
- (void)setAttributionText:(NSString *)arg1;
- (void)setAttributionURL:(_SFPBURL *)arg1;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptionExpand:(bool)arg1;
- (void)setDescriptionSize:(int)arg1;
- (void)setDescriptionText:(_SFPBText *)arg1;
- (void)setDescriptionWeight:(int)arg1;
- (void)setExpandText:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setRichDescriptions:(NSArray *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTextAlign:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(int)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (int)textAlign;
- (NSString *)title;
- (bool)titleNoWrap;
- (int)titleWeight;
- (NSString *)type;

@end
