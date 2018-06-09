/* made by EzioChiu.
 */

@protocol VUIOverlayViewProtocol <NSObject>

@required

- (UIImage *)backgroundImageForMaterialRendering;
- (void)backgroundImageSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (<VUIOverlayLayoutProtocol> *)overlayLayout;
- (void)reset;
- (void)setBackgroundImageForMaterialRendering:(UIImage *)arg1;

@end
