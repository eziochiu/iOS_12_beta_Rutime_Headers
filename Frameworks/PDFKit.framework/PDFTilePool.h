/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFTilePool : NSObject {
    PDFTilePoolPrivate * _private;
}

+ (id)sharedPool;

- (void).cxx_destruct;
- (void)_reclaimRecyclePool;
- (void)_releaseTiles;
- (void)dealloc;
- (bool)drawTileEdges;
- (id)init;
- (void)queryUsedTiles:(int*)arg1 andFreeTiles:(int*)arg2;
- (void)releasePDFTileSurface:(id)arg1 shouldRecycle:(bool)arg2;
- (void)renderIOTileForRequest:(id)arg1;
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6 shouldAntiAlias:(bool)arg7;
- (void)setDrawTileEdges:(bool)arg1;
- (void)setSaveBitmapFiles;
- (void)setTileRenderType:(int)arg1;
- (int)tileRenderType;

@end
