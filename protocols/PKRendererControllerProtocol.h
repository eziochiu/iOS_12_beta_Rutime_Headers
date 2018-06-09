/* made by EzioChiu.
 */

@protocol PKRendererControllerProtocol <NSObject>

@required

- (void)_copyIntoTilesFromRenderQueue:(NSArray *)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CGSize { double x1; double x2; })actualSize;
- (double)backboardPaperMultiply;
- (void)buildRenderCacheForStrokes:(NSArray *)arg1;
- (void)callBlockAfterPresenting:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cancelAllRendering;
- (void)cancelLongRunningRenders;
- (void)cancelVSyncTimeoutBlock;
- (void)changeRenderSize;
- (void)clear;
- (void)copyIntoTiles:(NSArray *)arg1;
- (void)didFinishRendering:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)didTeardownTile;
- (void)disableRendering;
- (void)drawImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2;
- (void)drawImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawStrokes:(void *)arg1 clippedToStrokeSpaceRect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)drawStrokes:(NSArray *)arg1 intoTile:(PKRendererTile *)arg2 renderCount:(long long)arg3;
- (void)drawStrokes:(void *)arg1 renderIntermediateSteps:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)drawStrokesAfterClear:(void *)arg1 clippedToStrokeSpaceRect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)drawStrokesAfterClear:(void *)arg1 clippedToStrokeSpaceRect:(void *)arg2 strokeTransform:(void *)arg3 useLayerContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)drawingBeganWithStroke:(PKStroke *)arg1;
- (void)drawingCancelled;
- (void)drawingCancelledWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)drawingEnded:(void *)arg1 finishStrokeBlock:(void *)arg2; // needs 2 arg types, found 6: <PKInputProvider> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enableRendering;
- (id)initWithPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2 renderQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (PKStrokeGenerator *)inputController;
- (PKLinedPaper *)linedPaper;
- (struct CGImage { }*)newCGImage;
- (struct CGImage { }*)newCGImageWithClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })paperTransform;
- (struct CGSize { double x1; double x2; })pixelSize;
- (bool)prerenderWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)purgeOriginalBackFramebuffer;
- (NSObject<OS_dispatch_queue> *)renderQueue;
- (void)renderStrokes:(void *)arg1 clippedToStrokeSpaceRect:(void *)arg2 strokeTransform:(void *)arg3 imageClipRect:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGImage { }*, void*
- (void)renderTiles:(NSArray *)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)renderTilesIntoTiles:(NSMapTable *)arg1;
- (void)resumeLongRunningRenders;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)setBackboardPaperMultiply:(double)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundImage:(struct CGImage { }*)arg1;
- (void)setLinedPaper:(PKLinedPaper *)arg1;
- (void)setPaperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setStrokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScissor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setup;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (void)teardown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewScissor;

@end
