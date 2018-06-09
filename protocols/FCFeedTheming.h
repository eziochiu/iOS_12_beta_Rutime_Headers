/* made by EzioChiu.
 */

@protocol FCFeedTheming <NSObject, NFCopying>

@required

- (bool)allowCustomBottomStyle;
- (FCColor *)backgroundColor;
- (double)bannerImageBaselineOffsetPercentage;
- (FCTagBanner *)bannerImageForMask;
- (FCTagBanner *)bannerImageForThemeBackground;
- (FCTagBanner *)bannerImageForWhiteBackground;
- (double)bannerImageScale;
- (FCTagBanner *)compactBannerImage;
- (FCTagBanner *)defaultBannerImage;
- (FCHeadlineTemplate *)defaultHeadlineTemplate;
- (long long)feedType;
- (FCColor *)foregroundColor;
- (FCTextInfo *)headlineBylineTextInfo;
- (FCTextInfo *)headlineExcerptTextInfo;
- (FCTextInfo *)headlineTitleTextInfo;
- (bool)isWhite;
- (NSArray *)loadableFonts;
- (FCAssetHandle *)logoImageAssetHandle;
- (NSString *)name;
- (FCAssetHandle *)nameImageAssetHandle;
- (FCAssetHandle *)nameImageCompactAssetHandle;
- (FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageForDarkBackgroundInsets;
- (struct CGSize { double x1; double x2; })nameImageForDarkBackgroundSize;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageInsets;
- (FCAssetHandle *)nameImageMaskAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageMaskInsets;
- (struct CGSize { double x1; double x2; })nameImageMaskSize;
- (struct CGSize { double x1; double x2; })nameImageSize;

@end
