/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKRendererController : NSObject <PKRendererControllerProtocol, PKRendererVSyncControllerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    NSObject<OS_dispatch_semaphore> * _canBeginRenderSemaphore;
    int  _cancelAllRendering;
    int  _cancelLongRunningRenderingCount;
    PKStrokeGenerator * _inputController;
    double  _inputScale;
    bool  _isTorndown;
    double  _lastFrameDuration;
    PKLinedPaper * _linedPaper;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _paperTransform;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    NSMutableArray * _postPresentCallbacks;
    double  _presentationCount;
    double  _presentationDelay;
    double  _presentationDelayGrowth;
    CAEAGLLayer * _presentationLayer;
    double  _presentationMaxDelay;
    int  _queuedRenders;
    struct atomic_flag { 
        bool _Value; 
    }  _readyToBeginRender;
    NSObject<OS_dispatch_queue> * _renderQueue;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _renderTransform;
    PKRenderer * _renderer;
    unsigned int  _resolveColorRenderbuffer;
    unsigned int  _resolveFramebuffer;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    id /* block */  _vSyncTimeoutBlock;
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
    int  renderbufferHeight;
    int  renderbufferWidth;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } actualSize;
@property (nonatomic) double backboardPaperMultiply;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKStrokeGenerator *inputController;
@property double inputScale;
@property (nonatomic, retain) PKLinedPaper *linedPaper;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } paperTransform;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *renderQueue;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } renderTransform;
@property (nonatomic, retain) PKRenderer *renderer;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewScissor;

- (void).cxx_destruct;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)_createFramebuffer;
- (void)_deleteFramebuffer;
- (void)_discard;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 useLayerContext:(bool)arg4 renderCompletion:(id /* block */)arg5;
- (void)_present:(double)arg1;
- (void)_renderAheadWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 at:(double)arg2;
- (void)_renderAndPresent:(bool)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)_renderDrawPoints;
- (void)_renderLiveStrokeAndPresentWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 at:(double)arg2;
- (struct CGSize { double x1; double x2; })actualSize;
- (double)backboardPaperMultiply;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)callBlockAfterPresenting:(id /* block */)arg1;
- (void)cancelAllRendering;
- (void)cancelLongRunningRenders;
- (void)cancelVSyncTimeoutBlock;
- (void)changeRenderSize;
- (void)clear;
- (void)copyIntoTiles:(id)arg1;
- (void)dealloc;
- (void)didFinishRendering:(id /* block */)arg1;
- (void)didTeardownTile;
- (void)disableRendering;
- (void)drawImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2;
- (void)drawImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(bool)arg2 completion:(id /* block */)arg3;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 useLayerContext:(bool)arg4 completion:(id /* block */)arg5;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawingCancelled;
- (void)drawingCancelledWithCompletion:(id /* block */)arg1;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(id /* block */)arg2;
- (void)enableRendering;
- (void)flushMemoryIfPossible;
- (id)init;
- (id)initWithPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2 renderQueue:(id)arg3;
- (id)inputController;
- (double)inputScale;
- (bool)isAllRenderingCancelled;
- (bool)isLongRunningRenderingCancelled;
- (id)linedPaper;
- (struct CGImage { }*)newCGImage;
- (struct CGImage { }*)newCGImageWithClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })paperTransform;
- (struct CGSize { double x1; double x2; })pixelSize;
- (bool)prerenderWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)purgeOriginalBackFramebuffer;
- (id)renderQueue;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 imageClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 completion:(id /* block */)arg5;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)renderTilesIntoTiles:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })renderTransform;
- (id)renderer;
- (void)resumeLongRunningRenders;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)setBackboardPaperMultiply:(double)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundImage:(struct CGImage { }*)arg1;
- (void)setInputScale:(double)arg1;
- (void)setLinedPaper:(id)arg1;
- (void)setPaperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setPresentationLayer:(id)arg1;
- (void)setRenderTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setRenderer:(id)arg1;
- (void)setSolidColorBackboard:(bool)arg1;
- (void)setStrokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScissor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setup;
- (void)signalVSyncSemaphore:(double)arg1;
- (bool)solidColorBackboard;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (void)teardown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewScissor;

@end
