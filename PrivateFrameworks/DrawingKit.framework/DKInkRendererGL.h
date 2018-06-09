/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKInkRendererGL : GLKView <DKInkRenderer, DKOpenGLRendererDelegate> {
    double  _backingScale;
    NSMutableArray * _brushPointQueue;
    NSMutableArray * _brushStrokes;
    NSMutableArray * _currentBrushStroke;
    double  _drawingScale;
    bool  _initialized;
    UIColor * _inkColor;
    DKOpenGLRenderer * _inkRenderer;
    unsigned long long  _mode;
    bool  _needToNotify;
    <DKInkRendererDelegate> * delegate;
    bool  drawingEnabled;
    bool  scaleDrawingToFitCanvas;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DKInkRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawingEnabled;
@property (nonatomic) double drawingScale;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initialized;
@property (nonatomic, retain) UIColor *inkColor;
@property (nonatomic, readonly) unsigned long long maximumPointsForBleedAnimation;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) bool scaleDrawingToFitCanvas;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBleedAnimation;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)addPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; })arg1;
- (void)addPointsFromBrushPointQueueWithSegmentLength:(unsigned long long)arg1;
- (void)beginStroke;
- (bool)canBecomeFirstResponder;
- (void)clear;
- (void)completeAnimationsImmediately;
- (void)dealloc;
- (id)delegate;
- (void)display;
- (void)displayForcefully;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawingEnabled;
- (double)drawingScale;
- (void)endStroke;
- (void)flush;
- (void)force;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)initialized;
- (id)inkColor;
- (void)layoutSubviews;
- (unsigned long long)maximumPointsForBleedAnimation;
- (unsigned long long)mode;
- (void)removeLastStroke;
- (void)rendererDidFinishAnimatingDrawing:(id)arg1;
- (void)resetRendererState;
- (bool)scaleDrawingToFitCanvas;
- (void)setDelegate:(id)arg1;
- (void)setDrawingEnabled:(bool)arg1;
- (void)setDrawingScale:(double)arg1;
- (void)setInkColor:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setScaleDrawingToFitCanvas:(bool)arg1;
- (id)snapshot;
- (bool)supportsBleedAnimation;
- (void)teardown;

@end
