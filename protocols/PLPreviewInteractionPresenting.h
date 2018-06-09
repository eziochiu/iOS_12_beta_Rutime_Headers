/* made by EzioChiu.
 */

@protocol PLPreviewInteractionPresenting <NSObject>

@required

- (PLPreviewInteractionManager *)previewInteractionManager;
- (UIView *)viewForPreview;

@end
