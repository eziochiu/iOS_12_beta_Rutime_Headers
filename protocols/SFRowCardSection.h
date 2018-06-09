/* made by EzioChiu.
 */

@protocol SFRowCardSection <SFCardSection>

@required

- (SFImage *)attributionImage;
- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (bool)cardPaddingBottom;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (SFImage *)image;
- (bool)imageIsRightAligned;
- (NSData *)jsonData;
- (NSString *)key;
- (bool)keyNoWrap;
- (NSNumber *)keyWeight;
- (SFRichText *)leadingSubtitle;
- (SFRichText *)leadingText;
- (NSString *)leftText;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (NSString *)rightText;
- (int)separatorStyle;
- (void)setAttributionImage:(SFImage *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardPaddingBottom:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setImageIsRightAligned:(bool)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setKeyNoWrap:(bool)arg1;
- (void)setKeyWeight:(NSNumber *)arg1;
- (void)setLeadingSubtitle:(SFRichText *)arg1;
- (void)setLeadingText:(SFRichText *)arg1;
- (void)setLeftText:(NSString *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setRightText:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrailingSubtitle:(SFRichText *)arg1;
- (void)setTrailingText:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setValue:(NSString *)arg1;
- (void)setValueNoWrap:(bool)arg1;
- (void)setValueWeight:(NSNumber *)arg1;
- (SFRichText *)trailingSubtitle;
- (SFRichText *)trailingText;
- (NSString *)type;
- (NSString *)value;
- (bool)valueNoWrap;
- (NSNumber *)valueWeight;

@end
