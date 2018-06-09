/* made by EzioChiu.
 */

@protocol VUILibraryProductLockupViewLayout <NSObject>

@required

- (double)buttonModuleTopMargin;
- (double)contentDescriptionBottomMargin;
- (UIFont *)contentDescriptionFont;
- (int)contentDescriptionNumberOfLines;
- (double)contentDescriptionTopMargin;
- (double)coverArtBottomPadding;
- (double)coverArtImageRightMargin;
- (struct CGSize { double x1; double x2; })coverArtImageSize;
- (long long)downloadButtonPosition;
- (long long)layoutType;
- (double)metadataTopMargin;
- (bool)shouldShowTitleLabel;
- (double)subtitleTopMargin;
- (double)titleTopMargin;

@end
