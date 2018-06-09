/* made by EzioChiu.
 */

@protocol SFScoreboardCardSection <SFTitleCardSection>

@required

- (NSString *)accessibilityDescription;
- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)eventStatus;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setAccessibilityDescription:(NSString *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setEventStatus:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTeam1:(SFSportsTeam *)arg1;
- (void)setTeam2:(SFSportsTeam *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (SFSportsTeam *)team1;
- (SFSportsTeam *)team2;
- (NSString *)title;
- (NSString *)type;

@end
