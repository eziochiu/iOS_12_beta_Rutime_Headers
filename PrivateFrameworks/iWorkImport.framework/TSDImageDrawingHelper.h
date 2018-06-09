/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageDrawingHelper : NSObject {
    TSDRep<TSDImageDrawingDataSource> * _rep;
}

@property (nonatomic, readonly) bool drawsBitmap;
@property (nonatomic, readonly) bool drawsError;
@property (nonatomic, readonly) TSPData *imageDataForDrawing;
@property (nonatomic, readonly) TSDRep<TSDImageDrawingDataSource> *rep;
@property (nonatomic, readonly) bool shouldShowCheckerboard;

- (void).cxx_destruct;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1 forLayer:(bool)arg2 forShadowOrHitTest:(bool)arg3;
- (bool)drawsBitmap;
- (bool)drawsError;
- (id)imageDataForDrawing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectInContext:(struct CGContext { }*)arg1;
- (id)initWithRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_antialiasingDefeatedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)p_canDrawThumbnailAsSizedImage;
- (struct CGSize { double x1; double x2; })p_desiredSizedImageSize;
- (struct CGSize { double x1; double x2; })p_imagePixelSize;
- (id)p_imageProvider;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)p_validatedThumbnailImageProvider;
- (id)rep;
- (bool)shouldShowCheckerboard;
- (void)teardown;

@end
