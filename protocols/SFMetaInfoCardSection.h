/* made by EzioChiu.
 */

@protocol SFMetaInfoCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (SFImage *)badge;
- (bool)canBeHidden;
- (NSURL *)contentURL;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSURL *)hostPageURL;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setBadge:(SFImage *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setContentURL:(NSURL *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHostPageURL:(NSURL *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrending:(bool)arg1;
- (void)setType:(NSString *)arg1;
- (bool)trending;
- (NSString *)type;

@end
