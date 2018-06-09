/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKInkRendererCG : UIView <DKInkRenderer> {
    NSMutableArray * _cachedInterpolatedBrushStrokes;
    NSMutableArray * _currentInterpolatedBrushStroke;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _invalidRect;
    <DKInkRendererDelegate> * delegate;
    bool  drawingEnabled;
    double  drawingScale;
    UIColor * inkColor;
    unsigned long long  mode;
    bool  scaleDrawingToFitCanvas;
}

@property (nonatomic, retain) NSMutableArray *cachedInterpolatedBrushStrokes;
@property (nonatomic, retain) NSMutableArray *currentInterpolatedBrushStroke;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DKInkRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawingEnabled;
@property (nonatomic) double drawingScale;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initialized;
@property (nonatomic, retain) UIColor *inkColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } invalidRect;
@property (nonatomic, readonly) unsigned long long maximumPointsForBleedAnimation;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) bool scaleDrawingToFitCanvas;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBleedAnimation;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)addPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; })arg1;
- (void)beginStroke;
- (id)cachedInterpolatedBrushStrokes;
- (void)clear;
- (void)completeAnimationsImmediately;
- (id)currentInterpolatedBrushStroke;
- (void)dealloc;
- (id)delegate;
- (void)display;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawingEnabled;
- (double)drawingScale;
- (void)endStroke;
- (void)flush;
- (void)force;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)initialized;
- (id)inkColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })invalidRect;
- (unsigned long long)maximumPointsForBleedAnimation;
- (unsigned long long)mode;
- (void)removeLastStroke;
- (void)resetRendererState;
- (bool)scaleDrawingToFitCanvas;
- (void)setCachedInterpolatedBrushStrokes:(id)arg1;
- (void)setCurrentInterpolatedBrushStroke:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingEnabled:(bool)arg1;
- (void)setDrawingScale:(double)arg1;
- (void)setInkColor:(id)arg1;
- (void)setInvalidRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setScaleDrawingToFitCanvas:(bool)arg1;
- (id)snapshot;
- (bool)supportsBleedAnimation;
- (void)teardown;

@end
