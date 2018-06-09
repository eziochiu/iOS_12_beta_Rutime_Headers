/* made by EzioChiu.
 */

@protocol PXMutableImageRequester <NSObject>

@required

- (<PXDisplayAsset> *)asset;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })desiredContentsRect;
- (void)handlePreloadedImage:(UIImage *)arg1;
- (void)handlePreloadedImageRequester:(PXImageRequester *)arg1;
- (<PXUIImageProvider> *)mediaProvider;
- (double)scale;
- (void)setAsset:(id <PXDisplayAsset>)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDesiredContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMediaProvider:(id <PXUIImageProvider>)arg1;
- (void)setScale:(double)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
