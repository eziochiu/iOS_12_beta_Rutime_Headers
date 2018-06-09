/* made by EzioChiu.
 */

@protocol PVHostApplicationDelegate <NSObject>

@optional

- (NSBundle *)effectTemplatesBundle;
- (NSString *)effectTemplatesDirectoryName;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (bool)wantsDynamicLineSpacingForDiacritics;
- (bool)wantsExtraLineSpacingForDiacritics;
- (bool)wantsToAdjustTextBoundsHeightUsingCapHeight;
- (bool)wantsToComputeTypographicHeightWithoutLastLineLeading;
- (bool)wantsToDownscaleGlyphsToOutputSize;
- (bool)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
- (bool)wantsToIgnoreTextBoundsOfTransparentObjects;
- (bool)wantsToImproveQualityOfDraftQualityText;
- (bool)wantsToIncludeSubstituteFontNameInAttributedString;
- (bool)wantsToIncludeTrackingValueInAttributedString;
- (bool)wantsToLimitLinesOfText;
- (bool)wantsToScaleEmojiToCapHeight;
- (bool)wantsToSetTranscriptionsUsingArray;
- (bool)wantsToSkipSuggestedLineBreaksInParagraphLayout;
- (bool)wantsToUseBinarySearchForScalingToBothMargins;
- (bool)wantsToUseCachedTextureForText;

@end
