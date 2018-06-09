/* made by EzioChiu.
 */

@protocol DKInkRenderer <NSObject>

@required

- (void)addPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; })arg1;
- (void)beginStroke;
- (void)clear;
- (void)completeAnimationsImmediately;
- (<DKInkRendererDelegate> *)delegate;
- (void)display;
- (bool)drawingEnabled;
- (double)drawingScale;
- (void)endStroke;
- (void)flush;
- (void)force;
- (bool)initialized;
- (UIColor *)inkColor;
- (unsigned long long)maximumPointsForBleedAnimation;
- (unsigned long long)mode;
- (void)removeLastStroke;
- (void)resetRendererState;
- (bool)scaleDrawingToFitCanvas;
- (void)setDelegate:(id <DKInkRendererDelegate>)arg1;
- (void)setDrawingEnabled:(bool)arg1;
- (void)setDrawingScale:(double)arg1;
- (void)setInkColor:(UIColor *)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setScaleDrawingToFitCanvas:(bool)arg1;
- (UIImage *)snapshot;
- (bool)supportsBleedAnimation;
- (void)teardown;

@end
