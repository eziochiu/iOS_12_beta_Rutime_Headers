/* made by EzioChiu.
 */

@protocol ICAttachmentPreviewImageUI <NSObject>

@optional

- (void)clearCachedImage;
- (void)clearCachedOrientedImage;
- (bool)hasCachedImage;
- (void)writeOrientedPreviewToDisk;

@end
