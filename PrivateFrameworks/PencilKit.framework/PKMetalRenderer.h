/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalRenderer : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    struct vector<(anonymous namespace)::AnimatingStroke, std::__1::allocator<(anonymous namespace)::AnimatingStroke> >="__begin_"^{AnimatingStroke {}  _animatingStrokes;
    double  _backboardPaperMultiply;
    struct CGColor { } * _backgroundColor;
    <MTLTexture> * _backgroundImageTexture;
    <MTLCommandQueue> * _commandQueue;
    CIContext * _coreImageContext;
    unsigned long long  _currentCacheSize;
    PKMetalRenderState * _currentRenderState;
    <MTLDevice> * _device;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawingPixelSize;
    double  _eraserIndicatorAlpha;
    double  _fromStrokeSpaceScale;
    double  _inputScale;
    struct _PKStrokePoint { 
        double timestamp; 
        struct CGPoint { 
            double x; 
            double y; 
        } location; 
        double radius; 
        double aspectRatio; 
        double edgeWidth; 
        double force; 
        double azimuth; 
        double altitude; 
        double opacity; 
    }  _lastPointForEraser;
    bool  _lastPointForEraserIsValid;
    double  _latestTimestamp;
    PKLinedPaper * _linedPaper;
    PKMetalFramebuffer * _originalBackFramebuffer;
    unsigned long long  _paintAndParticlePixelFormat;
    PKMetalFramebuffer * _paintFramebuffer;
    PKMetalFramebuffer * _paintFramebufferAccumulator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _paintFramebufferDirtyRect;
    PKMetalShader * _paintShader;
    struct vector<PKMetalPaintStrokePoint, std::__1::allocator<PKMetalPaintStrokePoint> > { 
        struct PKMetalPaintStrokePoint {} *__begin_; 
        struct PKMetalPaintStrokePoint {} *__end_; 
        struct __compressed_pair<PKMetalPaintStrokePoint *, std::__1::allocator<PKMetalPaintStrokePoint> > { 
            struct PKMetalPaintStrokePoint {} *__value_; 
        } __end_cap_; 
    }  _paintStrokePointBuffer;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _paperTransform;
    <MTLBuffer> * _particleIndexBuffer;
    PKMetalShader * _particleShader;
    PKMetalShader * _particleShaderWithAspectRatioSupport;
    struct vector<PKMetalParticleStrokePoint, std::__1::allocator<PKMetalParticleStrokePoint> > { 
        struct PKMetalParticleStrokePoint {} *__begin_; 
        struct PKMetalParticleStrokePoint {} *__end_; 
        struct __compressed_pair<PKMetalParticleStrokePoint *, std::__1::allocator<PKMetalParticleStrokePoint> > { 
            struct PKMetalParticleStrokePoint {} *__value_; 
        } __end_cap_; 
    }  _particleStrokePointBuffer;
    unsigned long long  _pixelFormat;
    <MTLBuffer> * _randomNumberBuffer;
    PKMetalResourceHandler * _resourceHandler;
    bool  _shouldClearOriginalBackFramebuffer;
    bool  _solidColorBackboard;
    unsigned long long  _stencilPixelFormat;
    struct vector<(anonymous namespace)::StrokeVertex, std::__1::allocator<(anonymous namespace)::StrokeVertex> >="__begin_"^{StrokeVertex {}  _strokeBuffer;
    unsigned long long  _strokeBufferCount;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewScissor;
}

@property (nonatomic) struct CGSize { double x1; double x2; } actualSize;
@property (nonatomic) double backboardPaperMultiply;
@property (nonatomic) struct CGColor { }*backgroundColor;
@property (nonatomic) double eraserIndicatorAlpha;
@property (nonatomic) double inputScale;
@property (nonatomic, readonly) bool isFinishedRendering;
@property (nonatomic, readonly) double latestTimestamp;
@property (nonatomic, retain) PKLinedPaper *linedPaper;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } paperTransform;
@property (nonatomic, readonly) PKMetalResourceHandler *resourceHandler;
@property (nonatomic) bool solidColorBackboard;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewScissor;

