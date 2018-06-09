/* made by EzioChiu.
 */

@protocol GGLLayer

@required

- (int)backingFormat;
- (struct CGSize { double x1; double x2; })backingSize;
- (void)didEnterBackground;
- (void)onTimerFired:(double)arg1;
- (<GGLLayerDelegate> *)renderDelegate;
- (void)setRenderDelegate:(id <GGLLayerDelegate>)arg1;

@end
