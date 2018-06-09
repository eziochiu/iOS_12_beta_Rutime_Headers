/* made by EzioChiu.
 */

@protocol SFMapCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (SFMapRegion *)boundingMapRegion;
- (bool)canBeHidden;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)footnote;
- (NSString *)footnoteLabel;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)interactive;
- (NSData *)jsonData;
- (SFLatLng *)location;
- (int)pinBehavior;
- (SFColor *)pinColor;
- (NSArray *)pins;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setBoundingMapRegion:(SFMapRegion *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setFootnoteLabel:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLocation:(SFLatLng *)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(SFColor *)arg1;
- (void)setPins:(NSArray *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSizeFormat:(int)arg1;
- (void)setType:(NSString *)arg1;
- (int)sizeFormat;
- (NSString *)type;

@end