+ (id)tileQueue;
+ (bool)useBlitEncoder;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)CIImageFromTexture:(id)arg1;
- (unsigned long long)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 stopBlock:(id /* block */)arg4;
- (struct CGSize { double x1; double x2; })actualSize;
- (void)addBufferForRenderCache:(id)arg1 strokeVertices:(struct StrokeVertex { float x1; float x2; struct half { unsigned short x_3_1_1; } x3; struct half { unsigned short x_4_1_1; } x4; struct half { unsigned short x_5_1_1; } x5; struct half { unsigned short x_6_1_1; } x6; }*)arg2 numVertices:(unsigned long long)arg3;
- (bool)applyStrokeSpaceClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (double)backboardPaperMultiply;
- (struct CGColor { }*)backgroundColor;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)cancelLiveStroke;
- (void)clear;
- (unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 stopBlock:(id /* block */)arg4;
- (void)clearAndRenderTiles:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 waitUntilCompleted:(bool)arg3;
- (void)clearFramebuffer:(id)arg1 waitUntilCompleted:(bool)arg2;
- (void)clearNowWithStrokeSpaceClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)clearPaintFramebuffers;
- (void)clearPaintFramebuffersWithRenderEncoder:(id)arg1;
- (void)clearTile:(id)arg1 waitUntilCompleted:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRectForVertices:(const struct StrokeVertex { float x1; float x2; struct half { unsigned short x_3_1_1; } x3; struct half { unsigned short x_4_1_1; } x4; struct half { unsigned short x_5_1_1; } x5; struct half { unsigned short x_6_1_1; } x6; }*)arg1 numVertices:(unsigned long long)arg2;
- (unsigned long long)colorAttachmentIndexFromFramebuffer:(id)arg1;
- (void)copyFromFramebuffer:(id)arg1 toFramebuffer:(id)arg2 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 renderEncoder:(id)arg4;
- (void)copyIntoPaintFromTexture:(id)arg1 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderEncoder:(id)arg3;
- (void)copyIntoTile:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 waitUntilCompleted:(bool)arg3;
- (void)dealloc;
- (void)debugFramebuffers;
- (void)didTeardownTile;
- (void)disableClippingForRenderEncoder:(id)arg1;
- (void)drawNewPointsAt:(double)arg1;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(id /* block */)arg2;
- (bool)ensureOriginalBackFramebufferHasContents;
- (double)eraserIndicatorAlpha;
- (void)finishLiveStrokeAndPresentDrawable:(id)arg1 waitUntilScheduled:(bool)arg2;
- (void)finishRendering;
- (void)finishRenderingClippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2 renderEncoder:(id)arg3;
- (void)finishRenderingNoTeardownForStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1 clippedToPixelSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderEncoder:(id)arg3;
- (void)finishStroke;
- (void)flushMemoryIfPossible;
- (id)framebufferForTile:(id)arg1 createIfNeeded:(bool)arg2;
- (id)generateCacheForParticleStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1 points:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg2 startPt:(bool)arg3 endPt:(bool)arg4;
- (id)generateCacheForPenStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1 points:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg2;
- (id)generateCacheForStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1 points:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg2;
- (id)generatePaintCacheForStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2;
- (id)generateParticleCacheForStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2 starts:(bool)arg3 ends:(bool)arg4;
- (void)getAndRenderNewPoints:(id)arg1;
- (id)initWithDrawingPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2 device:(id)arg3 resourceHandler:(id)arg4;
- (double)inputScale;
- (bool)isFinishedRendering;
- (double)latestTimestamp;
- (id)linedPaper;
- (struct CGImage { }*)newCGImage;
- (struct CGImage { }*)newCGImageFromTexture:(id)arg1 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 copyImage:(bool)arg3;
- (struct CGImage { }*)newCGImageWithClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)newCGImageWithClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 copyImage:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })paperTransform;
- (void)purgeOriginalBackFramebuffer;
- (void)purgePaintFramebuffers;
- (void)renderAheadWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 onPaper:(bool)arg2 renderBufferSize:(struct CGSize { double x1; double x2; })arg3 destinationTexture:(id)arg4;
- (void)renderAnimatingStrokesWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 renderBufferSize:(struct CGSize { double x1; double x2; })arg2;
- (void)renderBrushIndicatorForStroke:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 mode:(long long)arg3 flipped:(bool)arg4;
- (id)renderCommandEncoderForCommandBuffer:(id)arg1 backBufferLoadAction:(unsigned long long)arg2 backBufferStoreAction:(unsigned long long)arg3 paintBufferLoadAction:(unsigned long long)arg4 accumulatorBufferLoadAction:(unsigned long long)arg5 destinationLoadAction:(unsigned long long)arg6;
- (void)renderFullscreenQuadWithShader:(id)arg1 renderEncoder:(id)arg2;
- (void)renderImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2;
- (void)renderImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)renderImage:(struct CGImage { }*)arg1 intoFramebuffer:(id)arg2 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)renderLinesRenderBufferSize:(struct CGSize { double x1; double x2; })arg1 renderEncoder:(id)arg2;
- (void)renderLiveStrokeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 renderBufferSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)renderPaintRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg4;
- (void)renderPaperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 paperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 flipped:(bool)arg3 multiply:(double)arg4 renderEncoder:(id)arg5;
- (unsigned long long)renderParticleRenderCache:(id)arg1 renderEncoder:(id)arg2 computeEncoder:(id)arg3 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg4;
- (unsigned long long)renderParticleStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2 starts:(bool)arg3 ends:(bool)arg4 combinedRendering:(bool)arg5 renderEncoder:(id)arg6;
- (void)renderParticleStrokeVertices:(const struct StrokeVertex { float x1; float x2; struct half { unsigned short x_3_1_1; } x3; struct half { unsigned short x_4_1_1; } x4; struct half { unsigned short x_5_1_1; } x5; struct half { unsigned short x_6_1_1; } x6; }*)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3;
- (unsigned long long)renderPenStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2 combinedRendering:(bool)arg3 renderEncoder:(id)arg4;
- (void)renderPenStrokeVertices:(const struct StrokeVertex { float x1; float x2; struct half { unsigned short x_3_1_1; } x3; struct half { unsigned short x_4_1_1; } x4; struct half { unsigned short x_5_1_1; } x5; struct half { unsigned short x_6_1_1; } x6; }*)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3;
- (unsigned long long)renderStroke:(struct _PKStrokePointSlice { struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_1_1_1; } x1; struct __wrap_iter<_PKStrokePoint *> { struct _PKStrokePoint {} *x_2_1_1; } x2; })arg1 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2 accumulating:(bool)arg3 combinedRendering:(bool)arg4 renderEncoder:(id)arg5 computeEncoder:(id)arg6 renderCache:(id)arg7;
- (void)renderStroke:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 mode:(long long)arg3 flipped:(bool)arg4 renderBufferSize:(struct CGSize { double x1; double x2; })arg5 renderEncoder:(id)arg6 currentClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7;
- (unsigned long long)renderStrokeRenderCache:(id)arg1 renderEncoder:(id)arg2 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg3 indexed:(bool)arg4;
- (unsigned long long)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 stopBlock:(id /* block */)arg4;
- (unsigned long long)renderStrokes:(id)arg1 stopBlock:(id /* block */)arg2;
- (void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 renderState:(id)arg4;
- (void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 destinationPosition:(struct CGPoint { double x1; double x2; })arg4 renderState:(id)arg5;
- (void)renderTexture:(id)arg1 intoFramebuffer:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 renderState:(id)arg5;
- (void)renderTile:(id)arg1 intoTile:(id)arg2 waitUntilCompleted:(bool)arg3;
- (void)renderTile:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 renderState:(id)arg3;
- (void)renderWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 animatingStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2 mode:(long long)arg3 clipped:(bool)arg4 renderBufferSize:(struct CGSize { double x1; double x2; })arg5 renderEncoder:(id)arg6;
- (void)resetPaintFramebufferAccumulateIfNeeded;
- (id)resourceHandler;
- (void)setActualSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackboardPaperMultiply:(double)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundImage:(struct CGImage { }*)arg1;
- (void)setEraserIndicatorAlpha:(double)arg1;
- (void)setInputScale:(double)arg1;
- (void)setLinedPaper:(id)arg1;
- (void)setPaperTextureOnRenderEncoder:(id)arg1 fragmentUniforms:(struct PKMetalUberFragmentUniforms { float x1; float x2; }*)arg2;
- (void)setPaperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setShouldClearOriginalFramebuffer;
- (void)setSolidColorBackboard:(bool)arg1;
- (void)setStrokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setVertexBuffersForVertices:(const struct StrokeVertex { float x1; float x2; struct half { unsigned short x_3_1_1; } x3; struct half { unsigned short x_4_1_1; } x4; struct half { unsigned short x_5_1_1; } x5; struct half { unsigned short x_6_1_1; } x6; }*)arg1 numVertices:(unsigned long long)arg2 renderEncoder:(id)arg3;
- (void)setViewScissor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setup;
- (void)setupCachedResourcesIfNecessary;
- (void)setupDrawingFramebuffersIfNecessaryLiveRendering:(bool)arg1;
- (void)setupForDefaultUberVertexShaderInRenderEncoder:(id)arg1;
- (void)setupOriginalBackFramebufferIfNecessary;
- (void)setupRenderEncoder:(id)arg1 forParticleStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2;
- (void)setupRenderEncoder:(id)arg1 forPenStroke:(struct AnimatingStroke { id x1; bool x2; struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter> > { struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter> > { struct PKBSplineFilter {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter> > { struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter> > { struct PKOutputTimeFilter {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<PKMetalInputProvider, std::__1::default_delete<PKMetalInputProvider> > { struct __compressed_pair<PKMetalInputProvider *, std::__1::default_delete<PKMetalInputProvider> > { struct PKMetalInputProvider {} *x_1_2_1; } x_5_1_1; } x5; long long x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2;
- (void)setupRenderStateForLiveRenderingDestinationTexture:(id)arg1 destinationLoadAction:(unsigned long long)arg2 accumLoadAction:(unsigned long long)arg3;
- (void)setupRenderStateForStrokeRendering;
- (void)setupRenderStateForStrokeRenderingNeedPaintBuffer:(bool)arg1;
- (void)setupStrokeBufferIfNecessary;
- (void)setupUberVertexShaderWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 paperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 renderEncoder:(id)arg3;
- (bool)solidColorBackboard;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeRenderTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeRenderTransformForFramebufferSize:(struct CGSize { double x1; double x2; })arg1 flipped:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (void)teardownDrawingFramebuffers;
- (void)teardownRenderStateIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewScissor;

@end
