/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVHostApplicationDelegateHandler : NSObject <PVHostApplicationDelegate> {
    <PVHostApplicationDelegate> * _hostApplicationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PVHostApplicationDelegate> *hostApplicationDelegate;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)effectTemplatesBundle;
- (id)effectTemplatesDirectoryName;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (id)hostApplicationDelegate;
- (void)setHostApplicationDelegate:(id)arg1;
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
