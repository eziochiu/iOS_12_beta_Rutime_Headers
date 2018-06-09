/* made by EzioChiu.
 */

@protocol VideosExtrasCarouselCollectionViewCell <VideosExtrasZoomingImageTransitionParticipant>

@required

- (NSString *)descriptionText;
- (NSString *)descriptionTextStyle;
- (unsigned long long)itemIndex;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(bool)arg1;
- (void)setDescriptionText:(NSAttributedString *)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setSubtitleText:(NSAttributedString *)arg1;
- (void)setThumbnailBorderColor:(UIColor *)arg1;
- (void)setThumbnailImage:(UIImage *)arg1;
- (void)setThumbnailImageAccessibilityText:(NSString *)arg1;
- (void)setThumbnailImagePlaceholder:(UIImage *)arg1;
- (void)setThumbnailMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnailOverlayImage:(UIImage *)arg1;
- (void)setTitleText:(NSAttributedString *)arg1;
- (void)setZoomingImageTransitionIdentifier:(NSString *)arg1;
- (NSString *)subtitleText;
- (NSString *)subtitleTextStyle;
- (UIImage *)thumbnailImage;
- (struct CGSize { double x1; double x2; })thumbnailMaxSize;
- (NSString *)titleText;
- (NSString *)titleTextStyle;

@end
